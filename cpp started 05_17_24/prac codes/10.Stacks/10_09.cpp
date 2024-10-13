//Leet: 84
//bruteforce tech.
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int largestRectangleArea(vector<int>& heights) {
//     int maxVal=0;
//     int size=heights.size();
//     for(int i=0;i<size;i++){
//         int curr=heights[i];
//         int j=i;
//             while(j>0 && heights[j-1]>=curr){
//                 j--;
//             }
//         int leftLen=i-j;
//         int k=i;
//             while(k<size-1 && heights[k+1]>=curr){
//                 k++;
//             }
        
//         int rightLen=k-i;
//         int area= (leftLen+rightLen+1)*curr;
//         maxVal=max(area,maxVal);
//     }
//     return maxVal;
// }
// int main(){
//     return 0;
// }
// //optimal approach
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// using namespace std;
// vector<int> NextMinValue(vector<int>arr){
//     vector<int>ans(arr.size());
//     stack<int>st;
//     st.push(-1);
//     for(int i=arr.size()-1;i>=0;i--){
//         while(st.top()!=-1 && arr[i]<=arr[st.top()]){
//             st.pop();
//         }
//         ans[i]=st.top();//if it will be arr[i] then all the same elements will be inserted in the array
//         st.push(i);
//     }
//     return ans;
// }
// vector<int> previousMinElement(vector<int>array){
//     vector<int>ans(array.size());
//     stack<int>st;
//     st.push(-1);
//     for(int i=0;i<array.size();i++){
//         while(st.top()!=-1 && array[i]<=array[st.top()]){
//             st.pop();
//         }
//         ans[i]=st.top();//if it will be arr[i] then all the same elements will be inserted in the array
//         st.push(i);
//     }
//     return ans;
// }
// int largestRectangleArea(vector<int>& heights){
//     vector<int>previous=previousMinElement(heights);
//     vector<int>next=NextMinValue(heights);
//     for(int i=0;i<next.size();i++){
//         if(next[i]==-1){
//             next[i]=heights.size();
//         }
//     }
//     vector<int>area(next.size());
//     for(int i=0;i<next.size();i++){
//         int m=next[i];
//         int n=previous[i];
//         int width=m-n-1;
//         int length=heights[i];
//         int val=length*width;
//         area[i]=val;
//     }
//     int maxi=INT_MIN;
//     for(int i=0;i<heights.size();i++){
//         maxi=max(area[i],maxi);
//     }
//     return maxi;
// }
// int main(){

// }

