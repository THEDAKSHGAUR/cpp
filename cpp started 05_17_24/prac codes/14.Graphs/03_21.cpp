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
    void dfsTraversal(T src,unordered_map<int,bool>&done){
        done[src]=true;
        cout<<src<<" ";
        //go to each child of src using the given in the adjlst
        for(auto nbr: adjlst[src]){
            // T nbrData=nbr.first;
            if(!done[nbr])
            dfsTraversal(nbr,done);
        }
    }
};
int  main(){
    graph<int>g;
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);
    g.addEdge(3,5,0);
    g.addEdge(5,5,0);
    g.addEdge(5,6,0);
    unordered_map<int,bool>done;
    g.dfsTraversal(1,done);
    return 0;
}