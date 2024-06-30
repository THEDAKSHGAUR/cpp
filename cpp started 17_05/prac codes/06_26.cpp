// VECTOR STL
// Inserting elements and poping them
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  // Modify the vector by reference to avoid copying
//  void insertelement(vector<int>& arr) {
//      int size;
//      cout << "Enter the number of elements you want to insert: ";
//      cin >> size;
//      for (int i = 0; i < size; i++) {
//          int a;
//          cout << "Enter the value of index " << i << ": ";
//          cin >> a;
//          arr.push_back(a);
//      }
//  }
//  // Print the vector by reference to avoid copying
//  void printarray(const vector<int>& arr) {
//      int size = arr.size();
//      cout << "Your array is: ";
//      for (int i = 0; i < size; i++) {
//          cout << arr[i] << " ";
//      }
//      cout << endl;
//  }
//  void printarray2(const vector<int>& arr){
//      cout<<"Elements using auto keyword:: ";
//      for(auto it:arr){
//          cout<<it<<" ";
//      }
//  }
//  int main() {
//      vector<int> arr;
//      insertelement(arr);
//      printarray(arr);
//      arr.pop_back();
//      printarray(arr);
//      //making a dynamic size of the array
//      vector<int>arr2={1,2,3,4,5,6};
//      printarray(arr2);
//      arr2.clear();
//      printarray(arr2);
//      arr2.push_back(1);
//      printarray(arr2);
//      printarray2(arr);
//      return 0;
//  }


// 2-D ARRAYS
// #include<iostream>
// using namespace std;
////PRINTING OF AN ARRAY
// row wise
//  void print2dArray(int arr[][2],int row, int col){
//      for(int i=0;i<row;i++){
//          for(int j=0;j<col;j++){
//              cout<<arr[i][j]<<" ";
//          }
//          cout<<endl;
//      }
//  }
// col wise
//  void print2dArraycolwise(int arr[][2],int row,int col){
//      for(int i=0;i<col;i++){
//          for(int j=0;j<row;j++){
//              cout<<arr[j][i]<<" ";
//          }
//          cout<<endl;
//      }
//  }

// int main(){
////INITIALISING A 2-D ARRAY
// int arr[2][3]={
//     {1,2,3},
//     {2,3,4}
// };
// we have to atleast enter the number of col.s to initialize an array.

////PRINTING OF AN ARRAY
// row wise
//  int arr[3][2]={
//      {1,2},
//      {2,3},
//      {3,4}
//  };
//  int row=3,col=2;
//  print2dArray(arr,row,col);
//  print2dArraycolwise(arr,row,col);
// return 0;
//}

// TAKING INPUT IN A 2-D ARRAY
//  #include<iostream>
//  using namespace std;
//  //input function
//  void ArrayInput(int arr[][3],int row,int col){
//      // cout<<"enter the number of rows:: ";
//      // cin>>row;
//      for(int i=0;i<row;i++){
//          for(int j=0;j<col;j++){
//              cout<<"enter the value for index "<<i<<","<<j<<" ::";
//              cin>>arr[i][j];
//              cout<<endl;
//          }

//     }
// }
// //printing function
// void printArray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][3]={};
//     int row=3;
//     int col=3;
//     ArrayInput(arr,row,col);
//     printArray(arr,row,col);
//     return 0;
// }

// // SEARCHING ELEMENT
// #include <iostream>
// using namespace std;
// void TheSearch(int arr[][3], int row, int col, int target)
// {
//     int T = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 T++;
//             }
//         }
//     }
//     if (T > 0)
//     {
//         cout << "The target is found.";
//     }
//     else
//     {
//         cout << "Not found";
//     }
// }
// void ArrayInput(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "enter the value for index " << i << "," << j << " ::";
//             cin >> arr[i][j];
//             cout << endl;
//         }
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     int target;
//     ArrayInput(arr, row, col);
//     cout << "What is your target :: ";
//     cin >> target;
//     TheSearch(arr, row, col, target);
//     return 0;
// }

// /FINDING MAXIMUM NUMBER IN A 2-D ARRAY
// #include<iostream>
// #include<limits.h>
// #include <climits>
// using namespace std;
// void ArrayInput(int arr[][3], int row, int col) {
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             cout << "Enter the value for index " << i << "," << j << " ::";
//             cin >> arr[i][j];
//             cout << endl;
//         }
//     }
// }
// void maxelement(int arr[3][3], int row, int col) {
//     int max_value = INT_MIN;
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             if(arr[i][j] > max_value) {
//                 max_value = arr[i][j];
//             }
//         }
//     }
//     cout << "Max value is:: " << max_value << endl;
// }
// int main() {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     ArrayInput(arr, row, col);
//     maxelement(arr, row, col);
//     return 0;
// }

////ROWWISE/COLWISE SUM
// #include<iostream>
// using namespace std;
// void inputArray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"enter the value for index "<<i<<","<<j<<" ::";
//             cin>>arr[i][j];
//             cout<<endl;
//         }
//     }
// }
//ROWSUM
// void rowSum(int arr[][3],int row,int col){
//     cout<<"ROWSUM IS "<<endl;
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=arr[i][j]+sum;
//         }
//         cout<<"Sum for "<<i<<" row ::"<<sum<<endl;
//     }
// }
//COLSUM
// void colSum(int arr[][3],int row,int col){
//     cout<<"COLSUM IS "<<endl;
//     for(int i=0;i<col;i++){
//         int sum=0;
//         for(int j=0;j<row;j++){
//             sum=arr[j][i]+sum;
//         }
//         cout<<"Sum for "<<i<<" col ::"<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][3]={};
//     int row=3;
//     int col=3;
//     inputArray(arr,row,col);
//     rowSum(arr,row,col);
//     colSum(arr,row,col);
//     return 0;
// }

////DIAGONAL SUM
// #include<iostream>
// using namespace std;
// void inputArray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"enter the value for index "<<i<<","<<j<<" ::";
//             cin>>arr[i][j];
//             cout<<endl;
//         }
//     }
// }
// void diagonalSum(int arr[][3],int row,int col,int &sum){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==j){
//                 sum=arr[i][j]+sum;
//             }
//         }
//     }
//     cout<<"Sum of all diagonal elements :: "<<sum;
// }
// int main(){
//     int sum=0;
//     int arr[3][3];//define the array properly
//     int row=3;
//     int col=3;
//     inputArray(arr,row,col);
//     diagonalSum(arr,row,col,sum);
//     return 0;
// }

////TRANSPOSE OF A MATRIX
// #include<iostream>
// using namespace std;
// void inputArray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"enter the value for index "<<i<<","<<j<<" ::";
//             cin>>arr[i][j];
//             cout<<endl;
//         }
//     }
// }
// void TransposeArray(int arr2[][3],int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             swap(arr[i][j],arr2[j][i]);//dont use =/ use swap.
//         }
//     }
// }
// void printArray(int arr[][3],int row,int col){
//     cout<<"The transposed array is -"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
//     int arr2[3][3]={};
//     int row=3;
//     int col=3;
//     inputArray(arr,row,col);
//     TransposeArray(arr2,arr,row,col);
//     printArray(arr2,row,col);
//     return 0;
// }// IN THIS WE CAN ALSO GO WITH 2 TRIANGLE APPROACH IN WHICH WE WILL NOT SHIFT THE DIAGONALS.
