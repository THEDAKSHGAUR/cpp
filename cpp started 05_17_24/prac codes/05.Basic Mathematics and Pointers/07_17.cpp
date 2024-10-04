// //Pointers
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
//     //**wild pointers
//     // //1.Uninitialized pointer
//     // int *ptr;
//     // cout<<ptr<<endl;
//     // //2.Deleted pointer
//     // int *ptr=new int;
//     // delete ptr;
//     // cout<<ptr<<endl;
//     // //3.Pointer to non-existing value/variable
//     // int *ptr=&b;
//     // cout<<ptr<<endl;

//     //**Void pointers
//     ////intialising and dereferencing with Void pointer 
//     // void *ptr;
//     // int a=5;
//     // ptr=&a;
//     // int *intptr=static_cast<int*>(ptr);
//     // cout<<*intptr<<endl;
//     ////dynamic allocation using new
//     // int *ptr= new int;
//     // void * voidptr =ptr;
//     // int* intptr=static_cast<int*>(voidptr);
//     // *intptr =10;
//     // cout<<*ptr<<endl;
//     // return 0;
// }

// //passing parameter in the function
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int size(int *arr){
//     cout<<sizeof(arr)<<endl;
// }
// void sum(int arr[]){
//     //incrementing the value of arr element using pointer.
//     *arr=*arr+1;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int arrSize=5;
//     cout<<sizeof(arr)<<endl;
//     size(arr);
//     sum(arr);
//     for(int i=0;i<arrSize;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// //calling the parameters of function by reference by normal;
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int solve(int *p){
//     //if we mark the parameter as int * &p then we will be making change in the existing pointer in the main function.
//     p=p+1;
// }
// int main(){
//     //they both will give same value as we have just copied the real a to a new pointer and used it in the above function.
//     int a=5;
//     int *p=&a;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
//     solve(p);
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
//     return 0;
// }

//Leet{
//first we will do searching and sorting q after revising the array}
//Exponential search
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std;
int ExponentialSearch(vector<int>arr,int x){
    int n=arr.size();
    int i=1;
    int theIndex=0;
    while(i<=n-1){
        if(arr[i]>x){
            i=i*2;
        }
        else if(arr[i]<x){
            theIndex=min(i,n-1);
        }
    }
    int ans=binarySearch(arr,theIndex,x);
}
int binarySearch(vector<int>arr,int index,int x){
    //write a basic bS code.
}
int main(){
    return 0;
}