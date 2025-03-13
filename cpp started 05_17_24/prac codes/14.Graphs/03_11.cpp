#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adjlst;
    void addEdge(int u, int v,bool direction){
        if(direction==1){
            adjlst[u].push_back(v);
        }
        else{
            adjlst[u].push_back(v);
            adjlst[v].push_back(u);
        }
        cout<<endl<<"Printing list "<<endl;
        printAdjlst();
        cout<<endl;
    }
    void printAdjlst(){
        for(auto i:adjlst){
            cout<<i.first<<" -> {";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<"}"<<endl;
        }
    }
};
int main(){
    graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,3,1);
    return 0;
}