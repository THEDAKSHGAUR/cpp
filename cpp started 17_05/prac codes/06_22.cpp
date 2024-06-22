//REFERENCE VARIABLES
// #include<iostream>
// using namespace std;
// //it is called by reference
// int increment(int &n){
//     n=n+1;
//     cout<<n<<endl;   
// }
// int main(){
//     int n;
//     cin>>n;
//     increment(n);
//     cout<<n;
//     return 0;
// }
//called by value(only applicable for the scope and not for value changing permanently)
// int increment(int n){
//     n=n+1;
//     cout<<n<<endl;
//     return n;
// }
// int main(){
//     int n;
//     cin>>n;
//     increment(n);
//     cout<<n;
//     return 0;
// }

//FINDING UNIQUE ELEMENT
// #include<iostream>
// using namespace std;
// int getuniquevalue(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     cout<<"The unique element is :: "<<ans;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,6,5,4,3,2,1};
//     int n=13;
//     getuniquevalue(arr,n);
// }

//FINDING SUBPAIR OF THE GIVEN ARRAY
#include<iostream>
using namespace std;
int subpair(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<",";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={10,20,30};
    int n=3;
    subpair(arr,n);

}
