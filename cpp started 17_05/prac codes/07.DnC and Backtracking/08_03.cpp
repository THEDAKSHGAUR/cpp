// //Rat in a maze**
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// bool theCase(int x,int y,int Nx, int Ny, int maze[][4],int row, int col,vector<vector<bool>>&visited){
//     if((Nx>=0 && Nx<row)&&
//        (Ny>=0 && Ny<col)&&
//        (maze[Nx][Ny]==1)&&
//        (visited[Nx][Ny]==false)
//     ){
//         return true;
//     }
//     else{
//         false;
//     }
// }
// void theMaze(int maze[][4], int row, int col, int x, int y, string &theWays,vector<vector<bool>>&visited){
//     //base case
//     if(x==row-1 && y==col-1){
//         cout<<theWays<<endl;
//         return;
//     }

//     int newXindex=x-1;
//     int newYindex=y;
//     if(theCase(x,y,newXindex,newYindex,maze,row,col,visited)){
//         visited[newXindex][newYindex]=true;
//         theWays.push_back('U');
//         theMaze(maze,row,col,newXindex,newYindex,theWays,visited);
//         theWays.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x;
//     newYindex=y+1;
//     if(theCase(x,y,newXindex,newYindex,maze,row,col,visited)){
//         visited[newXindex][newYindex]=true;
//         theWays.push_back('R');
//         theMaze(maze,row,col,newXindex,newYindex,theWays,visited);
//         theWays.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x+1;
//     newYindex=y;
//     if(theCase(x,y,newXindex,newYindex,maze,row,col,visited)){
//         visited[newXindex][newYindex]=true;
//         theWays.push_back('D');
//         theMaze(maze,row,col,newXindex,newYindex,theWays,visited);
//         theWays.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
//     newXindex=x;
//     newYindex=y-1;
//     if(theCase(x,y,newXindex,newYindex,maze,row,col,visited)){
//         visited[newXindex][newYindex]=true;
//         theWays.push_back('L');
//         theMaze(maze,row,col,newXindex,newYindex,theWays,visited);
//         theWays.pop_back();
//         visited[newXindex][newYindex]=false;
//     }
// }
// int main(){
//     int row=4;
//     int col=4;
//     int maze[4][4]={
//         {1,1,1,0},
//         {0,1,1,0},
//         {1,1,1,1},
//         {1,1,0,1}
//     };
//     int xIndex=0;
//     int yIndex=0;
//     string theWays="";
//     vector<vector<bool>>visited(row,vector<bool>(col,false));
//     if(maze[xIndex][yIndex]==0){
//         cout<<"case is not possible";
//     }
//     else{
//         visited[xIndex][yIndex]=true;
//         theMaze(maze,row,col,xIndex,yIndex,theWays,visited);
//     }
//     return 0;
// }