//**DnC**

// //Merge Sort
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void merge(int array[],int s,int e){
//     int mid=(s+e)/2;

//     int lenLeft=mid-s+1;
//     int lenRight=e-mid;

//     int *left= new int[lenLeft];
//     int *right= new int[lenRight];

//     int k=s;
//     for(int i=0;i<lenLeft;i++){
//         left[i]=array[k];
//         k++;
//     }

//     k=mid+1;
//     for(int i=0;i<lenRight;i++){
//         right[i]=array[k];
//         k++;
//     }

//     int leftIndex=0;
//     int rightIndex=0;
//     int mainArrayIndex=s;

//     while(leftIndex<lenLeft && rightIndex<lenRight){
        
//         if(left[leftIndex]<right[rightIndex]){
//             array[mainArrayIndex]=left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         }
//         else{
//             array[mainArrayIndex]=right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//         }
//     }

//     while(leftIndex<lenLeft){
//         array[mainArrayIndex]=left[leftIndex];
//         mainArrayIndex++;
//         leftIndex++;
//     }

//     while(rightIndex<lenRight){
//         array[mainArrayIndex]=right[rightIndex];
//         mainArrayIndex++;
//         rightIndex++;
//     }

//     //most imp
//     delete[] left;
//     delete[] right;

// }
// void mergeSort(int array[],int s,int e){
//     if(s>=e){
//         return;
//     }

//     int mid=(s+e)/2;

//     mergeSort(array,s,mid);

//     mergeSort(array,mid+1,e);

//     merge(array,s,e);
// }
// int main(){
//     int array[]={2,5,2,1,4,6,7};
//     int size=7;
//     int s=0;
//     int e=size-1;
//     mergeSort(array,s,e);
//     for(int i=0;i<size;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }