// //ARRAY 1
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int min_value= INT_MAX;
//     int max_value= INT_MIN;

//     //Input value
//     int a;
//     cout<<"enter the number of array elements ::";
//     cin>>a;
//     int array[a]={};
//     for(int i=0;i<a;i++){
//         cout<<"enter the value for index "<<i<<" ::";
//         cin>>array[i];
//     }
//     cout<<endl;
    
//     //printing the array
//     cout<<"The array is:: ";
//     for(int i=0;i<a;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;

//     //finding min num in the array
//     for(int i=0;i<a;i++){
//         if(array[i]<min_value){
//             min_value=array[i];
//         }
//     }
//     cout<<"The min value is:: "<<min_value;
//     cout<<endl;

//     //finding the max num in the array
//     for(int i=0;i<a;i++){
//         if(array[i]>max_value){
//             max_value=array[i];
//         }
//     }
//     cout<<"The min value is:: "<<max_value;
//     cout<<endl;

//     //printing reversed array
//     cout<<"Your reversed array ::";
//     for(int i=a-1;i>=0;i--){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;

//     //printing the reversed array using swap funcn
//     int left=0;
//     int right=a-1;
//     while(left<=right){
//         swap(array[left],array[right]);
//         left++;
//         right--;
//     }
//     cout<<"The reversed array from swap function is:: ";
//     for(int i=0;i<a;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;

//     //printing the extremes
//     int l=0;
//     int r=a-1;
//     cout<<"Your extremes are :: ";
//     while(l<=r){
//         if(l!=r){
//             cout<<array[l]<<" ";
//             cout<<array[r]<<" ";
//         }
//         else{
//             cout<<array[l]<<" ";
//         }
//         l++;
//         r--;
//     }
// }


//REFERENCE VARIABLE AND FUNC CALL
#include<iostream>
using namespace std;
int main(){
    int n=90;
    int&a=n;
    int&b=n;
    int&c=n;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<n<<endl;
}