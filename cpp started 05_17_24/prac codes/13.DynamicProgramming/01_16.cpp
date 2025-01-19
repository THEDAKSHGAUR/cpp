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
//longest common subsequence(leet:1143)
int solveUsingRec(string t1, string t2, int i, int j){
    //base case;
    if(i>=t1.length() || j>=t2.length()){
        return 0;
    }
    int ans=0;
    if(t1[i]==t2[j]){
        ans=1+solveUsingRec(t1,t2,i+1,j+1);
    }
    else{
        ans=0+max(solveUsingRec(t1,t2,i+1,j),solveUsingRec(t1,t2,i,j+1));
    }
    return ans;
}
int solvingUsingTopDown(string t1, string t2, int i, int j, vector<vector<int>>&dp){
    if(i>=t1.length() || j>=t2.length()){
        return 0;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    if(t1[i]==t2[j]){
        dp[i][j]=1+solvingUsingTopDown(t1,t2,i+1,j+1,dp);
    }
    else{
        dp[i][j]=0+max(solvingUsingTopDown(t1,t2,i+1,j,dp),solvingUsingTopDown(t1,t2,i,j+1,dp));
    }
    return dp[i][j];
}
int solvingUsingTab(string a, string b){
    vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
    for(int i=a.length()-1;i>=0;i--){
        for(int j=b.length()-1;j>=0;j--){
            int ans=0;
        if(a[i]==b[j]){
            dp[i][j]=1+dp[i+1][j+1];
        }
        else{
            dp[i][j]=0+max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
int longestCommonSubsequence(string text1, string text2){
    int i=0;
    int j=0;
    vector<vector<int>>dp(text1.length()+1,vector<int>(text2.length()+1,-1));
    int ans=solvingUsingTab(text1,text2);
    return ans;
}
int main(){
    return 0;
}