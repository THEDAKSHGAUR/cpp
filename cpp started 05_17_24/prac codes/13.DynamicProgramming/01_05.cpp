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
//painting fence algo using rec and dp
//n->no.of poles, k->no.of colors
int solvingUsingTopDown(int n,int k,vector<int>&dp){
    if(n==1)return k;
    if(n==2)return (k+(k*(k-1)));
    if(dp[n]!=-1)return dp[n];
    dp[n]=(solvingUsingTopDown(n-1,k,dp)+solvingUsingTopDown(n-2,k,dp))*(k-1);
    return dp[n];
}
int solvingUsingTab(int n, int k){
    vector<int>dp(n+1,-1);
    dp[1]=k;
    if(n==1)return dp[1];
    dp[2]=k+k*(k-1);
    for(int i=3;i<=n;i++){
        //change the i, very imp
        dp[i]=(k-1)*(dp[i-1]+dp[i-2]);
    }
    return dp[n];
}
int optimizedSpaceTab(int n, int k){
    if(n==1)return k;
    if(n==2)return k+k*(k-1);
    int prev=k;
    int curr=k+k*(k-1);
    for(int i=3;i<=n;i++){
        int temp=0;
        temp=(k-1)*(prev+curr);
        prev=curr;
        curr=temp;
    }
    return curr;
}
int main(){
    int n=1;
    int k=2;
    vector<int>dp(n+1,-1);
    // int ans=solvingUsingTopDown(n,k,dp);
    // int ans=solvingUsingTab(n,k);
    int ans=optimizedSpaceTab(n,k);
    cout<<ans<<endl;
    return 0;
}