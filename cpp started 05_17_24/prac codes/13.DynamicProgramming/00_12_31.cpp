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
// using namespace std;
// int fibUsingdpTopDown(int n,vector<int>&dp){
//     //step 1
//     if(n==0 || n==1)return n;
//     //step 3
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     //step 2
//     dp[n]=fibUsingdpTopDown(n-1,dp)+fibUsingdpTopDown(n-2,dp);
//     return dp[n];
// }
// int fibUsingdpTabulationMethod(int n){
//     //s1
//     vector<int>dp(n+1,-1);
//     //s2
//     dp[0]=0;
//     if(n==0)return dp[n];//this will help to run all the test cases;
//     dp[1]=1;
//     //s3
//     for(int i=2;i<=n; i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }
// //minimizing the space complexity
// int spacecomplexityReducedSol(int n){
//     //s1
//     vector<int>dp(n+1,-1);
//     //s2
//     int prev=0;
//     if(n==0)return dp[n];//this will help to run all the test cases;
//     int curr=1;
//     //s3
//     int ans;
//     for(int i=2;i<=n; i++){
//         ans=prev+curr;
//         prev=curr;
//         curr=ans;
//     }
//     return ans;
// }
// int main(){
//     int n=6;
//     vector<int>dp(n+1,-1);
//     int ans=fibUsingdpTopDown(n,dp);
//     int tabAns=fibUsingdpTabulationMethod(n);
//     int spaceOptimizedAns=spacecomplexityReducedSol(n);
//     cout<<ans<<endl;
//     cout<<tabAns<<endl;
//     cout<<spaceOptimizedAns;
//     return 0;
// }