////TOPOLOGICAL SORT
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
        unordered_map<int,list<int>>adjlst;
    void addEdge(int u, int v, bool direction){
        if(direction==1){
            adjlst[u].push_back(v);
        }
        else if(direction==0){
            adjlst[u].push_back(v);
            adjlst[v].push_back(u);
        }
    }  
    // void printGraph(){
    //     for(auto i: adjlst){
    //         cout<<i.first<<" ->{ ";
    //         for(auto j:i.second){
    //             cout<<j<<" ";
    //         }
    //         cout<<"}";
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    // void topologicalSortDFS(int src, unordered_map<int,bool>&done,stack<int>&st){
    //     done[src]=true;
    //     for(auto nbr: adjlst[src]){
    //         if(!done[nbr]){
    //             topologicalSort(nbr,done,st);
    //         }
    //     }
    //     st.push(src);
    // }
    // void TopologicalSortBFS(int n,vector<int>&topoSort){
    //     unordered_map<int,int>indegree;
    //     indegree[0]=0;
    //     queue<int>q;
    //     //initialize the indegree of each element
    //     for(auto i: adjlst){
    //         for(auto j:i.second){
    //             indegree[j]++;
    //         }         
    //     }
    //     cout<<"Representing the indegree of each element :: "<<endl;
    //     for(auto i:indegree){
    //         cout<<i.first<<" : "<<i.second<<endl;
    //     }
    //     //initializing the q
    //     for(int i=0;i<n;i++){
    //         if(indegree[i]==0){
    //             q.push(i);
    //         }
    //     }

    //     //lets work on bfs
    //     cout<<"Topological Sort :: ";
    //     while(!q.empty()){
    //         int frontNode=q.front();
    //         q.pop();
    //         topoSort.push_back(frontNode);
    //         cout<<frontNode<<" ";
    //         for(auto nbr:adjlst[frontNode]){
    //             indegree[nbr]--;

    //             if(indegree[nbr]==0){
    //                 q.push(nbr);
    //             }
    //         }
    //     }
    // }
    // void cyclePresentUsingBFSinDirected(int n, vector<int>&topoSort){
    //     cout<<endl;
    //     if(n==topoSort.size())cout<<"Cycle is not Present";
    //     else cout<<"Cycle is present";
    // }
    void shortestPath(int src, int dest){
        unordered_map<int,bool>done;
        unordered_map<int,int>parent;
        queue<int>q;
        //initialize the q
        done[src]=true;
        parent[src]=-1;
        q.push(src);
        //start traversing the q
        while(!q.empty()){
            int frontNode=q.front();
            q.pop();
            for(auto nbr: adjlst[frontNode]){
                if(!done[nbr]){
                    q.push(nbr);
                    parent[nbr]=frontNode;
                    done[nbr]=true;
                }
            }
        }
        //lets ready the parent array
        vector<int>ans;
        while(dest!=-1){
            ans.push_back(dest);
            dest=parent[dest];
        }
        reverse(ans.begin(),ans.end());
        cout<<"printing the shortest path :: ";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
};
int main(){
    graph g;
    g.addEdge(0,1,1);
    g.addEdge(0,4,1);
    g.addEdge(0,3,1);
    g.addEdge(3,5,1);
    g.addEdge(1,2,1);
    g.addEdge(4,6,1);
    g.addEdge(2,5,1);
    g.addEdge(6,5,1);
    // g.printGraph();
    // unordered_map<int,bool>done;
    // stack<int>st;
    // for(int i=0;i<8;i++){
    //     if(!done[i]){
    //         g.topologicalSortDFS(i,done,st);
    //     }
    // }
    // cout<<"printing the stack :: ";
    // while(!st.empty()){
    //     int element=st.top();
    //     cout<<element<<" ";
    //     st.pop();
    // }

    ////Tsort using BFS traversal
    // int n=8;
    // vector<int>topoSort;
    // g.TopologicalSortBFS(n,topoSort);
    // g.cyclePresentUsingBFSinDirected(n,topoSort);

    ////shortest path
    int src=0;
    int dest=5;
    g.shortestPath(src,dest);
    return 0;
}