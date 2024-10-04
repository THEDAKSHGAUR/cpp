// //House Robber II(Leet: 213)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int therob(vector<int>&nums,int s, int e){
//         if(s>e){
//             return 0;
//         }
//         int opt1=nums[s]+therob(nums,s+2,e);
//         int opt2=0+therob(nums,s+1,e);
//         return max(opt1,opt2);
//     }
//     int rob(vector<int>& nums) {
//         int s=0;
//         int e=nums.size();
//         if(nums.size()==1){
//             return nums[0];
//         }
//         int ans1=therob(nums,s,e-2);
//         int ans2=therob(nums,s+1,e-1);
//         return max(ans1,ans2);

//     }
// int rob(vector<int>& nums) {
// }
// int main(){
//     return 0;
// }

// //Count Derangement(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int solve(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     int ans=(n-1)*(solve(n-1)+solve(n-2));
//     return ans;
// }
// int main(){
//     int n=4;
//     cout<<solve(n);
//     return 0;
// }

// //Painting fence algorithm
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int thePainting(int n,int k){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return k+k*(k-1);
//     }
//     //same
//     int same=(k-1)*thePainting(n-2,k);
//     //different 
//     int diff=(k-1)*thePainting(n-1,k);

//     int ans=same+diff;
//     return ans;
// }
// int main(){
//     int n=3;
//     int k=3;
//     cout<<thePainting(n,k);
//     return 0;
// }

// //Edit distance(Leet:72)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int theEdit(string string1,string string2, int i, int j){
//     //base cases // if the index exceeds the word
//     if(i>=string1.length()){
//         return string2.length()-j;
//     }
//     if(j>=string2.length()){//index exceeded
//         return string1.length()-i;
//     }
//     int ans=0;
//     //functions
//     if(string1[i]==string2[j]){
//         ans=0+theEdit(string1,string2,i+1,j+1);
//     }
//     else{
//         //remove
//         int opt1=1+theEdit(string1,string2,i+1,j);
//         //replace
//         int opt2=1+theEdit(string1,string2,i+1,j+1);
//         //insert
//         int opt3=1+theEdit(string1,string2,i,j+1);
//         ans=min(opt1,min(opt2,opt3));
//     }
//     return ans;
// }
// int main(){
//     string string1="horse";
//     string string2="ros";
//     int i=0;
//     int j=0;
//     cout<<theEdit(string1,string2,i,j);
//     return 0;
// }

// //Minimal Square
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int solve(vector<vector<char>>& matrix,int i,int j,int row,int col,int &maxi){
//     //base case;
//     if(i>=row || j>=col){
//         return 0;
//     }
//     int right=solve(matrix,i,j+1,row,col,maxi);
//     int down=solve(matrix,i+1,j,row,col,maxi);
//     int diagonal=solve(matrix,i+1,j+1,row,col,maxi);
//     if(matrix[i][j]=='1'){
//         int ans=1+min(right,min(down,diagonal));
//         maxi=max(maxi,ans);
//         return ans;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int i=0;
//     int j=0;
//     int row=matix.size();
//     int col=matrix[0].size();
//     int maxi=INT_MIN;
//     int ans=solve(matrix,i,j,row,col,maxi);
//     return maxi*maxi;
//     return 0;
// }

// // 0/1 KnapSack problem(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int knapsack(const vector<int>&profit,const vector<int>weight,int w,int i){
//     if(i>=profit.size() || w<=0){
//         return 0;
//     }
//     if(weight[i]>w){
//         return knapsack(profit,weight,w,i+1);
//     }
//     else{
//         //not including the number
//         int ans=knapsack(profit,weight,w,i+1);
//         //including the number
//         int bns=profit[i]+knapsack(profit,weight,w-weight[i],i+1);
//         return max(ans,bns);
//     }
// }
// int main(){
//     int n=3;
//     int w=4;
//     vector<int>profit={1,2,3};
//     vector<int>weight={4,5,1};
//     int i=0;
//     cout<<knapsack(profit,weight,w,i);
//     return 0;
// }

//Minimum Score Triangulation of polygon(Leet:1039)
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;

int minScoreTriangulation(vector<int>& values) {
    int j=0;
    int i=0;
    thefunction(values,i,j);
}
int main(){
    return 0;
}