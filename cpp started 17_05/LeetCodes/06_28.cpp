//DUTCH0NATIONAL-FLAG PROBLEM: sort colors(leet:75)
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortColors(vector<int>& nums){
//     int left=0;
//     int n=nums.size();
//     int right=n-1;
//     int index=0;
//     while(index<=right){
//         if(nums[index]==0){
//             swap(nums[index],nums[left]);
//             index++;
//             left++;
//         }
//         else if(nums[index]==2){
//             swap(nums[index],nums[right]);
//             right--;
//         }
//         else{
//             index++;
//         }
//     }
// }
// void printVector(vector<int>& nums){
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
    // vector<int>nums={0,2,1,2,1,1,2,0,0,0,0};
    // sortColors(nums);
    // printVector(nums);
    // return 0;
// }

//Rotate Array(leet:189)
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotate(vector<int>& nums, int k) {
//     int n=nums.size();
//     vector<int>ans(n);//initialising size is important
//     for(int i=0;i<n;i++){
//         int newindex=(i+k)%n;//this formula is important
//         ans[newindex]=nums[i];
//     }
//     nums=ans;
// }
// void printVector(vector<int>& nums){
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>nums={1,2,3,4,5};
//     int k=2;
//     rotate(nums,k);
//     printVector(nums);
//     return 0;
// }