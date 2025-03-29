#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
using namespace std;
/// Maximum heigth by stacking cuboids(leet:1691)
bool check(vector<int> v1, vector<int> v2){
    if (v1[0] >= v2[0] && v1[1] >= v2[1] && v1[2] >= v2[2])
        return true;
    else
        return false;
}
int OptimizedSolution(vector<vector<int>> &nums){
    vector<int> curr(nums.size() + 1, -1);
    vector<int> next(nums.size() + 1, 0);
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= -1; j--)
        {
            int include = 0;
            if (j == -1 || check(nums[i], nums[j]))
            {
                int currHeigth = nums[i][2];
                include = currHeigth + next[i + 1];
            }
            int exclude = 0 + next[j + 1];
            curr[j + 1] = max(include, exclude);
        }
        next = curr;
    }
    return next[0];
}
int maxHeight(vector<vector<int>> &cuboids){
    for (auto &cuboid : cuboids)
    {
        sort(cuboid.begin(), cuboid.end());
    }
    sort(cuboids.begin(), cuboids.end());
    int ans = OptimizedSolution(cuboids);
    return ans;
}

int main()
{
    return 0;
}