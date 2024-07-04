// //Missing Number(leet:268)(My approach)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
//     //MY APPROACH.
//     int missingNumber(vector<int>& nums,vector<int>& arr) {
//         int n=nums.size();
//         int max_num= INT_MIN;
//         for(int i=0;i<n;i++){
//             if(nums[i]>max_num){
//                 max_num=nums[i];
//             }
//         }
//         arr.resize(max_num);
//         for(int i=0;i<=max_num;i++){
//             arr[i]=i;
//         }
//         for(int num: nums){
//             arr[num]=-1;
//         }
//         int missingnum=0;
//         for(int i=0;i<max_num;i++){
//             if(arr[i]!=-1){
//                 missingnum=arr[i];
//             }
//         }
//         cout<<missingnum;
//     }
//     //A NORMAL AND VERY EASY APPROACH: SUM THE ARRAY AND SUBS IT WITH MAIN ARRAY
// int main(){
//     vector<int>nums={1,2,3,4,6,7,8};
//     vector<int>arr;
//     missingNumber(nums,arr);
//     return 0;
// }

// //Row With Maximum Ones(leet:2643)
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//     vector<int>ans;
//     int n=mat.size();
//     int OneCount=INT_MIN;
//     int RowNumber=0;
//     for(int i=0;i<n;i++){
//         int count1=0;
//         for(int j=0;j<mat[i].size();j++){
//             if(mat[i][j]==1){
//                 count1++;
//             }  
//         }
//         if(count1>OneCount){//this was the main logic for which was thinking
//                 OneCount=count1;
//                 RowNumber=i;
//             }
//     }
//     ans.push_back(RowNumber);
//     ans.push_back(OneCount);
//     // for(int i=0;i<ans.size();i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     return ans;   
// }
// int main(){
//     vector<vector<int> >mat={
//         {0,1,1},
//         {1,1,1},
//         {0,0,1}
//     };
//     rowAndMaximumOnes(mat);
//     return 0;
// }