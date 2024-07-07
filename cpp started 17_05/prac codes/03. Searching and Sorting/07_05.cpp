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



//searching and sorting
//Capacity to Ship Packages within D Days(Leet:1011)
#include<iostream>//it is a good q to be done, work on it after some time
#include<vector>
#include<limits.h>
using namespace std;
int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();
    int max_num=INT_MIN;
    for(int i=0;i<n;i++){
        if(weights[i]>max_num){
            max_num=weights[i];
        }
    }
    cout<<max_num<<endl;
    int sumTillmax=0;
    for(int i=0;i<max_num;i++){
        sumTillmax=sumTillmax+weights[i];
    }
    cout<<sumTillmax;
}
int main(){
    vector<int>weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    shipWithinDays(weights,days);
    return 0;
}

