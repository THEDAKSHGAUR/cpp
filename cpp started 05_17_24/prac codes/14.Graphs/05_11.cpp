#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;
class graph
{
public:
public:
    unordered_map<int, list<int>> adjlst;
    void addEdge(int u, int v, int direction)
    {
        if (direction == 1)
        {
            adjlst[u].push_back(v);
        }
        else
        {
            adjlst[u].push_back(v);
            adjlst[v].push_back(u);
        }
    }
};
// course schedule(leet: 207)
void topologicalSortBFS(vector<int>&toposort, unordered_map<int,list<int>>&adjlst, int numCourses){
    unordered_map<int,int>indegree; 
    queue<int>q;
    for(auto i:adjlst){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    for(int i=0;i<numCourses;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //bfs traversal 
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        toposort.push_back(frontNode);
        for(auto nbr:adjlst[frontNode]){
            if(indegree[nbr]==0){
                indegree[nbr]--;
                q.push(nbr);
            }
        }
    }
}
bool canFinish(int numCourses, vector<vector<int>> &prerequisites){
    unordered_map<int,list<int>>adjlst;
    for(auto i: prerequisites){
        int u=i[0];
        int v=i[1];
        adjlst[v].push_back(u);
    }
    vector<int>toposort;
    topologicalSortBFS(toposort,adjlst,numCourses);
    if(toposort.size()==numCourses) return true;
    else return false;
}
//course schedule 2(leet: 210)
    void topologicalSortBFS(vector<int>&toposort, unordered_map<int,list<int>>&adjlst, int numCourses){
    unordered_map<int,int>indegree; 
    queue<int>q;
    for(auto i:adjlst){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    for(int i=0;i<numCourses;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //bfs traversal 
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        toposort.push_back(frontNode);
        for(auto nbr:adjlst[frontNode]){
            indegree[nbr]--;
            if(indegree[nbr]==0){
                q.push(nbr);
            }
        }
    }
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,list<int>>adjlst;
        for(auto i:prerequisites){
            int u=i[0];
            int v=i[1];
            adjlst[v].push_back(u); 
        }
        vector<int>toposort;
        topologicalSortBFS(toposort,adjlst,numCourses);
        if(toposort.size()==numCourses){
            return toposort;
        }
        else{
            toposort.clear();
            return toposort;
        }
    }
int main()
{
    return 0;
}