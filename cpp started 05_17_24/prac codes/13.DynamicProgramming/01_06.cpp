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
using namespace std;
////KnapSack using dp
//Top down
int knapSackUsingTopDown(int wt[],int profit[],int capacity,int n, int index,vector<vector<int>>&dp){
    if(wt[index]>capacity || index>=n){
        return 0;
    }
    if(dp[capacity][index]!=-1)return dp[capacity][index];
    int include=0;
    if(wt[index]<=capacity){
        include=profit[index]+knapSackUsingTopDown(wt,profit,capacity-wt[index],n,index+1,dp);
    }
    int exclude=0+knapSackUsingTopDown(wt,profit,capacity,n,index+1,dp);
    dp[capacity][index]=max(include,exclude);
    return dp[capacity][index];
}
//using tabulation 
int knapsackUsingTab(int wt[],int profit[],int capacity,int n, int index){
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));

}
int main(){
    int capacity=50;
    int wt[]={10,20,30};
    int profit[]={60,100,120};
    int index=0;
    int n=3;
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    int ans=knapSackUsingTopDown(wt,profit,capacity,n,index,dp);
    cout<<ans<<endl;
    return 0;
}