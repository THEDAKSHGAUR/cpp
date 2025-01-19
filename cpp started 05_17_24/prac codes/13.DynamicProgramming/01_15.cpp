#include<iostream>
#include<vector>
using namespace std;
int knapSackSpaceOptimized(int capacity, int wt[], int profit[], int n){
    vector<int>next(capacity+1,-1);
    vector<int>curr(capacity+1,-1);
    for(int i=0;i<=capacity;i++){
        next[i]=0;
    }
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<=capacity;i++){
            int include=0;
            if(wt[j]<=i){
                include=profit[j]+next[i-wt[j]];
            }
            int exclude=0+next[i];
            curr[i]=max(include,exclude);
        }
        next=curr;
        cout<<"printing the next for index :: ";
        for(int index=0;index<=capacity;index++){
            cout<<next[index];
            cout<<" ";
        }
        cout<<endl;
    }
    return next[capacity];
}
int knapsackOptimization1D(int capacity, int wt[], int profit[], int n){
    vector<int>next(capacity+1,0);
    for(int j=n-1;j>=0;j--){
        for(int i=capacity;i>=0;i--){
            int include=0;
            if(wt[j]<=i){
                include=profit[j]+next[i-wt[j]];
            }
            int exclude=0+next[i];
            next[i]=max(include,exclude);
        }
        cout<<"printing the next for index :: ";
        for(int index=0;index<=capacity;index++){
            cout<<next[index];
            cout<<" ";
        }
        cout<<endl;
    }
    return next[capacity];
}
int main(){
    int capacity=4;
    int wt[]={1,2,3};
    int profit[]={4,5,6};
    int index=0;
    int n=3;
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));
    int ans=knapsackOptimization1D(capacity,wt,profit,n);
    cout<<ans<<endl;
    return 0;
}