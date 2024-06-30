// #include<iostream>//whenever the vector is empty its size is zero
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr;
//     int size = arr.size();
//     cout<<size;
//     return 0;
// }

// //2-D VECTOR
// //initialising and printing a vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<vector<int> >arr,int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<vector<int> >arr(5,vector<int>(10,0));
//     int size= arr.size();
//     cout<<size<<endl;
//     printVector(arr,size);
//     return 0;
// }

// //taking input for a 2-d vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void inputVector(vector<vector<int> >&arr,int size){//use of reference variable is very important
//     cout<<"ENTER THE VALUES"<<endl;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<"enter the value for index "<<i<<","<<j<<" ::";
//             cin>>arr[i][j];
//             cout<<endl;
//         }
//     }
// }
// void printVector(vector<vector<int> >arr,int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<vector<int> >arr(3,vector<int>(3));
//     int size=arr.size();
//     inputVector(arr,size);
//     printVector(arr,size);
//     return 0;
// }

////Jagged array:: in this we have a vector in which different rows have diff no. of items
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int> >brr;

//     vector<int>v1(5,1);
//     vector<int>v2(7,2);
//     vector<int>v3(6,3);
//     vector<int>v4(9,4);

//     brr.push_back(v1);
//     brr.push_back(v2);
//     brr.push_back(v3);
//     brr.push_back(v4);

//     for(int i=0;i<brr.size();i++){
//         for(int j=0;j<brr[i].size();j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// PRACTICE TIME
// // In this question we have a defined array in which we have to sort the elements by printing -ve elements
// // in the left and +ve in the right side.
// #include <iostream>
// using namespace std;
// void sortArray(int arr[],int size){
//     int j=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]<0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
// }
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {-1,-2,-3,-4,-5,-6,-7,0};
//     int size = sizeof(arr) / sizeof(int);
//     sortArray(arr,size);
//     printArray(arr,size);
//     return 0;
// }

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
//     vector<int>ans(n);
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

