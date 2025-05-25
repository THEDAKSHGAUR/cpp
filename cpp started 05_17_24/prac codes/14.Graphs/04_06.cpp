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
#include<set>
using namespace std;
class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjlst;
    void addEdge(int u, int v, int weigth, int direction){
        if(direction==0){
            adjlst[u].push_back({v,weigth});
            adjlst[v].push_back({u,weigth});
        }
        else if(direction==1){
            adjlst[u].push_back({v,direction});
        }
    }
    void printGraph(){
        for(auto i:adjlst){
            cout<<i.first<<":{";
            for(auto j:i.second){
                cout<<"("<<j.first<<", weigth: "<<j.second<<")";
            }
            cout<<endl;
        }
    }
    void shortestPathUsingDijkstra(int src, int dest, int n){
        vector<int>dist(n+1,INT_MAX);
        set<pair<int,int>>st;
        //initialize the base conditions;
        st.insert({0,src});
        dist[src]=0;
        //now move to st till void not achieved
        while(!st.empty()){
            auto topElement=st.begin();
            auto topPair=*topElement;
            int topDist=topPair.first;
            int topNode=topPair.second;
            //remove the current pair from the st
            st.erase(st.begin());
            //use for loop to traverse children of current node;
            for(pair<int,int> nbrPair: adjlst[topNode]){
                int nbrNode=nbrPair.first;
                int nbrDist=nbrPair.second;
                //check with the condition of dist
                if(topDist+nbrDist<dist[nbrNode]){
                    //now we have found an optimal distance to be travelled 
                    //create a new entry
                    //before that find the previous entry that to be replaced by new entry
                    auto previousEntry=st.find({dist[nbrNode],nbrNode});
                    if(previousEntry != st.end()){
                        st.erase(previousEntry);
                    }
                    dist[nbrNode]=topDist+nbrDist;
                    //now create a new entry
                    st.insert({dist[nbrNode],nbrNode});
                }
            }
        }
        cout<<"shortest distance from Node "<<src<<" to Node "<<dest<<" is :: "<<dist[dest]<<endl;
    }
};
int main(){
    graph g;
	g.addEdge(1,6,14,0);
	g.addEdge(1,3,9,0);
	g.addEdge(1,2,7,0);
	g.addEdge(2,3,10,0);
	g.addEdge(2,4,15,0);
	g.addEdge(3,4,11,0);
	g.addEdge(6,3,2,0);
	g.addEdge(6,5,9,0);
	g.addEdge(5,4,6,0);
    int src=5;
    int dest=2;
    int n=6;
    g.shortestPathUsingDijkstra(src,dest,n);
    return 0;
} 