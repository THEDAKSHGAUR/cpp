// // USING FUNCTIONS TO BE USED IN THE CODES
// #include <iostream>
// using namespace std;
// // PRINT FUNCTION
// void printarray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }
// // LINEAR SEARCH FUNCTION
// void linearsearch(int array[], int size, int target, int flag)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (i == target)
//         {
//             flag = 1;
//         }
//         else
//         {
//             flag = 0;
//         }
//     }
//     if (flag == 1)
//     {
//         cout << "Target found";
//     }
//     else
//     {
//         cout << "Target not found";
//     }
// }
// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int target=10;
//     int flag= 0;
//     printarray(array, size);
//     linearsearch(array,size,target,flag);
// }

//FUNCTION FOR COUNTING 0s AND 1s
#include<iostream>
using namespace std;
void count(int array[],int size,int count1=0,int count0=0){
    for(int i=0;i<size;i++){
        if(array[i]==0){
            count0++;
        }
        else if (array[i]==1){
            count1++;
        }
    }
    cout<<"Count0 = "<<count0<<endl;
    cout<<"Count1 = "<<count1;
}
int main(){
    int array[5]={1,1,1,1,1};
    int size=5;
    count(array,size);

}