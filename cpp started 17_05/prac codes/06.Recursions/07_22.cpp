// //Check whether the given array is sorted
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// bool checksorting(int arr[],int size,int index){
//     if(index+1>=size-1){
//         return true;
//     }
//     if(arr[index]>arr[index+1]){
//         return false;
//     }
//     checksorting(arr,size,index+1);
// }
// int main(){
//     int arr[]={2,3,5};
//     int size=3;
//     int index=0;
//     if(checksorting(arr,size,index)){
//         cout<<"sorted";
//     }
//     else{
//         cout<<"not sorted";
//     }
//     return 0;
// }

////Binary search using  recursion
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int theBinarySearch(int arr[],int k,int start ,int end){
//     if(start>end){
//         return -1;
//     }
//     int mid=start+(end-start)/2;
//     if(arr[mid]==k){
//         return mid;
//     }
//     else if(arr[mid]>k){
//         return theBinarySearch(arr,k,start,end-1);
//     }
//     else{
//         return theBinarySearch(arr,k,start+1,end);
//     }
// }
// int main(){
//     int arr[]={1,2,4,5,6,7};
//     int k=60;
//     int start=0;
//     int end=5;
//     int ans=theBinarySearch(arr,k,start,end);
//     cout<<ans;
//     return 0;
// }

// //Subsequence of the given string
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void findSubstrings(string str,string output, int index){
//     if(index>=str.length()){
//         cout<<"->"<<output<<endl;
//         return;
//     }
//     char ch=str[index];
//     //excluding
//     findSubstrings(str,output,index+1);
//     //include
//     output.push_back(ch);
//     findSubstrings(str,output,index+1);
// }
// int main(){
//     string str="abc";
//     int index=0;
//     string output="";
//     findSubstrings(str,output,index);
//     return 0;
// }

