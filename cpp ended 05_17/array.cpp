// //rotate matrix[leet 48][sde sheet]
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//     }
// };


// //merge intervals[leet: 56][sde sheet]
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals){
//         int n=intervals.size();
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>>ans;
//         for(int i=0;i<n;i++){
//             if(ans.empty() || ans.back()[1]<intervals[i][0]){
//                 ans.push_back(intervals[i]);
//             }
//             else{
//                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
//             }
//         }
//         return ans;
//     }
// };


// //merge sorted array(leet : 88)
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int j=0;
//         for(int i=m;i<nums1.size();i++){
//             if(j<n){
//                 nums1[i]=nums2[j];
//                 j++;
//             }
//         }
//         sort(nums1.begin(),nums1.end());
//     }
// };


// //find the duplicate number(leet : 287)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(i+1==nums.size())break;
//             if(nums[i]==nums[i+1])return nums[i];
//         }
//         return -1;
//     }
// };

// //find missing and repeating num[tuf]
// class Solution {
// public:
//     vector<int> findMissingRepeatingNumbers(vector<int> nums) {
//         // if(nums.size()==0)return null;
//         vector<int>sol;
//         sort(nums.begin(),nums.end());
//         int missing;
//         int repeating;
//         for(int i=0;i<nums.size();i++){
//             //do check the index is accessible or not
//             if(nums[i]==nums[i+1])repeating=nums[i];
//             if(nums[i+1]-nums[i]==2)missing=i+2;
//         }
//         sol.push_back(repeating);
//         sol.push_back(missing);
//         return sol;
//     }
// };

// //Inversion of array[tuf]
// #include<iostream>
// #include<vector>
// using namespace std;
// int merge(vector<int>&arr,int left, int mid, int right){
//     vector<int>temp;
//     int low=left;
//     int high=mid+1;
//     //we have to sort the array and merge it;
//     int count=0;
//     //merging;
//     while(low<=mid && high<=right){
//         if(arr[low]<=arr[high]){
//             temp.push_back(arr[low]);
//             low++;
//         }
//         else{
//             temp.push_back(arr[high]);
//             count+=(mid-low+1);
//             high++;
//         }
//     }
//     //if some elements left in left array;
//     while(low<=mid){
//         temp.push_back(arr[low]);
//         low++;
//     }
//     //if some elements left in right array;
//     while(high<=right){
//         temp.push_back(arr[high]);
//         high++;
//     }
//     //copying the temp array to the main array;
//     for(int i=left; i<=right; i++){
//         arr[i]=temp[i-left];
//     }
//     return count;
// }
// int mergeSort(vector<int>&arr,int left, int right){
//     int count=0;
//     if(left>=right)return count;
//     int mid=(left+right)/2;
//     count=count+mergeSort(arr,left,mid);
//     count=count+mergeSort(arr,mid+1,right);
//     count+=merge(arr,left,mid,right);
//     return count;
// }
// int inversionCount(vector<int>&arr, int n){
//     return mergeSort(arr,0,n-1);
// }
// int main(){
//     vector<int>arr={-10, -5, 6, 11, 15, 17};
//     int n=6;
//     int count=inversionCount(arr,n);
//     cout<<"your count is : "<<count<<endl;
//     return 0;
// }
