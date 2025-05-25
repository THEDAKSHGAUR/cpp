#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;
////path with minimum effort(leet: 1631)
class Solution {
public:
    // bool isSafe(int newX, int newY, int row, int col){
    //     if(newX>=0 && newY>=0 && newX<row && newY<col){
    //         return true;
    //     }
    //     else return false;
    // }
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>mini;
        int row=heights.size();
        int col=heights[0].size();
        vector<vector<int>>diff(row,vector<int>(col,INT_MAX));
        int destX=row-1;
        int destY=col-1;
        //lets maintain the initial state;
        //set source ka dist 0;
        diff[0][0]=0;
        //push entry for source in the min heap
        mini.push({0,{0,0}});
        //till min heap is empty extract elements from it
        while(!mini.empty()){
            auto frontNode=mini.top();
            mini.pop();
            int currDiff=frontNode.first;
            pair<int,int> currEleIndex=frontNode.second;
            int currX=currEleIndex.first;
            int currY=currEleIndex.second;
            if (currX == destX && currY == destY) return currDiff;
            //now we have to travel newX and newY nodes and then update the currdiff
            int dx[]={-1,0,1,0};
            int dy[]={0,1,0,-1};
            //traverse through these coordinates
            for(int i=0;i<4;i++){
                int newX=currX+dx[i];
                int newY=currY+dy[i];
                if(newX>=0 && newY>=0 && newX<row && newY<col){
                    int maxDiff= max(currDiff,abs(heights[currX][currY]-heights[newX][newY]));
                    if(maxDiff<diff[newX][newY]){
                        diff[newX][newY]=min(diff[newX][newY],maxDiff);
                        mini.push({diff[newX][newY],{newX,newY}});
                    }
                    
                    // if(newX!=destX || newY!=destY){
                    // }
                }
            }
        }
        return diff[destX][destY];
    }
};
int main(){
    return 0;
}