// //Implement 2 stacks in an array
// //Valid parentheses(Leet:20)
// //Remove redundant brackets

// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;
//     stack(int size){
//         arr=new int[size];
//         this->size=size;
//         top1=-1;
//         top2=size;
//     }
//     void push1(int data){
//         if(top2-top1==1){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;
//         }
//     }
//     void push2(int data){
//         if(top2-top1==1){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2]=data;
//         }
//     }
//     void pop1(){
//         if(top1==-1){
//             cout<<"NO element left, underflow"<<endl;
//         }
//         else{
//             arr[top1]=0;
//             top1--;
//         }
//     }
//     void pop2(){
//         if(top2==size){
//             cout<<"NO element left, underflow"<<endl;
//         }
//         else{
//             arr[top2]=0;
//             top2--;
//         }
//     }
//     void printStack(){
//         cout<<"top1 : "<<top1<<endl;
//         cout<<"top2 : "<<top2<<endl;
//         cout<<"Your stack is :: ";
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
// }
// };
// int main(){
//     stack st(6);
//     st.printStack();
//     st.push1(1);
//     st.push2(2);
//     st.push1(3);
//     st.push2(4);
//     st.push1(5);
//     st.push2(6);
//     st.printStack();
//     st.push1(90);
//     st.pop2();
//     st.printStack();
//     return 0;
// }

//Leet:20
// #include<iostream>
// #include<string.h>
// #include<stack>
// using namespace std;
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
// int main(){
//     string para="{()[]}";
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// #include<stack>
// using namespace std;
// bool redundentBrackets(string s){
//     stack<char>st;
//     if(s.length()==0){
//         return false;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if(ch=='(' || ch=='+' || ch=='*' || ch=='/' || ch=='-'){
//             st.push(ch);
//         }
//         else if(ch==')'){
//             // if(st.top()=='*' || st.top()=='+' || st.top()=='-' || st.top()=='/'){
//             //     st.pop()
//             // }
//             if(ch==')' && st.top()=='('){
//                 return true;
//             }
//             else{
//                 st.push(ch);
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     string s="((a+b)*(b-c)/(a-a))";
//     cout<<(redundentBrackets(s)?"There is redundancy present.":"No redundancy");
//     return 0;
// }