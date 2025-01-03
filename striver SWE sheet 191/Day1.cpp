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
// //leet:73
// void setZeroes(vector<vector<int>>& matrix) {
//         vector<int>rVector;
//         vector<int>cVector;
//         int row=matrix.size();
//         int col=matrix[0].size();
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 int element=matrix[i][j];
//                 if(element==0){
//                     rVector.push_back(i);
//                     cVector.push_back(j);
//                 }
//             }
//         }
//         for(int i=0;i<rVector.size();i++){
//             for(int j=0;j<col;j++){
//                 matrix[rVector[i]][j]=0;
//             }
//         }
//         for(int i=0;i<cVector.size();i++){
//             for(int j=0;j<row;j++){
//                 matrix[j][cVector[i]]=0;
//             }
//         }
//         return;
//     }
////optimal approach to solve this q
void setZeroes(vector<vector<int>>& matrix){
    int rowSize=matrix.size();
    int colSize=matrix[0].size();
    for(int i=1;i<rowSize;i++){
        for(int j=1;j<colSize;j++){
            int element=matrix[i][j];
            if(element==0){
                matrix[0][j]=-1;
                matrix[i][0]=-1;
            }
        }
    }
    for(int j=1;j<colSize;j++){
        if(matrix[0][j]==0 || matrix[0][j]==-1){
            for(int i=1;i<rowSize;i++){
                matrix[i][j]=0;
            }
        }
    }
    for(int i=1;i<rowSize;i++){
        if(matrix[i][0]==0 || matrix[i][0]==-1){
            for(int j=1;j<colSize;j++){
                matrix[i][j]=0;
            }
        }
    }
    //let the row 0 be 0
    if(matrix[0][0]==0){
        for(int jcol=1;jcol<colSize;jcol++){
            matrix[0][jcol]=0;
        }
    }
    for(int j=1;j<colSize;j++){
        if(matrix[0][j]==-1)matrix[0][j]=0;
        if(matrix[0][j]==0){
            for(int jcol=1;jcol<colSize;jcol++){
                matrix[0][jcol]=0;
            }
            break;
        }
    }
    //let the col 0 be 0
    if(matrix[0][0]==0){
        for(int i=1;i<rowSize;i++){
            matrix[i][0]=0;
        }
        return;
    }
    for(int i=1;i<rowSize;i++){
        if(matrix[i][0]==-1)matrix[i][0]=0;
        if(matrix[i][0]==0){
            for(int icol=1;icol<rowSize;icol++)matrix[icol][0]=0;
        }
    }
}
int main(){
    return 0;
}