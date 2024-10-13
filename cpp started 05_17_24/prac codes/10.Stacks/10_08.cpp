////Next smaller element
////Previous smaller element
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int> NextMinValue(int *arr, int size, vector<int> &ans){
//     stack<int>st;
//     st.push(-1);
//     for(int i=size-1;i>=0;i--){
//         while(arr[i]<=st.top()){
//             st.pop();
//         }
//         ans[i]=st.top();//if it will be arr[i] then all the same elements will be inserted in the array
//         st.push(arr[i]);
//     }
//     return ans;
// }
// int main(){
//     int arr[]={8,4,6,2,3};
//     int size=5;
//     vector<int>ans(size);//initialize the vector with size;
//     NextMinValue(arr,size,ans);
//     cout<<"Your ans array is :: ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int> previous(int *arr, int size, vector<int> &ans){
//     stack<int>st;
//     st.push(-1);
//     for(int i=0;i<size;i++){
//         while(arr[i]<=st.top()){
//             st.pop();
//         }
//         ans[i]=st.top();//if it will be arr[i] then all the same elements will be inserted in the array
//         st.push(arr[i]);
//     }
//     return ans;
// }
// int main(){
//     int arr[]={8,4,6,2,3};
//     int size=5;
//     vector<int>ans(size);//initialize the vector with size;
//     NextMinValue(arr,size,ans);
//     cout<<"Your ans array is :: ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
