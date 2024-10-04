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
//Make a new vector in which you will be storing the value of the nums array and do initialize the 
//index of newarr with (i+k)%n. Mention size of new array.

//Row With Maximum Ones(leet:2643)
//Make 3 variables and then increment them, one variable should initialised in for loop.

////Two sum(leet:01)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int>& nums, int target) {
//     int n=nums.size();
//     vector<int>ans(2);
//     int x;
//     int y;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){//j is initialised by i+1 because nums[i] and nums[j] will become equal
//             int count=0;
//             if(nums[i]+nums[j]==target){
//                 count++;
//             }
//             if(count==1){
//                 x=i;
//                 y=j;
//             }
//         }     
//     }
//     ans.push_back(x);
//     ans.push_back(y);
//     return ans;
// }
// int main(){
//     return 0;
// }

//Find pivot index(leet:724)
// #include<iostream>
// #include<vector>
// using namespace std;
// int pivotIndex(vector<int>& nums) {
//     int n=nums.size();
//     int pivot=0;
//     int left=0;
//     int right=n-1;
//     for(int i=0;i<n;i++){
//         int leftsum=0;
//         int rightsum=0;
//         for(int j=0;j<i;j++){
//             leftsum=leftsum+nums[j];
//         }
//         for(int k=n-1;k>i;k--){
//             rightsum=rightsum+nums[k];
//         }
//         if(rightsum==leftsum){
//     // //         if(i==0){
//     // //             pivot=-1;
//     // //         }
//     // //         else{
//     // //             pivot=i;     //this whole part is taking a high complexity
//     // //         }                  to overcome this we should you only return i
//     // //         break;             in the if statement and return -1 outside it.
//     // //     }
//     // // }
//     // // if(pivot==0){
//     // //     pivot=-1;
//     // // }
//     // // else if(pivot==-1){
//     // //     pivot=0;
//     // // }
//     // // return pivot;
// }
// int main(){
//     return 0;
// }

////Re-arrange array element by sign(leet:2149)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> rearrangeArray(vector<int>& nums) {
//     int n=nums.size();
//     int m=n/2;
//     vector<int>ans(n);
//     vector<int>negative(m);
//     vector<int>positive(m);
//     int negidx=0;
//     int posidx=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]>0){
//             positive[posidx]=nums[i];
//             posidx++;
//         }
//         else{
//             negative[negidx]=nums[i];
//             negidx++;
//         }
//     }
//     negidx=0;
//     posidx=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//         ans[i]=positive[posidx++];
//         }
//         else{
//             ans[i]=negative[negidx++];
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<positive[i]<<" ";
//     // }
//     // cout<<endl;
//     // for(int i=0;i<n;i++){
//     //     cout<<negative[i]<<" ";
//     // }
//     // cout<<endl;
//     // for(int i=0;i<n;i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     return ans;
// }
// int main(){
//     vector<int>nums={3,1,-2,-5,2,-4};
//     rearrangeArray(nums);
//     return 0;
// }

////Find the Duplicate Number(leet:287)
// #include<iostream>
// #include<vector>
// #include<algorithm>//we used sorting here
// using namespace std;
// int findDuplicate(vector<int>& nums) {
//     sort(nums.begin(),nums.end());

//     for(int i=0;i<nums.size()-1;i++){
//         if(nums[i]==nums[i+1]){
//             return nums[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     return 0;
// }
