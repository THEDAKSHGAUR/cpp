// //Valid parentheses(Leet: 20)
// bool isValid(string s) {
//     stack<char>st;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if(ch=='(' || ch=='[' || ch=='{'){
//             st.push(ch);
//         }
//         else{
//             if(!st.empty()){
//                  if(ch==')' && st.top()=='('){
//                 st.pop();
//                 }
//                 else if(ch=='}' && st.top()=='{'){
//                     st.pop();
//                 }
//                 else if(ch==']' && st.top()=='['){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }   
//         }
//     } 
//     if(st.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

////Min stack [class implementation](Leet: 155)
// class MinStack {
// public:
//     vector<pair<int,int>>st;
//     MinStack() {
//     }
//     void push(int val) {
//         if(st.empty()){
//             pair<int,int>p;
//             p.first=val;
//             p.second=val;
//             st.push_back(p);
//         }
//         else{
//             pair<int,int>p;
//             p.first=val;
//             int puranaNumber=st.back().second;
//             p.second=min(val,puranaNumber);
//             st.push_back(p);
//         }
//     }
//     void pop() {
//         if(st.size()!=0)
//         st.pop_back();
//     }
//     int top() {
//         pair<int,int>rightmost=st.back();
//         return rightmost.first;
//     }
//     int getMin() {
//         pair<int,int>rightmost=st.back();
//         return rightmost.second;
//     }
// };

////Largest rectangle in histogram(Leet: 84)
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