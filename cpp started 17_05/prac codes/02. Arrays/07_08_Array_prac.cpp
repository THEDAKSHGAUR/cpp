////Wave print of a matrix
// #include<iostream>
// #include<vector>
// using namespace std;
// int wavePrint(vector<vector<int>>& arr){
//     int n=arr.size();
//     int m=arr[0].size();
//     for(int i=0; i<m;i++){
//         if(i%2==0){//this mod is very imp on col num
//             for(int j=0;j<n;j++){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//     }
// }
// int main(){
// vector<vector<int>>arr={
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12}
// };
//     wavePrint(arr);
//     return 0;
// }

// // Spiral Matrix(leet: 54)**
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> spiralOrder(vector<vector<int>> &matrix){
//     vector<int>ans;
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int totalNum = m * n;
//     int endingCol = m - 1;
//     int endingRow = n - 1;
//     int startingCol = 0;
//     int startingRow = 0;
//     int count = 0;
//     while (count < totalNum){
//         for (int i = startingCol; i <= endingCol && count<totalNum; i++){
//             ans.push_back(matrix[startingRow][i]);
//             count++;
//         }
//         startingRow++;
//         for (int i = startingRow; i <= endingRow  && count<totalNum; i++){
//             ans.push_back(matrix[i][endingCol]);
//             count++;
//         }
//         endingCol--;
//         for (int i = endingCol; i >= startingCol  && count<totalNum; i--){
//             ans.push_back(matrix[endingRow][i]);
//             count++;
//         }
//         endingRow--;
//         for (int i = endingRow; i >= startingRow  && count<totalNum; i--){
//             ans.push_back(matrix[i][startingCol]);
//             count++;
//         }
//         startingCol++;

        
//     }
//     return ans;
// //     for(int i=0;i<count;i++){
// //     cout<<ans[i]<<" ";
// // }
// }
// int main()
// {
//     vector<vector<int>> matrix = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}};
//     spiralOrder(matrix);
//     return 0;
// }

// //Add 2 nums reperesented by 2 numbers(GFG)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int Sum(int a[],int b[],int aSize, int bSize){
//     int carry=0;
//     string ans;
//     int i=aSize-1;
//     int  j=bSize-1;
//     while(i>=0 && j>=0){
//         int x=a[i]+b[j]+carry;
//         int digit=x%10;
//         carry=x/10;
//         ans.push_back(digit+'0');
//         i--;
//         j--;
//     }
//     while(i>=0){
//         int x=a[i]+carry;
//         int digit=x%10;
//         int carry=x/10;
//         ans.push_back(digit+'0');
//         i--;
//     }
//     while(j>=0){
//         int x=b[j]+carry;
//         int digit=x%10;
//         int carry=x/10;
//         ans.push_back(digit+'0');
//         j--;
//     }
    
//     if(carry!=0){
//        ans.push_back(carry+'0');
//     }
//     if(ans[ans.size()-1]=='0'){//because it is a string we have to use '';
//         ans.pop_back();
//     }
//     reverse(ans.begin(),ans.end());
    
//     cout<<ans;
// } 
// int main(){
//     int a[]={0,1,2,3,4};
//     int b[]={0,3,4,1,2};
//     int aSize=5;
//     int bSize=5;
//     Sum(a,b,aSize,bSize);
//     return 0;
// }

// //factorial of large number(GFG)****Very Very imp q
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int LargeNumFactorial(int N){
//     vector<int>ans;
//     int n=ans.size();
//     ans.push_back(1);
//     for(int i=2;i<=N;i++){
//         int carry=0;
//         for(int j=0;j<ans.size();j++){
//             int x=ans[j]*i+carry;
//             ans[j]=x%10;
//             carry=x/10;
//         }
//         if(carry){
//             ans.push_back(carry);
//         }
//     }
//     reverse(ans.begin(),ans.end());
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i];
//     }
// }
// int main(){
//     int N=12;
//     LargeNumFactorial(N);
//     return 0;
// }

////Remove duplicated from a sorted array(Leet:26)//the code was asking to change the given array and output the distinct elements count
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// // int removeDuplicates(vector<int>& nums) {//very bad code to see with high TC
// //     vector<int>ans;
// //     int n=nums.size();
// //     int breaking=1;
// //     int i=0;
// //     int j=i+1;
// //     while(i<n){
// //         while(j<=n){

// //             if(nums[i]==nums[j]){
// //                 j++;
// //             }
// //             else if(nums[i]!=nums[j]){
// //                 ans.push_back(nums[i]);
// //                 i=j;
// //                 j=i+1;
// //             }
// //         }
// //     }
// //     sort(ans.begin(),ans.end());
// //     cout<<ans.size()<<", "<<"nums = [";
// //     for(int i=0;i<ans.size();i++){
// //         if(i==ans.size()-1){
// //             cout<<ans[i];
// //         }
// //         else{
// //             cout<<ans[i]<<",";
// //         }
        
// //     }
// //     cout<<"]";
// // }

// int removeDuplicates(vector<int>& nums) {
//     //two pointer approach
//     int i=0,j=1;
//     int n=nums.size();
//     while(j<n){
//         if(nums[i]==nums[j]){
//             j++;
//         }
//         else{
//             i++;
//             nums[i]=nums[j];
//             j++;
//         }
//     }
//     cout<<i+1;
// }
// int main(){
//     vector<int>nums={0,0,0,1,1,1,2,2,2,3,3,3,4,4,4,5,5,5};
//     removeDuplicates(nums);
//     return 0;
// }

// //Maximum average subArray I(Leet:643)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// double findMaxAverage(vector<int>& nums, int k) {
//     int i=0,j=k-1;
//     int sum=0;
//     for(int y=i;y<=j;y++){
//         sum+=nums[y];
//     }
//     int maxSum=sum;
//     j++;
//     while(j<nums.size()){
//         sum-=nums[i++];
//         sum+=nums[j++];
//         maxSum=max(maxSum,sum);//this max is important
//     }
//     double avg= maxSum/double(k);
//     cout<<avg;
// }
// int main(){
//     vector<int>nums={1,12,-5,-6,50,3};
//     int k=4;
//     findMaxAverage(nums,k);
//     return 0;
// }