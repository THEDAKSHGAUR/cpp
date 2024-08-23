// //revision of maze problem
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// bool theCase(int maze[][3],int row,int col,int x,int y,int newx,int newy,vector<vector<bool>>&visited){
//     if((newx>=0 && newx<row)&&
//         (newy>=0 && newy<col)&&
//         (maze[newx][newy]==1)&&
//         (visited[newx][newy]==false)){
//             return true;
//     }
//     else{
//         return false;
//     }
// }
// void crossTheRat(int &count,int maze[][3],int row,int col,int x,int y,string &output,vector<vector<bool>>&visited){
//     //base case
//     if(x==row-1 && y==col-1){
//         count++;
//         cout<<output<<endl;
//         return;
//     }
//     //functions to perform and recursive calls
//     int newXindex=x-1;
//     int newYindex=y;
//     if(theCase(maze,row,col,x,y,newXindex,newYindex,visited)){
//         visited[newXindex][newYindex]=true;
//         output.push_back('U');
//         crossTheRat(count,maze,row,col,newXindex,newYindex,output,visited);
//         output.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x;
//     newYindex=y+1;
//     if(theCase(maze,row,col,x,y,newXindex,newYindex,visited)){
//         visited[newXindex][newYindex]=true;
//         output.push_back('R');
//         crossTheRat(count,maze,row,col,newXindex,newYindex,output,visited);
//         output.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x+1;
//     newYindex=y;
//     if(theCase(maze,row,col,x,y,newXindex,newYindex,visited)){
//         visited[newXindex][newYindex]=true;
//         output.push_back('D');
//         crossTheRat(count,maze,row,col,newXindex,newYindex,output,visited);
//         output.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x;
//     newYindex=y-1;
//     if(theCase(maze,row,col,x,y,newXindex,newYindex,visited)){
//         visited[newXindex][newYindex]=true;
//         output.push_back('L');
//         crossTheRat(count,maze,row,col,newXindex,newYindex,output,visited);
//         output.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
// }
// int main(){
//     int maze[3][3]={
//         {1,1,1},
//         {1,1,1},
//         {1,1,0}
//     };
//     int countWays=0;
//     int row=3;
//     int col=3;
//     int xIndex=0;
//     int yIndex=0;
//     string output="";
//     vector<vector<bool>>visited(row,vector<bool>(col,false));
//     if(maze[xIndex][yIndex]==0){
//         cout<<"the answer is not possible.";
//         return 0;
//     }
//     else{
//         visited[xIndex][yIndex]=true;
//         crossTheRat(countWays,maze,row,col,xIndex,yIndex,output,visited);
//         cout<<"No. of ways to reach destination :: "<<countWays;
//     }
//     return 0;
// }

//sum of non adjecent elements
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
int thesum(int arr[],int size, int i){
    if(i>=size-1){
        return 0;
    }
    
    int ans1=arr[i]+thesum(arr,size,i+2);
    int ans2=0+thesum(arr,size,i+1);
    cout<<max(ans1,ans2);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int index=0;
    thesum(arr,size,index);
    return 0;
}