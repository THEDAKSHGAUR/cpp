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
//House robber(Leet:198)
int solve(vector<int>&nums,vector<int>&dp,int index){
        int n=nums.size();
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1)return dp[index];
        int option1=nums[index]+solve(nums,dp,index+2);
        int option2=0+solve(nums,dp,index+1);

        dp[index]=max(option1,option2);
        return dp[index];
    }
    int usingTabularMethod(vector<int>nums){
        int n=nums.size();
        //step1
        vector<int>dp(n,-1);
        //step2
        dp[n-1]=nums[n-1];
        //step2
        for(int index=n-2;index>=0;index--){
            int temp=0;
            if(index+2<n)temp=dp[index+2];
            int option1=nums[index]+temp;
            int option2=0+dp[index+1];
            dp[index]=max(option1,option2);
        }
        return dp[0];
    }
    int usingTabularMethodSpaceOptimized(vector<int>nums){
        int n=nums.size();
        //step1
        int prev=nums[n-1];
        int next=0;
        int curr;
        //step2
        // dp[n-1]=nums[n-1];
        //step2
        for(int index=n-2;index>=0;index--){
            int temp=0;
            if(index+2<n)temp=next;
            int option1=nums[index]+temp;
            int option2=0+prev;
            curr=max(option1,option2);
            //this below is must
            next=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        // int index=0;
        // int n=nums.size();
        // vector<int>dp(n+1,-1);
        int ans=usingTabularMethodSpaceOptimized(nums);
        return ans;
    }
int main(){
    return 0;
}