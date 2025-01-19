//merge interval(leet: 53)
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
vector<int>theinsertionFunc(vector<vector<int>>& intervals){
    vector<int>tempans;
    int size=intervals.size();
    for(int i=0;i<size;i++){
        tempans.push_back(intervals[i][0]);
        tempans.push_back(intervals[i][1]);
    }
    return tempans;
}
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>themainANS;
    vector<int>theTempAns;
    vector<int>rem=theinsertionFunc(intervals);
    int i=0;
    int j=1;
    while(j<rem.size()){
        if(rem[i]>=rem[j]){
            for(int x=0;x<i;x++){
                theTempAns.push_back(rem[x]);
            }
            rem.erase(rem.begin()+3);
            i=0;
            j=1;
        }
        else{
            i++;
            j++;
        }
    }
    if(rem.size()!=0){
        for(int i=0;i<rem.size();i++){
            theTempAns.push_back(rem[i]);
        }
    }
    i=0;
    while(i<theTempAns.size()){
        vector<int>temp;
        temp.push_back(theTempAns[i]);
        temp.push_back(theTempAns[i+1]);
        themainANS.push_back(temp);
        i++;
        i++;
    }
    return themainANS;
}
int main(){
    return 0;
}