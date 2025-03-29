//BFS and DFS inplemenT aT ion of graph
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
    void bfstraversal(int src,unordered_map<int,bool>&done){
        // unordered_map<int,bool>done;
        queue<int>printQ;
        //intial state
        printQ.push(src);
        done[src]=true;
        //check the conditions
        while(!printQ.empty()){
            int currNode=printQ.front();
            cout<<currNode<<" ";
            printQ.pop();
            //visit to each and every neighbour of the currNode
            for(auto nbr:adjlst[currNode]){
                if(!done[nbr]){
                    printQ.push(nbr);
                    done[nbr]=true;
                }
            }
        }
    }
};
int  main(){
    graph<int>g;
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);
    g.addEdge(5,6,0);
    unordered_map<int,bool>done;
    for(int i=1;i<=6;i++){
        if(!done[i])
        g.bfstraversal(i,done);
    }
    return 0;
}