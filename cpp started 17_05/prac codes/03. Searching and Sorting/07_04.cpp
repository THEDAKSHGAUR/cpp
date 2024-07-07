// //Missing element in a sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int MissingElementSortedArray(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid =(s+e)/2;
//     int ans;
//     while(s<=e){
//         mid =(s+e)/2;
//         if(arr[mid]-mid==1){
//             s=mid+1;
//         }
//         else if(arr[mid]-mid!=1){
//             ans=mid;
//             e=mid-1;
//         }
//     }
//     //for the last element as the code is not running
//     if(ans==4199136){
//         ans=n;
//     }
//     cout<<"The missing element is : "<<ans+1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n=8;
//     MissingElementSortedArray(arr,n);
//     return 0;
// }

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

// //Missing element from an array with duplicates
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int DuplicateArrayMissingElement(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         if(arr[i+1]-arr[i]!=1){
//             cout<<"the missing num is :: "<<arr[i]+1;
//             break;
//         }
//     }
// }
// int main(){
//     vector<int>arr={1,5,3,6,7,8,9,2};
//     DuplicateArrayMissingElement(arr);
//     return 0;
// }