//contiuing after a long time
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
//number of dice rolls with target sum(leet: 1155)
//done till memo
long long int MOD=1000000007;
    int solveUsingRecursion(int n,int k, int target, int diceUsed, int currSum){
        if(diceUsed==n && currSum==target)return 1;
        if(diceUsed!=n && currSum==target)return 0;
        if(diceUsed==n && currSum!=target)return 0;
        int ans=0;
        for(int face=1;face<=k;face++){
            ans=ans+solveUsingRecursion(n,k,target,diceUsed+1,currSum+face);
        }
        return ans;
    }
    int solveUsingMemoization(int n,int k,int target,int diceUsed,int currSum,vector<vector<int>>&dp){
        if(diceUsed==n && currSum==target)return 1;
        if(diceUsed!=n && currSum==target)return 0;
        if(diceUsed==n && currSum!=target)return 0;
        if(dp[diceUsed][currSum]!=-1)return dp[diceUsed][currSum];
        int ans=0;
        for(int face=1;face<=k;face++){
            int recAns=0;
            if(currSum+face<=target){
                recAns=solveUsingMemoization(n,k,target,diceUsed+1,currSum+face,dp);
            }
            ans=(ans%MOD +recAns%MOD)%MOD;
        }
        dp[diceUsed][currSum]=ans;
        return dp[diceUsed][currSum];
    }
    int numRollsToTarget(int n, int k, int target) {
        int diceUsed=0;
        int currSum=0;
        // int ans=solveUsingRecursion(n,k,target,diceUsed,currSum);
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        int ans=solveUsingMemoization(n,k,target,diceUsed,currSum,dp);
        return ans;
    }
int main(){
    return 0;
}