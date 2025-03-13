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
//making class for weighted graph
// class graph{
//     public:
//     unordered_map<int,list<pair<int,int>>>adjlst;
//     void createEdge(int u, int v, int wt, bool direction){
//         if(direction==1){
//             adjlst[u].push_back({v,wt});
//         }
//         else{
//             adjlst[u].push_back({v,wt});
//             adjlst[v].push_back({u,wt});
//         }
//         cout<<"printing graph :: "<<endl;
//         printGraph();
//         cout<<endl;
//     }
//     void printGraph(){
//         for(auto i: adjlst){
//             cout<<i.first<<"-> { ";
//             for(pair<int,int>p:i.second){
//                 cout<<"{"<<p.first<<","<<p.second<<"}"<<",";
//             }
//             cout<<" }"<<endl;
//         }
//     }
// };
////making use of templete
template<typename T>
class graph{
    public:
    unordered_map<T,list<pair<int,int>>>adjlst;
    void createEdge(T u, T v, int wt, bool direction){
        if(direction==1){
            adjlst[u].push_back({v,wt});
        }
        else{
            adjlst[u].push_back({v,wt});
            adjlst[v].push_back({u,wt});
        }
        cout<<"printing graph :: "<<endl;
        printGraph();
        cout<<endl;
    }
    void printGraph(){
        for(auto i: adjlst){
            cout<<i.first<<"-> { ";
            for(pair<T,int>p:i.second){
                cout<<"{"<<p.first<<","<<p.second<<"}"<<",";
            }
            cout<<" }"<<endl;
        }
    }
};
int main(){
    graph<int> g;
    g.createEdge(0,1,5,1);
    g.createEdge(1,2,10,1);
    g.createEdge(1,3,20,1);
    g.createEdge(2,3,50,1);
    return 0;
}