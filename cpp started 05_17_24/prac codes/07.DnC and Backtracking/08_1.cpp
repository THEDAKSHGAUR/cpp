#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
void QuickSort(int arr[],int low, int high){
    if(low>=high)return;

    int pivot=high;
    int i=low-1;
    int j=low;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[j],arr[pivot]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);

    QuickSort(arr,low,i-1);
    QuickSort(arr,i+1,high);
}
int main(){
    return 0;
}