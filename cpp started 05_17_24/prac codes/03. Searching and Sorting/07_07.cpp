////Divide the given num by num 2 and give the output using binary search
// #include<iostream>
// #include<vector>
// using namespace std;
// int theQuotient(int dividend,int divisor){
//     int s=0;
//     int e=dividend;
//     int ans=-1; 
//     while(s<=e){
//         int arr[mid]=s+(e-s)/2;
//         if(arr[mid]*divisor==dividend){
//             ans=arr[mid];
//             break;
//         }
//         if(arr[mid]*divisor<dividend){ 
//             ans=arr[mid];
//             s=arr[mid]+1;
//         }
//         else{
//             e=arr[mid]-1;
//         }

//     }
//     return ans;
// }
// int main(){
//     int dividend=6;
//     int divisor=-6;
//     int n=theQuotient(abs(dividend),abs(divisor));
//     if((dividend>0 && divisor>0)||(dividend<0 && divisor<0)){
//         cout<<n;
//     }
//     else if(divisor==0 || dividend==0){
//         cout<<0;
//     }
//     else{
//         cout<<0-n;
//     }
// }

////creating the above code till .01 precesion
// #include<iostream>
// #include<vector>
// using namespace std;
// float theQuotient(int dividend,int divisor){
//     float s=0;
//     float e=dividend;
//     float ans=-1; 
//     while(s<=e){
//         float arr[mid]=s+(e-s)/2;
//         if(arr[mid]*divisor==dividend){
//             ans=arr[mid];
//             break;
//         }
//         if(arr[mid]*divisor<dividend){ 
//             ans=arr[mid];
//             s=arr[mid]+0.00001;
//         }
//         else{
//             e=arr[mid]-0.00001;
//         }

//     }
//     return ans;
// }
// int main(){
//     int dividend=26;
//     int divisor=5;
//     float n=theQuotient(abs(dividend),abs(divisor));
//     if((dividend>0 && divisor>0)||(dividend<0 && divisor<0)){
//         cout<<n;
//     }
//     else if(divisor==0 || dividend==0){
//         cout<<0;
//     }
//     else{
//         cout<<0-n;
//     }
// }

////Finding a target in nearly sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int findNearlySortedArray(vector<int>arr,int target){
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int arr[mid]=s+(e-s)/2;
//         if(arr[arr[mid]+1]==target){
//             cout<<arr[mid]+1;
//             break;
//         }
//         else if(arr[arr[mid]]==target){
//             cout<<arr[mid];
//             break;
//         }
//         else if(arr[arr[mid]+1]==target){
//             cout<<arr[mid]-1;
//             break;
//         }
//         else if(arr[arr[mid]]<target){
//             s=arr[mid]+2;
//         }
//         else{
//             e=arr[mid]-2;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>arr={20,10,30,50,40,70,60};
//     int target=20;
//     findNearlySortedArray(arr,target);
//     return 0;
// }

// //Find the odd occurance element
// #include<iostream>
// #include<vector>
// using namespace std;
// int oddOccurance(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(s==e){
//             cout<<arr[mid];
//             break;
//         }
//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             cout<<arr[mid];
//             break;
//         }
//         if(mid%2==0){
//             if(/*mid>=0 &&*/ arr[mid-1]==arr[mid]){
//                 e=mid-2;
//             }
//             else{
//                 s=mid+2;
//             }
//         }
//         else /*if(mid%2!=0)*/{
//             if(arr[mid-1]==arr[mid]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={10,10,2,2,3,3,5,5,6,6,7,7,10};
//     int n=13;
//     oddOccurance(arr,n);
//     return 0;
// }

//**Sorting 
// //Bubble sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
// }
// int main(){
    // int arr[]={5,4,3,2,-1};
    // int n=5;
    // bubbleSort(arr,n);
    // return 0;
// }

////Selection Sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 swap(arr[j],arr[i]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={45,23,531,21,3,1,2324};
//     int n=7;
//     selectionSort(arr,n);
//     return 0;
// }

// //Insertion sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int insertionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             swap(arr[j],arr[j+1]);
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={5,4,6,3,2,6,9,4,2,5,6,3,2};
//     int n=12;
//     insertionSort(arr,n);
//     return 0;
// }

// //Custom comparator 
// //sort function to perform sorting using stl
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// //for 1d array
// // bool mycomp(int &a, int &b){
// //     // return a<b;//for increasing order
// //     // return a>b;//for decreasing order 

// // }
// // int customComparator(vector<int>& arr){
// //     int n=arr.size();
// //     sort(arr.begin(),arr.end(),mycomp);
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// //For 2D array
// //lets make a custom comparator to work at this

// bool mycomp(vector<int >&a, vector<int>&b){
//     return a[0]>b[0];//for decrasing the 0th index
//     return a[1]>b[1];//for decrasing the 1th index
// }

// int thefunc(vector<vector<int>>& array){
//     sort(array.begin(),array.end(),mycomp);

//     for(int i=0;i<array.size();i++){
//         for(int j=0;j<array[i].size();j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<int>arr={3,34,52,2,4,52,3123,3,12};
//     vector<vector<int>>array={
//         {1,2},
//         {1,5},
//         {4,3},
//         {2,5}
//     };
//     thefunc(array);
//     // customComparator(arr);
//     return 0;
// }
