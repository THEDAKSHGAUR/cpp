// //No of provinces(leet: 547)(A2Z)
// class Solution {
// public:
//     // int i=0; i<isconnected.size();++i
//     //int j=0; j<isconnected[i].size();++j
//     void dfs(int src, unordered_map<int,bool>&visited, unordered_map<int,list<int>>adjlst){
//         visited[src]=true;
//         for(auto i: adjlst[src]){
//             if(!visited[i]){
//                 dfs(i,visited,adjlst);
//             }
//         }
//     }
//     int countOfProvinces(unordered_map<int,list<int>>&adjlst){
//         unordered_map<int,bool>visited;
//         for(int i=1; i<=adjlst.size(); i++){
//             visited[i]=false;
//         }
//         int count=0;
//         for(int i=0; i<adjlst.size();++i){
//             if(!visited[i]){
//                 dfs(i,visited,adjlst);
//                 count++;
//             }
//         }
//         return count;
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         //creation of adjlst
//         unordered_map<int,list<int>>adjlst;
//         for(int i=0; i<isConnected.size();++i){
//             for(int j=0; j<isConnected[i].size();++j){
//                 if(isConnected[i][j]==1){
//                     adjlst[i].push_back(j);
//                     // adjlst[j].push_back(i);
//                 }
//             }
//         }
//         int ans=countOfProvinces(adjlst);
//         return ans;
//     }
// };

// //rotten oranges(leet: 994)(A2Z)
// //completed on 22nd of may 2025
// class Solution {
// public:
//     bool validIndex(int x, int y, vector<vector<int>>&grid, vector<vector<int>>&done){
//         if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() &&
//             grid[x][y] == 1 && done[x][y] == 0) {
//             return true;
//         } 
//         else return false;
//     }
//     int calTheTime(vector<vector<int>> & grid, queue<pair<int, int>> & indices, vector<vector<int>> & done) {
//         int t = 0;
//         while (!indices.empty()) {
//             int k = indices.size();
//             bool rotted=false;
//             cout<<"elements in the q"<<k<<endl;
//             while (k != 0) {
//                 auto index = indices.front();
//                 int x = index.first;
//                 int y = index.second;
//                 cout<<"x :: "<<x<<"y :: "<<y<<endl;
//                 indices.pop();
//                 int dx[] = {-1, 0, 1, 0};
//                 int dy[] = {0, 1, 0, -1};
//                 for (int i = 0; i < 4; i++) {
//                     int newX = x + dx[i];
//                     int newY = y + dy[i];
//                     if (validIndex(newX, newY, grid, done)==true) {
//                         cout<<"newX : "<<newX<<"newY : "<<newY<<endl;
//                         done[newX][newY] = 2;
//                         indices.push({newX, newY});
//                         rotted=true;
//                     }
//                 }
//                 k--;
//                 cout<<"updated k :: "<<k<<endl;
//             }
//             if (rotted) t++;
//             cout<<"updated t:: "<<t<<endl;
//         }
//         return t;
//     }
//     int orangesRotting(vector<vector<int>> & grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         queue<pair<int, int>> indices;
//         vector<vector<int>> done(m, vector<int>(n, 0));
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (grid[i][j] == 2) {
//                     done[i][j] = 2;
//                     indices.push({i, j});
//                 }
//             }
//         }
//         int ans = calTheTime(grid, indices, done);
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (grid[i][j] == 1 && done[i][j] != 2)
//                     return -1;
//             }
//         }
//         return ans;
//     }
// };


// //clone graph(leet: 133)[A2Z]
// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };
// */
// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
//         if(!node) return nullptr;
//         unordered_map<Node*, Node*>check;
//         queue<Node*>q;
//         q.push(node);
//         Node* cloneNode= new Node(node->val);
//         check[node]=cloneNode;
//         while(!q.empty()){
//             Node* cloneCurr=q.front();
//             q.pop();
//             for(auto neighbour : cloneCurr->neighbors){
//                 if(check.find(neighbour)==check.end()){
//                     Node* clonedNeighbour=new Node(neighbour->val);
//                     check[neighbour]= clonedNeighbour;
//                     q.push(neighbour);
//                 }
//                 check[cloneCurr]->neighbors.push_back(check[neighbour]);
//             }
//         }
//         return cloneNode;
//     }
// };


// //BFS & DFS & cycle detection using bfs/dfs(undirected graph) & cycle detection using bfs/dfs(directed)
// //  & toposort using bfs/dfs
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
// class graph{
//     public:
//     unordered_map<int, list<int>>adjlst;
//     void createEdge(int u, int v, int direction){
//         if(direction==1){
//             adjlst[u].push_back(v);
//         }
//         else{
//             adjlst[u].push_back(v);
//             adjlst[v].push_back(u);
//         }
//     }
//     // void BFS(int node){
//     //     cout<<"Printing Breadth First Search :: ";
//     //     queue<int>q;
//     //     unordered_map<int,bool>check;
//     //     q.push(node);
//     //     check[node]=true;
//     //     while(!q.empty()){
//     //         int curr=q.front();
//     //         cout<<curr<<" ";
//     //         q.pop();
//     //         for(auto neighbour: adjlst[curr]){
//     //             if(!check[neighbour]){
//     //                 q.push(neighbour);
//     //                 check[neighbour]=true;
//     //             }
//     //         }
//     //     }
//     // }
//     // void DFS(int node, unordered_map<int, bool>&done){
//     //     done[node]=true;
//     //     cout<<node<<" ";
//     //     for(auto nbr : adjlst[node]){
//     //         if(!done[nbr]) DFS(nbr,done);
//     //     }
//     // }
//     //////undirected
//     // bool cycleDetectionUsingBFS(int node, unordered_map<int,bool>&done){
//     //     queue<int>q;
//     //     unordered_map<int,int>parent;
//     //     q.push(node);
//     //     done[node]=true;
//     //     // parent[node]=-1;
//     //     while(!q.empty()){
//     //         int front=q.front();
//     //         q.pop();
//     //         for(auto nbr : adjlst[front]){
//     //             if(!done[nbr]){
//     //                 q.push(nbr);
//     //                 parent[nbr]=front;
//     //                 done[nbr]=true;
//     //             }
//     //             else if(done[nbr]==true && nbr==parent[front])return true;
//     //         }
//     //     }
//     //     return false;
//     // }
//     // bool cycleDetectionUsingDFS(int node, int parent,unordered_map<int,bool>&done){
//     //     done[node]=true;
//     //     for(auto nbr : adjlst[node]){
//     //         if(!done[nbr]){
//     //             bool ans=cycleDetectionUsingDFS(nbr,node,done);
//     //             if(ans)return true;
//     //         }
//     //         else if(nbr!=parent)return true;
//     //     }
//     //     return false;
//     // }
//     // bool cycleDetectionUsingDFSDirected(unordered_map<int,bool>&done, unordered_map<int,bool>&track, int src){
//     //     done[src]=true;
//     //     track[src]=true;
//     //     for(auto nbr : adjlst[src]){
//     //         if(!done[nbr]){
//     //             bool ans=cycleDetectionUsingDFSDirected(done,track,nbr);
//     //             if(ans) return true;
//     //         }
//     //         else if(track[nbr] && done[nbr]) return true;
//     //     }
//     //     track[src]=false;
//     //     return false;
//     // }
//     // bool cycleDetectionUsingBFSdirected(int src){
//     //     queue<int>q;
//     //     unordered_map<int,bool>done;
//     //     q.push(src);
//     //     done[src]=true;
//     //     while(!q.empty()){
//     //         int front =q.front();
//     //         q.pop();
//     //         for(auto nbr: adjlst[front]){
//     //             if(!done[nbr]){
//     //                 q.push(nbr);
//     //                 done[nbr]=true;
//     //             }
//     //             else if(done[nbr]) return true;
//     //         }
//     //     }
//     //     return false;
//     // }
//     // void toposortUsingDFS(int src, stack<int>&st, unordered_map<int,bool>&done){
//     //     done[src]=true;
//     //     for(auto nbr : adjlst[src]){
//     //         if(!done[nbr]){
//     //             toposortUsingDFS(nbr,st,done);
//     //         }
//     //     }
//     //     st.push(src);
//     // }
//     // void toposortUsingBFS(int n){
//     //     cout<<"Printing topo sort :: ";
//     //     queue<int>q;
//     //     unordered_map<int,int>indegree;
//     //     for(auto i: adjlst){
//     //         for(auto j: i.second){
//     //             indegree[j]++;
//     //         }
//     //     }
//     //     for(int i=1;i<=n;i++){
//     //         if(indegree[i]==0) q.push(i);
//     //     }
//     //     while(!q.empty()){
//     //         int frontNode=q.front();
//     //         q.pop();
//     //         cout<<frontNode<<" ";
//     //         for(auto nbr : adjlst[frontNode]){
//     //             indegree[nbr]--;
//     //             if(indegree[nbr]==0) q.push(nbr);
//     //         }
//     //     }
//     // }
// };
// int main(){
//     graph g;
//     g.createEdge(1,2,1);
//     g.createEdge(2,3,1);
//     g.createEdge(3,4,1);
//     // g.createEdge(4,1,1);
//     g.createEdge(3,5,1);
//     // g.createEdge(5,2,1);
//     unordered_map<int,bool>done;
//     //bfs and dfs traversal
//     // // g.BFS(1);
//     // // cout<<endl;
//     // // cout<<"Printing Depth First Search :: ";
//     // // g.DFS(1,done);
//     // int ans=true;

//     //cycle detection using bfs undirected
//     // for(int i=1;i<=9;i++){
//     //     ans=g.cycleDetectionUsingBFS(i,done);
//     //     if(ans==false)break;
//     // }
//     // cout<<"detected a cycle :: "<<ans;

//     //cylce detection using dfs undirected
//     // bool ans=false;
//     // for(int i=1;i<=9;i++){
//     //     if(!done[i]){
//     //         ans=g.cycleDetectionUsingDFS(i,-1,done);
//     //         if(ans)break;
//     //     }
//     // }
//     // cout<<ans;

//     //cycle detection using dfs directed
//     // unordered_map<int,bool>track;
//     // bool ans=false;
//     // for(int i=1;i<=5;i++){
//     //     ans=g.cycleDetectionUsingDFSDirected(done,track,i);
//     //     if(ans)break;
//     // }
//     // if(ans)cout<<"True";
//     // else cout<<"false";

//     //cycle detection using bfs in undirected graph
//     // bool ans=false;
//     // for(int i=1;i<=5;i++){
//     //     ans=g.cycleDetectionUsingBFSdirected(i);
//     //     if(ans)break;
//     // }
//     // if(ans) cout<<"True";
//     // else cout<<"False";

//     //topological sort using DFS
//     // stack<int>st;
//     // for(int i=1;i<=5;i++){
//     //     if(!done[i]) g.toposortUsingDFS(i,st,done);
//     // }
//     // while(!st.empty()){
//     //     int ele=st.top();
//     //     st.pop();
//     //     cout<<ele<<" ";
//     // }

//     //topological sort using BFS
//     // g.toposortUsingBFS(5);
// }


// //Number of Islands(Leet: 200)
// // #include <bits/stdc++.h> //this is a gcc header which is used to fetch all the cpp libs.
// // using namespace std;
// class Solution {
// public:
//     void findEle(vector<pair<int, int>>& array, pair<int, int> target) {
//         for (auto it = array.begin(); it != array.end(); ++it) {
//             if (*it == target) {
//                 array.erase(it);
//                 break;
//             }
//         }
//     }
//     bool indicesOK(int x, int y, vector<vector<char>>& grid) {
//         return x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size();
//     }
//     void qFunction(vector<vector<bool>>& check,
//                    vector<pair<int, int>>& allOnes,
//                    queue<pair<int, int>>& q,
//                    vector<vector<char>>& grid) {
//         while (!q.empty()) {
//             int dx[] = { -1, 0, 1, 0 };
//             int dy[] = { 0, -1, 0, 1 };
//             int i = q.front().first;
//             int j = q.front().second;
//             q.pop();
//             for (int m = 0; m < 4; m++) {
//                 int XtempIndex = i + dx[m];
//                 int YtempIndex = j + dy[m];
//                 if (indicesOK(XtempIndex, YtempIndex, grid)) {
//                     if (!check[XtempIndex][YtempIndex] &&
//                         grid[XtempIndex][YtempIndex] == '1') {
//                             q.push({ XtempIndex, YtempIndex });
//                             check[XtempIndex][YtempIndex] = true;
//                             findEle(allOnes, { XtempIndex, YtempIndex });
//                     }
//                 }
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int count = 0;
//         int rows = grid.size();
//         int cols = grid[0].size();
//         vector<vector<bool>> check(rows, vector<bool>(cols, false));
//         vector<pair<int, int>> allOnes;
//         queue<pair<int, int>> q;
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 if (grid[i][j] == '1') {
//                     allOnes.push_back({ i, j });
//                 }
//             }
//         }
//         while (!allOnes.empty()) {
//             pair<int, int> start = allOnes[0];
//             q.push(start);
//             check[start.first][start.second] = true;
//             findEle(allOnes, start);
//             qFunction(check, allOnes, q, grid);
//             count++;
//         }
//         return count;
//     }
// };

// //Is graph Bipartite(leet: 785)
// class Solution { This code was basic bfs code, everthing was correct but not handling the disconnected graphs
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         // unordered_map<int,list<int>>adjlst;
//         // for(int i=0;i<graph.size();i++){
//         //     for(int j=0;j<graph[i].size();j++){
//         //         adjlst[i].push_back(graph[i][j]);
//         //     }
//         // }
//         // unordered_map<int,string>colour;
//         // for(int m=0;m<graph.size();m++){
//         //     queue<int>q;
//         //     q.push(0);
//         //     colour[0]='r';
//         //     while(!q.empty()){
//         //         int element=q.front();
//         //         q.pop();
//         //         for(auto i : adjlst[element]){
//         //             string parentColour=colour[element];
//         //             auto it=colour.find(i);
//         //             if(it ==colour.end()){
//         //                 q.push(i);
//         //                 if(parentColour=="r"){
//         //                     colour[i]="g";
//         //                 }
//         //                 else if(parentColour=="g"){
//         //                     colour[i]="r";
//         //                 }
//         //             }
//         //         }
//         //     }
//         // }
//         // for(int i=0;i<graph.size();i++){
//         //     string parent=colour[i];
//         //     for(auto child: adjlst[i]){
//         //         if(colour[child]==parent){
//         //             return false;
//         //         }
//         //     }
//         // }
//         // return true;
/////////this code was the code in which we have created a loof for each element to be traversed of the array
//         int n = graph.size();
//         if (n == 0) {
//             return true;
//         }
//         unordered_map<int,string>colour;
//         for (int i = 0; i < n; ++i) {
//             if (colour.find(i) == colour.end()) {
//                 queue<int>q;
//                 q.push(i);
//                 colour[i] = 'r';
//                 while (!q.empty()) {
//                     int element = q.front();
//                     q.pop();
//                     for (int neighbor : graph[element]) {
//                         if (colour.find(neighbor) == colour.end()) {
//                             q.push(neighbor);
//                             if (colour[element] == "r") {
//                                 colour[neighbor] = "g";
//                             } else {
//                                 colour[neighbor] = "r";
//                             }
//                         } 
//                         else if (colour[neighbor] == colour[element]) {
//                             return false;
//                         }
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };


