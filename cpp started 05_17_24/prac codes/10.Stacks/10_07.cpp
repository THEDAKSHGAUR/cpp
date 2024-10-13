////Implementation of min stack

// #include<iostream>
// #include<vector>
// #include<stack>
// #include <utility>
// using namespace std;
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
// int main(){
//     return 0;
// }