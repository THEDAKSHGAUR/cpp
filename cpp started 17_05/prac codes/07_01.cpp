// //Three consecutive odds(leet:1550)
// #include<iostream>
// #include<vector>
// using namespace std;
// bool threeConsecutiveOdds(vector<int>& arr) {
//     int n=arr.size();
//     int oddCount=0;
//     for(int i=0;i<n;i++){
//         if(i+2<n && arr[i] % 2!=0){//the main condition is i+2<n
//             if(arr[i+1]% 2!=0){
//                 if(arr[i+2]%2!=0){
//                     oddCount++;
//                 }
//             }
//         }
//     }
//     if(oddCount==1){
//         cout<<"true";
//         return true;
//     }
//     else{
//         cout<<"false";
//         return false;
//     }
// }
// int main(){
//     vector<int>arr={1,2,3,1,5,6,7,1};
//     threeConsecutiveOdds(arr);
//     return 0;
// }

//DUTCH0NATIONAL-FLAG PROBLEM: sort colors(leet:75){practice}
//The main condition which made the code incorrect was the while(i<=right)

//Rotate Array(leet:189)
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int newindex=(i+k)%n;
        ans[newindex]=nums[i];
    }
    nums=ans;
}
void printVector(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int k=2;
    rotate(nums,k);
    printVector(nums);
    return 0;
}