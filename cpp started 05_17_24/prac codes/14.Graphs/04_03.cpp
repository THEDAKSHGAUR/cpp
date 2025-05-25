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
class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjlst;
    void addEdge(int u, int v, int wt, int direction){
        if(direction==0){
            adjlst[u].push_back({v,wt});
            adjlst[v].push_back({u,wt});
        }
        else{
            adjlst[u].push_back({v,wt});
        }
    }
    void printGraph(){
        cout<<"printing adjlst"<<endl;
        for(auto i:adjlst){
            cout<<i.first<<":{ ";
            for(auto j:i.second){
                cout<<"("<<j.first<<", weight: "<<j.second<<")";
            }
            cout<<endl;
        }
    }
    void topoRder(int src, unordered_map<int,bool>&done, stack<int>&st){
        done[src]=true;
        for(auto nbrPair:adjlst[src]){
            int nbrNode=nbrPair.first;
            int nbrDist=nbrPair.second;
            if(!done[nbrNode]){
                topoRder(nbrNode,done,st);
            }
        }
        st.push(src);
    }
    void shortestPathUsingDFS(stack<int>&st,int n){
        vector<int>dist(n,INT_MAX);
        int src=st.top();
        st.pop();
        dist[src]=0;
        
        for(auto nbrPair:adjlst[src]){
            int nbrNode=nbrPair.first;
            int nbrDist=nbrPair.second;
            if(dist[src]+nbrDist<dist[nbrNode]){
                dist[nbrNode]=dist[src]+nbrDist;
            }
        }
        //applying the same concept to all the nodes as well
        while(!st.empty()){
            src=st.top();
            st.pop();
            for(auto nbrPair:adjlst[src]){
                int nbrNode=nbrPair.first;
                int nbrDist=nbrPair.second;
                if(dist[src]+nbrDist<dist[nbrNode]){
                    dist[nbrNode]=dist[src]+nbrDist;
                }
            }
        }
        cout<<"printing the shortest distance array :: ";
        for(int i=0;i<dist.size();i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,1,2,1);
    g.addEdge(1,3,3,1);
    g.addEdge(2,3,5,1);
    g.addEdge(2,4,6,1);
    g.addEdge(4,3,1,1);
    g.printGraph();
    //lets move with topological ordering, initializing the stack and the src to be passed in the func
    int src=0;
    unordered_map<int,bool>done;
    stack<int>st;
    g.topoRder(src,done,st); 
    cout<<endl;
    int n=5;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    g.shortestPathUsingDFS(st,n);
    return 0;
}