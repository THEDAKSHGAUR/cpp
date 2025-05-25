// //checking whether the graph have cycle or not using dfs algo
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// #include<queue>
// #include<map>
// #include<unordered_map>
// #include<list>
// using namespace std;
// template<typename T>
// class graph{
//     public:
//     unordered_map<T ,list <T>>adjlst;
//     void addEdge(T u,T v, T direction){
//         if(direction==1){
//             adjlst [u].push_back(v);
//         }
//         else{
//             adjlst[u].push_back(v);
//             adjlst[v].push_back(u);
//         }
//         cout<<"printingGraph : "<<endl;
//         printGraph();
//         cout<<endl;
//     }
//     void printGraph(){
//         for(auto i:adjlst){
//             cout<<i.first <<" ->{ ";
//             for(auto j:i.second){
//                 cout<<j<<" ";
//             }
//             cout<<"}"<<endl;
//         }
//     }
//     bool iscyclePresentDFS(int src, unordered_map<int,bool>&done,int parent){
//         done[src]=true;
//         for(auto nbr:adjlst[src]){
//             if(nbr==parent) continue;
//             if(!done[nbr]){
//                 bool ans=iscyclePresentDFS(nbr,done,src);//parent is src
//                 if(ans){
//                     return true;
//                 }
//             }
//             else if(done[nbr]==true){
//                 return true;
//             }
//         }
//         return false;
//     }
//     //GFG code for directed
//     bool directedCyclePresent(int src,unordered_map<int,bool>&done,unordered_map<int,bool>&track,vector<vector<int>> &adj){
//         done[src]=true;
//         track[src]=true;
//         for(auto nbr:adj[src]){
//             if(!done[nbr]){
//                 bool ans=directedCyclePresent(nbr,done,track,adj);
//                 if(ans) return true;
//             }
//             if(done[nbr] && track[nbr])return true;
//         }
//         //backtracking
//         track[src]=false;
//         return false;
//     }
//     bool DirectedIsCyclic(vector<vector<int>> &adj) {
//         unordered_map<int,bool>done;
//         unordered_map<int,bool>track;
        
//         for(int i=0;i<adj.size();i++){
//             if(!done[i]){
//                 bool isCycle=directedCyclePresent(i,done,track,adj);
//                 if(isCycle)return true;
//             }
//         }
//         return false;
//     }
// };
// int main(){
//     graph<int>g;
//     g.addEdge(0,1,0);
//     g.addEdge(1,2,0); 
//     g.addEdge(1,3,0);
//     g.addEdge(2,4,0);
//     g.addEdge(2,5,0);
//     g.addEdge(3,4,0);
//     unordered_map<int,bool>done; 
//     for(int i=0;i<6;i++){
//         if(!done[i]){
//             int parent=-1;
//             bool isCyclic=g.iscyclePresentDFS(i,done,parent);
//             if(isCyclic) return true;
//         }
//     }
//     return 0;
// }



