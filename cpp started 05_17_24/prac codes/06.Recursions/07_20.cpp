////Sum of n numbers
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int thesum= n+sum(n-1);
//     return thesum;
// }
// int main(){
//     int n=10;
//     int ans=sum(n);
//     cout<<ans;
//     return 0;
// }

////Printing of an array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// void arrayprint(int arr[],int n,int i){
//     if(i>=n){
//         return ;
//     }
//     cout<<arr[i]<<" ";
//     arrayprint(arr,n,i+1);//i++ will not work in this case because pehele use hoga then increment
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int i=0;
//     arrayprint(arr,n,i);
//     return 0;
// }

// //Searching in an array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// bool RecursiveSearch(int arr[],int n,int m,int i){
//     if(i>=n){
//         return false;
//     }
//     if(arr[i]==m){
//         return true;
//     }
//     RecursiveSearch(arr,n,m,i+1);
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int m=37;
//     int i=0;
//     if(RecursiveSearch(arr,n,m,i)){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }

////Find min num in an array using recursion
// #include<iostream>
// #include<vector>
// #include<limits.h>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// void RecursiveMinNum(int arr[],int size, int index,int &minNum){//you have to pass by reference
//     if(index>=size){
//         return ;
//     }
//     minNum=min(arr[index],minNum);
//     RecursiveMinNum(arr,size,index+1,minNum);
// }
// int main(){
//     int arr[]={323,2,3,4,5,6};
/////   for max 
////    int maxNum=INT_MIN;
//     int minNum= INT_MAX;
//     int size=6;
//     int index=0;
//     RecursiveMinNum(arr,size,index,minNum);
//     cout<<minNum;
//     return 0;
// }

////Store the even numbers in a vector
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void theEvenNumbers(int arr[],int size, int index, vector<int>&ans){
//     if(index>=size){
//         return;
//     }
//     if(arr[index]%2==0){
//         ans.push_back(arr[index]);
//     }
//     theEvenNumbers(arr,size,index+1,ans);
// }
// int main(){
//     vector<int>ans;
//     int arr[]={2131,2,32,32,42,1,12,34325,23,2322,3};
//     int size=11;
//     int index=0;
//     theEvenNumbers(arr,size,index,ans);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

////Double the existing numbers of the given array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void Doubling(int arr[],int size,int index){
//     if(index>=size){
//         return;
//     }
//     arr[index]=arr[index]*2;
//     Doubling(arr,size,index+1);
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     int index=0;
//     Doubling(arr,size,index);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

////Find the index of the given number to be found in the array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// bool theFoundIndex(int arr[],int toFind,int size,int index,int &foundIndex){
//     if(index>=size){
//         return false;
//     }
//     if(arr[index]==toFind){
//         foundIndex=index;
//         return true;
//     }
//     theFoundIndex(arr,toFind,size,index+1,foundIndex);
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=6;
//     int index=0;
//     int toFind=43;
//     int foundIndex=0;
//     if(theFoundIndex(arr,toFind,size,index,foundIndex)){
//         cout<<"the num is found at :: "<<foundIndex;
//     }
//     else{
//         return -1;
//     }
//     return 0;
// }

////Find all the occurance of the given element in the array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int theOccurancePrinter(int arr[],int toFound,int size,int index){
//     if(index>=size){
//         return -1;
//     }
//     if(arr[index]==toFound){
//         cout<<index<<" ";
//     }
//     theOccurancePrinter(arr,toFound,size,index+1);
// }
// int main(){
//     int arr[]={5,2,5,4,5,6,5};
//     int size=7;
//     int index=0;
//     int toFound=5;
//     theOccurancePrinter(arr,toFound,size,index);
//     return 0;
// }

////print the digits of the given number
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int printDigits(int num){
//     if(num<=0){
//         return 0;
//     }
//     int ans;
//     ans=num%10;
//     num=num/10;
//     printDigits(num);
//     cout<<ans<<" ";
// }
// int main(){
//     int num=2374927;
//     printDigits(num);
//     return 0;
// }
//for giving ans in vector form just pass it by reference and then do the pushback..

//Print number from a vector//HW
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
void printNumber(vector<int>nums,int index,int size){
    if(index>=nums.size()-1){
        return ;
    }
}
int main(){
    vector<int>nums={5,3,5,2};
    int index=0;
    int size=nums.size();
    printNumber(nums,index,size);
    return 0;
}