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
//partition equal subset sum(Leet: 416)
bool solveUsingRecursion(vector<int>& nums, int i, int sum, int currSum) {
        if (i >= nums.size())
            return 0;
        if (currSum > sum)
            return 0;
        if (currSum == sum)
            return true;
        bool include = solveUsingRecursion(nums, i + 1, sum, currSum + nums[i]);
        bool exclude = solveUsingRecursion(nums, i + 1, sum, currSum);
        return include || exclude;
    }
    bool solveUsingTopDown(vector<int>& nums, int i, int sum, int currSum,
                           vector<vector<int>>& dp) {
        if (i >= nums.size())
            return 0;
        if (currSum > sum)
            return 0;
        if (currSum == sum)
            return true;
        if (dp[i][currSum] != -1)
            return dp[i][currSum];
        bool include = solveUsingTopDown(nums, i + 1, sum, currSum + nums[i], dp);
        bool exclude = solveUsingTopDown(nums, i + 1, sum, currSum, dp);
        dp[i][currSum] = include || exclude;
        return dp[i][currSum];
    }
    bool solveUsingTabulation(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        for(int row=0;row<=n;row++){
            dp[row][target]=1;
        }
        for(int index=n-1;index>=0;index--){
            for(int sum=target;sum>=0;sum--){
                bool include=0;
                if(sum+nums[index]<=target)
                include = dp[index + 1][sum+nums[index]];
                bool exclude = dp[index + 1][sum];
                dp[index][sum] = include || exclude;
            }
        }
        return dp[0][0];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum & 1) {
            return false;
        }
        int target = sum / 2;
        int currSum = 0;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        // bool ans = solveUsingRecursion(nums, i, target, currSum);
        // bool ans = solveUsingTopDown(nums, i, target, currSum, dp);
        bool ans=solveUsingTabulation(nums,target);
        return ans;
    }

//Min cost tree from leaf values(leet:1130)
//space optimized is not possible