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
int solveUsingMemoization(vector<int>& coins, int amount, vector<int>&dp){
        if(amount==0){
            return 0;
        }
        //do the same already exist
        if(dp[amount]!=-1)return dp[amount];
        int n=coins.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(amount-coins[i]>=0){
                int ansOfRec=solveUsingMemoization(coins,amount-coins[i],dp);
                if(ansOfRec!=INT_MAX){
                   int ans=1+ansOfRec;
                   mini=min(ans,mini);
                }
            }
        }
        dp[amount]=mini;
        return dp[amount];
    }
    int solveUsingTab(vector<int>coins,int amount){
        //step1
        int n=coins.size();
        vector<int>dp(amount+1,INT_MAX);
        //step2
        dp[0]=0;
        //build the code
        for(int value=1; value<=amount; value++){
            int mini=INT_MAX;
            for(int i=0; i<n; i++){
                if(value-coins[i]>=0){
                    int ansOfRec=dp[value-coins[i]];
                    if(ansOfRec!=INT_MAX){
                        int ans=1+ansOfRec;
                        mini=min(ans,mini);
                    }
                }
            }
            dp[value]=mini;
        }
        return dp[amount];
    }
int main(){
    return 0;
}