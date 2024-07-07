//// Find the pivot in a rotated and sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int findThepivot(vector<int>& arr){
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         //for single element(it is a corner case)
//         if(s==e){
//             cout<<s;
//             break;
//         }
//         if(arr[mid]<arr[mid-1]){
//             cout<<mid-1;
//             break;
//         }
//         else if(arr[mid]>arr[mid-1]){
//             cout<<mid;
//             break;
//         }
//         else if(arr[s]>arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
// }
// int main(){
//     vector<int>arr={12,14,16,2,4,6,8,10};
//     findThepivot(arr);
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

//**Array practice**
////common elements in 3 sorted arrays
// #include<iostream>
// #include<vector>
// using namespace std;
// int findCommon(int a[],int b[],int c[],int n, int m, int p){
//     int i,j,k;
//     i=j=k=0;
//     vector<int>arr;
//     while(i<n && j<m && k<p){
//         if(a[i]==b[j] && b[j]==c[k]){
//             arr.push_back(a[i]);
//             i++;
//             j++;
//             k++;
//             break;
//         }
//         else if(a[i]<b[j]){
//             i++;
//         }
//         else if(b[j]<c[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     } 
//     int x=arr.size();
//     cout<<x;
//     // for(int i=0;i<x;i++){
//     //     cout<<arr[i]<<" ";
//     // }
// }
// int main(){
//     int a[]={1,2,3,4,5};
//     int b[]={1,3,6,8};
//     int c[]={1,2,3,4,5,6};
//     int m=5;
//     int n=4;
//     int p=6;
//     findCommon(a,b,c,m,n,p);
//     return 0;
// }
