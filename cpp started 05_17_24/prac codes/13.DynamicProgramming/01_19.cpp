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
//it is the most optimized solution of longest increasing subsequence(leet: 300)
int UsingBS(vector<int> &nums)
{
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i <= nums.size(); i++)
    {
        if (nums[i] < ans.back())
        {
            ans.push_back(nums[i]);
        }
        else
        {
            int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
            ans[index] = nums[i];
        }
    }
    return ans.size();
}
int main(){
    return 0;
}