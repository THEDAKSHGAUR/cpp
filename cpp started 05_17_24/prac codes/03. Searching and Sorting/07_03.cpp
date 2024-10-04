// SEARCHING AND SORTING

////Binary search algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(int array[],int n, int target){
//     int start=0;
//     int end=n-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(array[mid]==target){
//             cout<<"Element found at index :: "<<mid;
//             break;
//         }
//         else if(array[mid]<target){
//             start=mid+1;
//         }
//         else if(array[mid]>target){
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;

// }
// int main(){
//     int array[]={10,99,999,8899,82988};
//     int n=5;
//     int target=999;
//     binarySearch(array,n,target);
//     return 0;
// }

//// Find first occurance of a number in a sorted array
// #include <iostream>
// #include <vector>
// using namespace std; //
// int findFirstOccurance(int arr[], int n, int target){ // giving complexity of logn
//     int s = 0;
//     int e = n - 1;
//     int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] == target){
//             if (arr[mid] != arr[mid - 1]){
//                 cout << "your asked target found at index :: " << mid;
//                 break;
//             }
//             else{
//                 e = mid - 1;
//             }
//         }
//         else if (arr[mid] < target){
//             s = mid + 1;
//         }
//         else if (arr[mid] > target){
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 6, 7, 8};
//     int n = 13;
//     int target = 4;
//     findFirstOccurance(arr, n, target);
//     return 0;
// }

////Find the last occurance in a sorted array
// #include <iostream>
// #include <vector>
// using namespace std; //
// int findLastoccurance(int arr[], int n, int target){ // giving complexity of logn
//     int s = 0;
//     int e = n - 1;
//     int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] == target){
//             if (arr[mid] != arr[mid + 1]){
//                 cout << "your asked target found at index :: " << mid;
//                 break;
//             }
//             else{//there are only 2 changes for the last occurance
//                 s=mid+1;
//             }
//         }
//         else if (arr[mid] < target){
//             s = mid + 1;
//         }
//         else if (arr[mid] > target){
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
    // int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 6, 7, 8};
    // int n = 13;
    // int target = 3;
    // findLastoccurance(arr, n, target); 
    // return 0;
// }

////Find total occurance
// #include<iostream>
// #include<vector>
// using namespace std;
// int findTotalOccurance(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int initial=0;
//     int ending=0;
//     while(s<=e){
//         mid=(s+e)/2;
//         if(arr[mid]==target){
//             if(arr[mid]!=arr[mid-1]){
//                 initial=mid;
//                 break;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//     }
//     s=0;
//     e=n-1;
//     while(s<=e){
//         mid=(s+e)/2;
//         if(arr[mid]==target){
//             if(arr[mid]!=arr[mid+1]){
//                 ending=mid;
//                 break;
//             }
//             else{
//                 s=mid+1;
//             }
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }

//     }
//     int ans=ending-initial+1;//here +1 is important
//     cout<<"total number of occurance is :: "<<ans;
//     return ans;
// }
// int main(){
//     int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7, 8};
//     int n = 15;
//     int target = 5;
//     findTotalOccurance(arr, n, target);
//     return 0;
// }

//