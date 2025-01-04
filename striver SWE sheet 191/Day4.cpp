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
// //Kadane's Algo
// //why only one q in a day, do more and do hard, you will be what you  want
// int kadaneAlgo(vector<int>&nums){
//     int sum=0;
//     int mini=INT_MIN;
//     for(int i=0;i<nums.size();i++){
//         sum+=nums[i];
//         if(sum>mini)mini=sum;
//         if(sum<0)sum=0;
//     }
//     return mini;
// }
// int main(){
//     return 0;
// }