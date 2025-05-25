#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>
class graph{
    public:
    unordered_map<T ,list <T>>adjlst;
    void addEdge(T u,T v, T direction){
        if(direction==1){
            adjlst [u].push_back(v);
        }
        else{
            adjlst[u].push_back(v);
            adjlst[v].push_back(u);
        }
        cout<<"printingGraph : "<<endl;
        printGraph();
        cout<<endl;
    }
    void printGraph(){
        for(auto i:adjlst){
            cout<<i.first <<" ->{ ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<"}"<<endl;
        }
    }
    bool iscyclePresent(int src, unordered_map<int,bool>&done){
        queue<int>q;
        unordered_map<int,int>parent;
        //intial state
        q.push(src);
        done[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int front=q.front();
            q.pop();

            for(auto nbr:adjlst[front]){
                // if(done[nbr]==true && parent[nbr]!=front)
                if(!done[nbr]){
                    q.push(nbr);
                    done[nbr]=true;
                    parent[nbr]=front;
                }
                else if(done[nbr]==true && parent[front]!=nbr){
                    // if(parent[front]==parent[parent[nbr]])
                    return true;
                }
            }
        }
        return false;
    }
};
int  main(){
    graph<int>g;
    g.addEdge(0,1,0);
    // g.addEdge(1,2,0); 
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    g.addEdge(2,5,0);
    g.addEdge(3,4,0);
    unordered_map<int,bool>done;
    bool cycle=g.iscyclePresent(0,done);
    if(cycle){
    cout<<"cycle is present";
    }
    else {
        cout<<"cycle is not present";
    }
    return 0;
}