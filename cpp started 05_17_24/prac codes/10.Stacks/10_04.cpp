// // //reversifing the ordered data
// // //Middle element 
// // //Insert at the bottom
// // //reverse the stack(put in the bottom)
// // //Insert an element in the stack while sorted
// // //sort the stack
// #include<iostream>
// #include<string.h>
// #include<stack>
// using namespace std;
// int main(){
//     string name="dakshgaur";
//     stack<char>st;
//     for(int i=0;i<name.length();i++){
//         st.push(name[i]);
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     cout<<endl;
//     return 0;
// } 
// //Finding middle element of the stack
// #include<iostream>
// #include<string.h>
// #include<stack>
// using namespace std;
// void findMiddleDeletingElements(stack<int>st,int size){
//     if(size%2==0){
//         for(int i=1;i<size/2;i++){
//             st.pop();
//         }
//         cout<<"The middle element is :: "<<st.top()<<endl;
//     }
//     else{
//         for(int i=1;i<(size/2)+1;i++){
//             st.pop();
//         }
//         cout<<"The middle element is :: "<<st.top()<<endl;
//     }
// }
// void findMiddle(stack<int>&st,int &pos,int &ans){
//     //base case
//     if(pos==1){
//         ans= st.top();
//         return;
//     }
//     //single case to be solved
//     pos--;
//     int temp=st.top();
//     st.pop();
//     //recursion
//     findMiddle(st,pos,ans);
//     //Backtrack
//     st.push(temp);
// }
// int solve(stack<int>&st){
//     int size=st.size();
//     if(st.empty()){
//         return -1;
//     }
//     else{
//         int pos=0;
//         //odd
//         if(size%2!=0){
//             pos=size/2 + 1;
//         }
//         else{
//             pos=size/2;
//         }
//         int ans=-1;
//         findMiddle(st,pos,ans);
//         return ans;  
//     }
// } 
// int main(){
    // stack<int>st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // int ans=solve(st);
//     cout<<"Middle element is :: "<<ans<<endl;
//     return 0;
// }
// //Insert data in the starting
// #include<iostream>
// #include<stack>
// using namespace std;
// void solve(stack<int>&st,int &pos,int data){
//     if(pos==0){
//         st.push(data);
//         return;
//     }
//     pos--;
//     int temp=st.top();
//     st.pop();
//     solve(st,pos,data);
//     st.push(temp);
// }
// void printStack(stack<int>st){
//     cout<<"Your stack but reversed :: ";
//     while(st.size()!=0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
//     return;
// }
// int main(){
//     int data=90;
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int pos=st.size();
//     printStack(st);
//     solve(st,pos,data);
//     //print the stack here
//     printStack(st);
//     return 0;
// }
