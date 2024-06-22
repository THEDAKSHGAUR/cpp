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
// #include<iostream>
// using namespace std;
// int subpair(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<",";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     subpair(arr,n);
// }//If we have given to print pair sum for the same we have to change the cout part with summing up 2 el.


//FINDING TRIPLETS
// #include<iostream>
// using namespace std;
// int triplets(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<",";
//             }
//             cout<<endl;
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     triplets(arr,n);
//     return 0;
// }


//SORT 0'S AND 1'S(FROM COUNTING APPROCH){WE HAVE TO USE THE REFERENCE VARIABLE}
//approach1: counts
// #include<iostream>
// using namespace std;
// int thecount(int arr[],int n,int &count1, int &count0){
//     count0=0;
//     count1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else if (arr[i]==1){
//             count1++;
//         }
//     }
//     cout<<"your count of 0,1 :: "<<count0<<","<<count1;
//     cout<<endl;
// }
// int filling(int count0, int count1){
//     cout<<"[";
//     for(int i=0;i<count0;i++){
//         cout<<"0"<<",";
//     }
//     for(int j=0;j<count1;j++){
//         if(j==count1-1){
//             cout<<"1";
//         }
//         else{
//             cout<<"1"<<",";
//         }
//     }
//     cout<<"]";
// }
// int main(){
//     int count1,count0;
//     int arr[]={0,1,0,0,1,0,1,1,0};
//     int n=9;
//     thecount(arr,n,count0,count1);
//     filling(count1,count0);
//     return 0;
// }

//approach2: 2 pointers
// #include<iostream>
// using namespace std;
// int swapper(int arr[],int n){
//     int left=0;
//     for(int right=0;right<n;right++){
//         if(arr[right]==0){
//             swap(arr[right],arr[left]);
//             left++;
//         }
//     }
//     //giving error
//     // for(int i=0;i<n;i++){
//     //     for(int j=n-1;j>=0;j--){
//     //         if(arr[j]<arr[i]){
//     //             swap(arr[i],arr[j]);
//     //             break;
//     //         }
//     //         }
//     //     }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// int main(){
//     int arr[]={1,1,1,1,0,0,0,0};
//     int n=8;
//     swapper(arr,n);
//     return 0;
// }


//SHIFT THE ARRAY BY 1(GIVING ERROR)
#include<iostream>
using namespace std;
int arrinput(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"enter the element for index "<<i<<" ::";
        cin>>arr[i];
    }
}
int arrprint(int arr[],int n){
    cout<<"Your array is :: [ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}
int arrshift(int arr[],int n,int arr2[]){
    for(int i=0;i<n;i++){
        arr2[i+1]=arr[i];
        if(i==n-1){
            arr2[0]=arr[i];
        }
        
    }
}
int arr2print(int arr2[],int n){
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int arr2[]={};
    int arr[]={};
    int n;
    cout<<"Enter the number of elements for the array::";
    cin>>n;
    arrinput(arr,n);
    arrprint(arr,n);
    arrshift(arr,n,arr2);
    arr2print(arr2,n);
    return 0;
}


