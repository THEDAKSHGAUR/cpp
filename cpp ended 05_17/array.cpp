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


// //search in a 2D array(leet:74)(tuf)
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target){
//         if(matrix.empty())return false;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int low=0;
//         int high=m*n-1;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             int row=mid/n;
//             int col=mid%n;
//             if(matrix[row][col]==target)return true;
//             else if(matrix[row][col]>target)high=mid-1;
//             else low=mid+1;
//         }
//         return false;
//     }
// };


//pow(x,n)(leet : 50)(tuf)
// class Solution {
// public:
//     double myPow(double x, int n) {
//         if(n==0)return 1;
//         if(n==-1)return 1/x;
//         if(n==1)return x;
//         //convert power, int to double
//         long long power=n;
//         if(power<0){
//             x=1/x;
//             power= -power;
//         }
//         double result=1;
//         while(power>0){
//             if(power%2==1){
//                 result= result*x;
//             }
//             x=x*x;
//             power=power/2;
//         }
//         return result;
//     }
// };


//majority element(leet : 169)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         //optimal approach
//         // int num=nums.size()/2;
//         // sort(nums.begin(),nums.end());
//         // int count=0;
//         // for(int i=0;i<nums.size();i++){
//         //     if(i<nums.size()-1){
//         //         if(nums[i]==nums[i+1]){
//         //             count++;
//         //             if(count==num)return nums[i];
//         //         }
//         //         else{
//         //             count=0;
//         //         }
//         //     }
//         //     else{
//         //         count++;
//         //         if(count>=num)return nums[i];
//         //     }
//         // }
//         // return 0;
//         //boyer-moyer voting algo
//         int ans=0;
//         int freq=0;
//         for(int i=0;i<nums.size();i++){
//             if(freq==0)ans=nums[i];
//             if(ans==nums[i])freq++;
//             else freq--;
//         }
//         return ans;
//     }
// };


// //majority elements II(leet :229)
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         if(nums.size()<=1)return nums;
//         int count1=0;
//         int count2=0;
//         int ele1=INT_MIN;
//         int ele2=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(count1==0 && ele2!=nums[i]){
//                 ele1=nums[i];
//                 count1++;
//             }
//             else if(count2==0 && ele1!=nums[i]){
//                 ele2=nums[i];
//                 count2++;
//             }
//             else if(ele1==nums[i])count1++;
//             else if(ele2==nums[i])count2++;
//             else{
//                 count1--;
//                 count2--;
//             }
//         }
//         //check whether the elements are in majority or not
//         vector<int>ans;
//         int cnt1=0;
//         int cnt2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==ele1)cnt1++;
//             if(nums[i]==ele2)cnt2++;
//         }
//         if(cnt1>nums.size()/3)ans.push_back(ele1);
//         if(cnt2>nums.size()/3)ans.push_back(ele2);
//         return ans;
//     }
// };


//Unique path(leet : 62)(tuf)
// class Solution {
// public:
//     // //recursive method got tle now using dp
//     // int countPath(int m ,int n, int i, int j){
//     //     if(i==m-1 && j==n-1)return 1;
//     //     if(i>=m || j>+n)return 0;
//     //     else return countPath(m,n,i+1,j)+countPath(m,n,i,j+1);
//     // }
//     ////using dynamic programming
//     int countPath(int m, int n, int i, int j, vector<vector<int>>&dp){
//         if(i==m-1 && j==n-1)return 1;
//         if(i>=m || j>=n)return 0;
//         if(dp[i][j]!=-1)return dp[i][j];
//         return dp[i][j]=countPath(m,n,i+1,j,dp)+countPath(m,n,i,j+1,dp);
//     }
//     int uniquePaths(int m, int n) {
//         if(m==1 && n==1)return 1;
//         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
//         countPath(m,n,0,0,dp);
//         return dp[0][0];
//     }
// };

////reverse pairs(leet : 493)(tuf)
// class Solution {
// public:
//     void merge(vector<int>&nums, int low, int mid, int high){
//         vector<int>temp;
//         int left=low;
//         int right=mid+1;
//         //adding element in temp array;
//         while(left<=mid && right<=high){
//             if(nums[left]<=nums[right]){
//                 temp.push_back(nums[left]);
//                 left++;
//             }
//             else{
//                 temp.push_back(nums[right]);
//                 right++;
//             }
//         }
//         //left elements in left array;
//         while(left<=mid){
//             temp.push_back(nums[left]);
//             left++;
//         }
//         //left elements in right array;
//         while(right<=high){
//             temp.push_back(nums[right]);
//             right++;
//         }
//         //transferring temp array to main array;
//         for(int i=low;i<=high;i++){
//             nums[i]=temp[i-low];
//         }
//     }
//     int countPairs(vector<int>&nums, int low, int mid, int high){
//         int right=mid+1;
//         int count=0;
//         for(int i=low; i<=mid; i++){
//             while(right<=high && (long long)nums[i]>2*(long long)nums[right])right++;
//             count +=(right-(mid+1));
//         }
//         return count;
//     }
//     int mergeSort(vector<int>&nums, int low, int high){
//         int count=0;
//         if(low>=high)return count;
//         int mid=low+(high-low)/2;
//         count += mergeSort(nums,low,mid);
//         count +=mergeSort(nums,mid+1,high);
//         count +=countPairs(nums,low,mid,high);
//         merge(nums,low,mid,high);
//         return count;
//     }
//     int reversePairs(vector<int>& nums) {
//         int n=nums.size();
//         return mergeSort(nums,0,n-1);
//     }
// };


// //two sum(leet : 01)(tuf)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         //it is the basic bruteforce approach we can perform 
//         // for(int i=0;i<nums.size();i++){
//         //     for(int j=i+1;j<nums.size();j++){
//         //         if(nums[i]+nums[j]==target)return {i,j};
//         //     }
//         // }
//         // return {};
//         //optimal approach to use in this code
//         unordered_map<int,int>mpp;
//         for(int i=0;i<nums.size();i++){
//             int num=nums[i];
//             int moreNeeded=target-num;
//             if(mpp.find(moreNeeded)!=mpp.end()){
//                 return {mpp[moreNeeded],i};
//             }
//             mpp[num]=i;
//         }
//         return {};
//     }
// };

// //4Sum(leet : 18)(tuf)
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>>ans;
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1])continue;
//             for(int j=i+1;j<n;){
//                 int p=j+1;int q=n-1;
//                 while(p<q){
//                     long long sum=(long long) nums[i]+(long long)nums[j]
//                     +(long long)nums[p]+(long long)nums[q];
//                     if(sum<target){
//                         p++;
//                     }
//                     else if(sum>target){
//                         q--;
//                     }
//                     else{
//                         ans.push_back({nums[i],nums[j],nums[p],nums[q]});
//                         p++;q--;
//                         while(p<q && nums[p]==nums[p-1])p++;
//                     }
//                 }
//                 j++;
//                 while(j<n && nums[j]==nums[j-1])j++;
//             }
//         }
//         return ans;
//     }
// };

// //longest consecutive subsequence(leet: 128)(tuf)
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         // //this is a better solution but not in O(n) complexity but in O(nlogn)
//         // if(nums.empty()) return 0;
//         // set<int> s(nums.begin(), nums.end());
//         // nums.assign(s.begin(), s.end());
//         // int n=1;
//         // int ans=0;
//         // for(int i=0;i<nums.size();i++){
//         //     if(i<nums.size()-1 && nums[i+1]-nums[i]==1)n++;
//         //     else{
//         //         ans=max(n,ans);
//         //         n=1;
//         //     }
//         // }
//         // return ans;
//         ////optimal sol (O(n));
//         unordered_map<int,int>map;
//         int n=nums.size();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             map[nums[i]]++;
//         }
//         for(auto & it: map){
//             int number=it.first;
//             if(map.find(number-1)==map.end()){
//                 int length=1;
//                 int num=number+1;
//                 while(map.find(num)!=map.end()){
//                     length++;
//                     num++;
//                 }
//                 ans=max(ans,length);
//             }
//         }
//         return ans;
//     }
// };