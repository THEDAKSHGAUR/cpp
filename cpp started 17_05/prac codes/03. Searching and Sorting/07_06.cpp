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
