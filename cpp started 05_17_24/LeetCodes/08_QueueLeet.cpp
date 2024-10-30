// //Gas station(Leet 134)
// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<queue>
// using namespace std;
// int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//     int deficit=0;
//     int balance=0;
//     int start=0;
//     for(int i=0; i<gas.size(); i++){
//         balance=balance+gas[i]-cost[i];
//         if(balance<0){
//             deficit+=abs(balance);
//             start=i+1;
//             balance=0;
//         }
//     }
//     if(balance-deficit>=0){
//         return start;
//     }
//     else{
//         return -1;
//     }
// }
// int main(){
//     return 0;
// }

// //Sliding window maximum(Leet:239)
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//     vector<int>ans;
//     deque<int>q;
//     for(int i=0;i<k;i++){
//         int element=nums[i];
//         while(!q.empty() && nums[q.back()]<element){
//             q.pop_back();
//         }
//         q.push_back(i);
//     }
//     for(int i=k;i<nums.size();i++){
//         //add the front element in the array as an ans;
//         ans.push_back(nums[q.front()]);
//         //remove the elements from the queue
//         //out of bound
//         if(!q.empty() && i-q.front()>=k){
//             q.pop_front();
//         }
//         //smaller element
//         int element=nums[i];
//         while(!q.empty() && nums[q.back()]<element){
//             q.pop_back();
//         }
//         q.push_back(i);
//     }
//         ans.push_back(nums[q.front()]);
//     return ans;
// }
// };

// //Implement queue using stack(Leet:232)
// class MyQueue {
// public:
//     stack<int>s1,s2;
//     MyQueue() {
//     }
//     void push(int x) {
//         s1.push(x);
//     }
//     int pop() {
//         while(!s1.empty()){
//             int element=s1.top();
//             s1.pop();
//             s2.push(element);
//         }
//         int thepop=s2.top();
//         s2.pop();
//         while(!s2.empty()){
//             int element=s2.top();
//             s2.pop();
//             s1.push(element);
//         }
//         return thepop;
//     }
//     int peek() {
//         while(!s1.empty()){
//             int element=s1.top();
//             s1.pop();
//             s2.push(element);
//         }
//         int thepeek=s2.top();
//         while(!s2.empty()){
//             int element=s2.top();
//             s2.pop();
//             s1.push(element);
//         }
//         return thepeek;
//     }
//     bool empty() {
//         if(s1.empty() && s2.empty())return true;
//         else return false;
//     }
// };

//Implement stack using queue(Leet:225)
// class MyStack {
// public:
//     queue<int>q;
//     MyStack() {
//     }
//     void push(int x) {
//         q.push(x);
//         for(int i=0;i<q.size()-1;i++){
//             int element=q.front();
//             q.pop();
//             q.push(element);
//         }
//     }
//     int pop() {
//         int element=q.front();
//         q.pop();
//         return element;
//     }
//     int top() {
//         return q.front();
//     }
//     bool empty() {
//         if(q.empty())return true;
//         else return false;
//     }
// };