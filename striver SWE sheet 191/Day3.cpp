#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
#include<map>
using namespace std;
//leet: 118
vector<vector<int>> generate(int numRows) {
        vector<vector<int>>mainAns;
        vector<int>temp;
        if(numRows>=1){
            temp.push_back(1);
            mainAns.push_back(temp);
        }   
        for(int i=2;i<=numRows;i++){
            int prev=0;
            int curr=temp[0];
            vector<int>thetempo;
            for(int j=0;j<i;j++){
                if(j==i-1)curr=0;
                thetempo.push_back(prev+curr);
                prev=curr;
                if(j+1>=temp.size())curr=0;
                else curr=temp[j+1];
            }
            temp=thetempo;
            mainAns.push_back(thetempo);
        }
        return mainAns;
    }
////leet: 31
vector<int> nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return nums;
        int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            /*keep this part in mind that we have to traverse the 
            array from the end in this case to find minMax*/
            int minMax=-1;
            for(int i=nums.size()-1;i>index;i--){
                if(nums[i]>nums[index]){
                    minMax=i;
                    break;
                }
            }
            swap(nums[index],nums[minMax]);
            reverse(nums.begin()+index+1,nums.end());
        }
        return nums;
}
int main(){
    return 0;
}