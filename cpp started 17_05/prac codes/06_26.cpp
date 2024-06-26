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

// //FINDING MAXIMUM NUMBER IN A 2-D ARRAY
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

//ROW WISE SUM
#include<iostream>
using namespace std;
void inputArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter the value for index "<<i<<","<<j<<" ::";
            cin>>arr[i][j];
            cout<<endl;
        }
    }
}
void rowSum(int arr[][3],int row,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=arr[i][j]+sum;
        }
        cout<<"Sum for "<<i<<"th row ::"<<sum<<endl;
    }
}
int main(){
    int arr[3][3]={};
    int row=3;
    int col=3;
    inputArray(arr,row,col);
    rowSum(arr,row,col);
    return 0;
}
