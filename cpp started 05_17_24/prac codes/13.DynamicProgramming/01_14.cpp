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
//solving 0/1 knapsack using tabulation/dp;
int knapSackUsingTab(int capacity, int wt[], int profit[], int n){
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    for(int i=0;i<=capacity;i++){
        dp[i][n]=0;
    }
    for(int i=0;i<=capacity;i++){
        for(int j=n-1;j>=0;j--){
            int include=0;
            if(wt[j]<=i){
                include=profit[j]+dp[i-wt[j]][j+1];
            }
            int exclude=0+dp[i][j+1];
            dp[i][j]=max(include,exclude);
        }
    }
    return dp[capacity][0];
}
int main(){
    int capacity=4;
    int wt[]={1,2,3};
    int profit[]={4,5,6};
    int index=0;
    int n=3;
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    int ans=knapSackUsingTab(capacity,wt,profit,n);
    cout<<ans<<endl;
    return 0;
}