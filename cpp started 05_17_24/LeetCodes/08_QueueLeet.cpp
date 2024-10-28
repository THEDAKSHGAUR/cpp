//Gas station(Leet 134)
#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int deficit=0;
    int balance=0;
    int start=0;
    for(int i=0; i<gas.size(); i++){
        balance=balance+gas[i]-cost[i];
        if(balance<0){
            deficit+=abs(balance);
            start=i+1;
            balance=0;
        }
    }
    if(balance-deficit>=0){
        return start;
    }
    else{
        return -1;
    }
}
int main(){
    return 0;
}

//Sliding window maximum(Leet:239)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>ans;
    deque<int>q;
    for(int i=0;i<k;i++){
        int element=nums[i];
        while(!q.empty() && nums[q.back()]<element){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i=k;i<nums.size();i++){
        //add the front element in the array as an ans;
        ans.push_back(nums[q.front()]);
        //remove the elements from the queue
        //out of bound
        if(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }
        //smaller element
        int element=nums[i];
        while(!q.empty() && nums[q.back()]<element){
            q.pop_back();
        }
        q.push_back(i);
    }
        ans.push_back(nums[q.front()]);
    return ans;
}
};