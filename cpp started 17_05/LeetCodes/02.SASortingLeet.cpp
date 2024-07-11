////Peak index in the mountain array(leet: 852)
// #include<iostream>
// #include<vector>
// using namespace std;
// // int peakIndexInMountainArray(vector<int>& arr) {//it was a bad approach(my approach)
// //     int n=arr.size();
// //     int s=0;
// //     int e=n-1;
// //     int mid=(s+e)/2;
// //     int ans=0;
// //     while(s<=e){//it was a very good approach in your terms. Else it is very bad to see.
// //         mid=(s+e)/2;
// //         if(arr[mid]>arr[mid+1]){//these 2 if statements are creating very bad complexity
// //             if(arr[mid]>arr[mid-1]){
// //                 ans=mid;
// //                 break;
// //             }
// //         }
// //         else if(arr[mid]<arr[mid+1]){
// //             s=mid+1;
// //         }
// //         else if(arr[mid]<arr[mid-1]){
// //             e=mid-1;
// //         }
// //     }
// //     cout<<ans;
// // }
// int peakIndexInMountainArray(vector<int>& arr) {//very small and good approach.
//     int n=arr.size();//just see the application in the notebook
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int ans=0;
//     while(s<e){
//         mid=(s+e)/2;
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//     }
//     cout<<e;
// }
// int main(){
//     vector<int>arr={0,1,2,3,5,6,4,3,2,1};
//     peakIndexInMountainArray(arr);
//     return 0;
// }

// //First repeating element(GfG) 
// #include<iostream>
// #include<vector>
// #include<bitset>
// #include<unordered_map>
// using namespace std;
// void FirstRepeatingElement(int arr[],int n){//it will give you n^2 complexity
//     // int ans=0;
//     // int index=0;
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]==arr[j]){
//     //         ans=1;
//     //         index=i;
//     //         break;
//     //     }
//     //     }
//     // }
//     // if(ans==1){
//     //         cout<<index;
//     // }
//     // else{
//     //     cout<<-1;
//     // }

//     //we have to use hashing in this code.
//     unordered_map<int,int>hash;
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     int thesaver=0;
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]>1){
//             cout<<i+1;
//             thesaver=1;
//             break;
//         }
//     }
//     if(thesaver!=1){
//         cout<<"-1";
//     }
// }
// int main(){
//     int arr[]={2,3,4,5,6,7,4};
//     int n=8;
//     FirstRepeatingElement(arr,n);
//     return 0;
// }

// //Capacity to Ship Packages within D Days(Leet:1011)
// #include<iostream>//it is a good q to be done, work on it after some time
// #include<vector>
// #include<limits.h>
// using namespace std;
// int shipWithinDays(vector<int>& weights, int days) {
//     int n=weights.size();
//     int max_num=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(weights[i]>max_num){
//             max_num=weights[i];
//         }
//     }
//     cout<<max_num<<endl;
//     int sumTillmax=0;
//     for(int i=0;i<max_num;i++){
//         sumTillmax=sumTillmax+weights[i];
//     }
//     cout<<sumTillmax;
// }
// int main(){
//     vector<int>weights={1,2,3,4,5,6,7,8,9,10};
//     int days=5;
//     shipWithinDays(weights,days);
//     return 0;
// }

// // Search in rotated and sorted array(leet: 33)
// #include <iostream>
// #include <vector>
// using namespace std;
//  int search(vector<int> &nums, int target) {
//         int n = nums.size();
//         int s = 0;
//         int e = n - 1;
//         int pivot = nums[0];
//         int pivotIndex = 0;
//         while (s <= e) {
//             int mid = (s + e) / 2;
//             // Ensure mid + 1 and mid - 1 are within bounds(very imp part)
//             if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
//                 pivot = nums[mid];
//                 pivotIndex = mid;
//                 break;
//             }
//             if (mid > 0 && nums[mid] < nums[mid - 1]) {
//                 pivot = nums[mid - 1];
//                 pivotIndex = mid - 1;
//                 break;
//             }
//             if (nums[mid] >= nums[s]) {
//                 s = mid + 1;
//             } else {
//                 e = mid - 1;
//             }
//         }

//         if (nums[0] <= target && target <= pivot) {
//             s = 0;
//             e = pivotIndex;
//         } else {
//             s = pivotIndex + 1;
//             e = n - 1;
//         }

//         while (s <= e) {
//             int mid = (s + e) / 2;
//             if (nums[mid] == target) {
//                 cout<<mid;
//                 break;
//             } else if (target < nums[mid]) {
//                 e = mid - 1;
//             } else {
//                 s = mid + 1;
//             }
//         }

//         return -1; // target not found
//     }
// int main(){
//     vector<int> nums = {1,3};
//     int target = 1;
//     search(nums, target);
//     return 0;
// }

////SQrt(leet: 69)
// #include<iostream>
// #include<vector>
// using namespace std;
// int mySqrt(int x) {
//     int s=0;
//     int e=x;
//     int ans=-1;
//     long long int mid= s+(e-s)/2; // long long to increase the capacity of mid
//     while(s<=e){
//         mid= s+(e-s)/2;
//         if(mid*mid==x){
//             cout<<mid;
//             break;
//         }
//         else if(mid*mid<x){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     cout<<ans;   
// }
// int main(){
//     int x=81;
//     mySqrt(x);
//     return 0;
// }

////Search in a 2D array(leet: 74)
// #include<iostream>
// #include<vector>
// using namespace std;
// bool searchMatrix(vector<vector<int>>& matrix, int target){
//     int row =matrix.size();
//     int col=matrix[0].size();
//     int n=row*col;

//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int mid= s+(e-s)/2;
//         int rowIndex=mid/col;//this formula to note
//         int colIndex=mid%col;
//         int currNum=matrix[rowIndex][colIndex];
//         if(currNum==target){
//             cout<<"found";
//             break;
//         }
//         else if(target<currNum){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }

//     }
//     return -1;
// }
// int main(){
//     vector<vector<int>>matrix={
//         {1,2,3,4},
//         {4,5,6,7},
//         {8,9,10}
//     };
//     int target=9;
//     searchMatrix(matrix,target);
//     return 0;
// }