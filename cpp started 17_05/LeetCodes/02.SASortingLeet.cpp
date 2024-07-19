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




//////These all q are very inportant pls revise
////K-diff pairs in an Array(Leet:532)
// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         int i=0;
//         int j=1;
//         set<pair<int,int>>ans;
//         while( j<n){
//             if(i==j){
//                 j++;
//             }
//             else if(nums[j]-nums[i]==k){
//                 ans.insert({nums[i],nums[j]});
//                 i++;
//                 j++;
//             }
//             else if(nums[j]-nums[i]>k){
//                 i++;
//             }
//             else{
//                 j++;
//             }
            
//         }

//         return ans.size();
//     }
// };
///////DONE USING BINARY SEARCH APPROACH(
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<set>
// using namespace std;
// int bs(vector<int>& nums, int start, int x){
//     int n=nums.size();
//     int end=n-1;
//     while(end>=start){
//         int mid=start +(end-start)/2;
//         if(nums[mid]==x){
//             return mid;
//         }
//         else if(nums[mid]>x){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;

// }
// int findPairs(vector<int>& nums, int k){
//     int n=nums.size();
//     set<pair<int,int>>themain;
//     for(int i=0;i<n;i++){
//         if(bs(nums,i+1,nums[i]+k)!=-1){
//             themain.insert({nums[i],nums[i]+k});
//         }
//     }
//     return themain.size();
// } 
// int main(){
//     return 0;
// }

//////Find K closest elements(Leet: 658)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// // //very hard and long approach
// // vector<int> findClosestElements(vector<int>& arr, int k, int x) {
// //     sort(arr.begin(),arr.end());
// //     vector<int>ans;
// //     int sizeAns=ans.size();
// //     int n=arr.size();
// //     int start=0;
// //     int end=n-1;
// //     int found=-1;
// //     int foundIndex=0;
// //     while(end>=start){
// //         int mid=start +(end-start)/2;
// //         if(x==arr[mid]){
// //             found=0;
// //             foundIndex=mid;
// //         }
// //         else if(x>arr[mid]){
// //             start=mid+1;
// //         }
// //         else{
// //             end=mid-1;
// //         }
// //     }
// //     if(found==0){
// //         int m=foundIndex-1;
// //         int p=foundIndex+1;
// //         while (sizeAns<=k){
// //             if(m<0 && p<n){
// //                 ans.push_back(arr[p]);
// //                 p++;
// //             }
// //             else if(p>n && m>=0){
// //                 ans.push_back(arr[m]);
// //                 m--;
// //             }
// //             else{
// //                 if(abs(arr[m]-x)<abs(arr[p]-x)){
// //                     ans.push_back(arr[m]);
// //                     m--;
// //                 }
// //                 else if(abs(arr[m]-x)>abs(arr[p]-x)){
// //                     ans.push_back(arr[p]);
// //                     p++;
// //                 }
// //                 else if(abs(arr[m]-x)==abs(arr[p]-x)){
// //                     if(arr[m]<arr[p]){
// //                         ans.push_back(arr[m]);
// //                         m--;
// //                     }
// //                     else if(arr[m]>arr[p]){
// //                         ans.push_back(arr[p]);
// //                         p++;
// //                     }
// //                 }
// //             }
// //         }
// //     }
// //     else if(found==-1){
// //         if(x<arr[0]){
// //             for(int i=0;sizeAns<=k;i++){
// //                 ans.push_back(arr[i]);
// //             }
// //         }
// //         else if(x>arr[n-1]){
// //             for(int i=n-1;sizeAns<=k;i--){
// //                 ans.push_back(arr[i]);
// //             }
// //         }
// //     }
// //     return ans;
// // }
// ////Very easy and brilliant approach
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//     vector<int>ans;
//     int n=arr.size();
//     int l=0;
//     int h=n-1;
//     while(h-l>=k){
//         if(arr[h]-x>=x-arr[l]){
//             h--;
//         }
//         else{
//             l++;
//         }
//     }
//     // for(int i=l;i<=h;i++){
//     //     ans.push_back(arr[i]);
//     // } 
//     return vector<int>(arr.begin()+l,arr.begin()+h+1);
// }
// int main(){
//     return 0;
// }

////Book allocation problem(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<numeric>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// bool isPossibleSol(int a[],int N,int M,int mid){
//     int sum=0;
//     int c=1;
//     for(int i=0;i<N;i++){
//         if(a[i]>mid){
//             return false;
//         }
//         if(sum+a[i]>mid){
//             c++;
//             sum=a[i];
//             if(c>M){
//                 return false;
//             }
//         }
//         else{
//                 sum+=a[i];
//             }
//     }
//     return true;
// }
// int findPages(int N, int a[], int M){
//     if(M>N)return -1;
//     int start=0;
//     int end=accumulate(a,a+N,0);
//     int ans=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(isPossibleSol(a,N,M,mid)){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int a[]={10,20,30,40,50};
//     int N=5;
//     int M=2;
//     int ans=findPages(N,a,M);
//     cout<<ans;
//     return 0;
// }

////The Painter's Partition Problem-II(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// bool isPossible(int arr[],int n,int k,long long mid){
//     long long sum=0;
//     int c=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mid){
//             return false;
//         }
//         if(sum+arr[i]>mid){
//             c++;
//             sum=arr[i];
//             if(c>k){
//                 return false;
//             }
//         }
//         else{
//             sum+=arr[i];
//         }
//     }
//     return true;
// }
// long long minTime(int arr[], int n, int k){
//     long long start=0;
//     long long end=0;
//     for(int i=0;i<n;i++){
//         end+=arr[i];
//     }
//     int ans=-1;
//     while(start<=end){
//         long long mid=start+(end-start)/2;
//         if(isPossible(arr,n,k,mid)){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     return 0;
// }

////Aggressive gaiyaan/cows(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// bool arrangement(vector<int >stalls,int n,int k,int mid){
//     int cowPlaced=1;
//     int currCow=stalls[0];
//     for(int i=1;i<n;i++){
//         if(stalls[i]-currCow>=mid){
//             cowPlaced++;
//             currCow=stalls[i];
//         }
//         if(cowPlaced>=k){
//             return true;
//         }
//     }
//     return false;
// }
// int solve(int n, int k, vector<int> &stalls) {
//     sort(stalls.begin(),stalls.end());
//     int ans=0;
//     int start=0;
//     int end=stalls[n-1];
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arrangement(stalls,n,k,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     return 0;
// }

////EKO-SPOJ(spoj)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// bool theminValue(vector<long long int>trees,int m,int mid){
//     int sum=0;
//     for(int i=0;i<trees.size();i++){
//         if(trees[i]-mid>=0){
//             sum+=trees[i]-mid;
//         }
//         if(sum>=mid){
//             return true;
//         }
//     }
//     return false;
// }
// int minTree(vector<long long int>trees,int m){
//     sort(trees.begin(),trees.end());
//     int n=trees.size();
//     int start=0;
//     int end=trees[n-1];
//     int ans=0;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(theminValue(trees,m,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int m;
//     cin>>m;
//     vector<long long int>trees={20,15,10,17};
//     int theans=minTree(trees,m);
//     cout<<theans;
//     return 0;
// }

////Prata-Spoj(spoj)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// bool isPossible(int p,vector<int>ranks,int mid){
//     int prataCount=1;
//     int sum=0;
//     int rankIndex=0;
//     while(prataCount<=p){
//         if(sum<=mid){
//             sum=sum+ranks[rankIndex]*prataCount;
//             prataCount++;
//         }
//         if(sum>mid){
//             sum=0;
//             rankIndex++;
//             prataCount=1;
//         }
//         if(rankIndex>ranks.size()){
//             return false;
//         }
//     }
//     return true;
// }
// int findTheminTime(int p,vector<int>ranks){
//     sort(ranks.begin(),ranks.end());
//     int n=ranks.size();
//     int maxTime=0;
//     int ans=0;
//     for(int i=0;i<ranks[n-1];i++){
//         maxTime+=i;
//     }
//     int start=0;
//     int end=maxTime;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(isPossible(p,ranks,mid)){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int p=10;
//     vector<int>ranks={1,2,3,4};
//     int ans=findTheminTime(p,ranks);
//     cout<<ans;
//     return 0;
// }