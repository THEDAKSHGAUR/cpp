//DUTCH0NATIONAL-FLAG PROBLEM: sort colors(leet:75)
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortColors(vector<int>& nums){
//     int left=0;
//     int n=nums.size();
//     int right=n-1;
//     int index=0;
//     while(index<=right){
//         if(nums[index]==0){
//             swap(nums[index],nums[left]);
//             index++;
//             left++;
//         }
//         else if(nums[index]==2){
//             swap(nums[index],nums[right]);
//             right--;
//         }
//         else{
//             index++;
//         }
//     }
// }
// void printVector(vector<int>& nums){
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
    // vector<int>nums={0,2,1,2,1,1,2,0,0,0,0};
    // sortColors(nums);
    // printVector(nums);
    // return 0;
// }

//Rotate Array(leet:189)
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotate(vector<int>& nums, int k) {
//     int n=nums.size();
//     vector<int>ans(n);//initialising size is important
//     for(int i=0;i<n;i++){
//         int newindex=(i+k)%n;//this formula is important
//         ans[newindex]=nums[i];
//     }
//     nums=ans;
// }
// void printVector(vector<int>& nums){
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>nums={1,2,3,4,5};
//     int k=2;
//     rotate(nums,k);
//     printVector(nums);
//     return 0;
// }

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

////Rotate Image(leet:48)
// #include <iostream>
// #include <vector>
// using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     // Transpose the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     // Reverse each row
//     for (int i = 0; i < n; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
//     // Print the rotated matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < matrix[i].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     rotate(matrix);
//     return 0;
// }

// //Three consecutive odds(leet:1550)
// #include<iostream>
// #include<vector>
// using namespace std;
// bool threeConsecutiveOdds(vector<int>& arr) {
//     int n=arr.size();
//     int oddCount=0;
//     for(int i=0;i<n;i++){
//         if(i+2<n && arr[i] % 2!=0){//the main condition is i+2<n
//             if(arr[i+1]% 2!=0){
//                 if(arr[i+2]%2!=0){
//                     oddCount++;
//                 }
//             }
//         }
//     }
//     if(oddCount==1){
//         cout<<"true";
//         return true;
//     }
//     else{
//         cout<<"false";
//         return false;
//     }
// }
// int main(){
//     vector<int>arr={1,2,3,1,5,6,7,1};
//     threeConsecutiveOdds(arr);
//     return 0;
// }

////Two sum(leet:01)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int>& nums, int target) {
//     int n=nums.size();
//     vector<int>ans(2);
//     int x;
//     int y;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){//j is initialised by i+1 because nums[i] and nums[j] will become equal
//             int count=0;
//             if(nums[i]+nums[j]==target){
//                 count++;
//             }
//             if(count==1){
//                 x=i;
//                 y=j;
//             }
//         }     
//     }
//     ans.push_back(x);
//     ans.push_back(y);
//     return ans;
// }
// int main(){
//     return 0;
// }

//Find pivot index(leet:724)
// #include<iostream>
// #include<vector>
// using namespace std;
// int pivotIndex(vector<int>& nums) {
//     int n=nums.size();
//     int pivot=0;
//     int left=0;
//     int right=n-1;
//     for(int i=0;i<n;i++){
//         int leftsum=0;
//         int rightsum=0;
//         for(int j=0;j<i;j++){
//             leftsum=leftsum+nums[j];
//         }
//         for(int k=n-1;k>i;k--){
//             rightsum=rightsum+nums[k];
//         }
//         if(rightsum==leftsum){
//     // //         if(i==0){
//     // //             pivot=-1;
//     // //         }
//     // //         else{
//     // //             pivot=i;     //this whole part is taking a high complexity
//     // //         }                  to overcome this we should you only return i
//     // //         break;             in the if statement and return -1 outside it.
//     // //     }
//     // // }
//     // // if(pivot==0){
//     // //     pivot=-1;
//     // // }
//     // // else if(pivot==-1){
//     // //     pivot=0;
//     // // }
//     // // return pivot;
// }
// int main(){
//     return 0;
// }

////Re-arrange array element by sign(leet:2149)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> rearrangeArray(vector<int>& nums) {
//     int n=nums.size();
//     int m=n/2;
//     vector<int>ans(n);
//     vector<int>negative(m);
//     vector<int>positive(m);
//     int negidx=0;
//     int posidx=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]>0){
//             positive[posidx]=nums[i];
//             posidx++;
//         }
//         else{
//             negative[negidx]=nums[i];
//             negidx++;
//         }
//     }
//     negidx=0;
//     posidx=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//         ans[i]=positive[posidx++];
//         }
//         else{
//             ans[i]=negative[negidx++];
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<positive[i]<<" ";
//     // }
//     // cout<<endl;
//     // for(int i=0;i<n;i++){
//     //     cout<<negative[i]<<" ";
//     // }
//     // cout<<endl;
//     // for(int i=0;i<n;i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     return ans;
// }
// int main(){
//     vector<int>nums={3,1,-2,-5,2,-4};
//     rearrangeArray(nums);
//     return 0;
// }

////Find the Duplicate Number(leet:287)
// #include<iostream>
// #include<vector>
// #include<algorithm>//we used sorting here
// using namespace std;
// int findDuplicate(vector<int>& nums) {
//     sort(nums.begin(),nums.end());

//     for(int i=0;i<nums.size()-1;i++){
//         if(nums[i]==nums[i+1]){
//             return nums[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     return 0;
// }

