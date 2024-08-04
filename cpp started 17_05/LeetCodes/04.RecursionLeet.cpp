// Recursion gfg and leet

// // print 1 to N without loop(gfg)
// #include <iostream>
// #include <vector>
// #include <string.h>
// #include <algorithm>
// #include <cmath>
// #include <numeric>
// using namespace std;
// int theCount(int n)
// {
//     if (n == 1)
//     {
//         cout << 1 << " ";
//         return 1;
//     }
//     theCount(n - 1);
//     cout << n << " ";
//     return 0;
// }
// int main()
// {
//     int n = 5;
//     theCount(n);
//     return 0;
// }

// //Print GFG n times(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int printGfg(int n) {
//     if(n==1){
//         cout<<"GFG"<<" ";
//         return 1;
//     }
//     printGfg(n-1);
//     cout<<"GFG"<<" ";
//     return 0;
// }
// int main(){
//     return 0;
// }

// // Climbing stairs(Leet: 70)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int climbStairs(int n) {
//         //jab tak given hai tab tak ki fibnacci nikal doo
//         if(n==0){
//             return 1;
//         }
//         if(n==1){
//             return 1;
//         }
//         int ans=climbStairs(n-1)+climbStairs(n-2);
//         return ans;
//     }
// int main(){
//     int n=5;
//     int ans=climbStairs(n);
//     cout<<ans;
//     return 0;
// }

// //Minimize the cut segment(gfg)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int maximizeTheCuts(int n, int x, int y, int z)
//     {
//         //TLE because this q should be done using dp
//         if(n==0){
//             return 0;
//         }
//         if(n<0){
//             return INT_MIN;
//         }
//         int opt1=1+maximizeTheCuts(n-x,x,y,z);
//         int opt2=1+maximizeTheCuts(n-y,x,y,z);
//         int opt3=1+maximizeTheCuts(n-z,x,y,z);
//         return max(opt1,max(opt2,opt3));
//     }
// int main(){
//     return 0;
// }

// //Coin change(Leet:322)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int solve(vector<int>& coins, int amount){
//         if(amount==0){
//             return 0;
//         }
//         int n=coins.size();
//         int coinCount=INT_MAX;
//         int theCoin=INT_MAX;
//         for(int i=0;i<n;i++){
//             int coin=coins[i];
//             if(coin<=amount){
//                 int ans=coinChange(coins,amount-coin);
//                 if(ans!=INT_MAX){
//                     theCoin=1+ans;
//                 }
//             }
//             coinCount=min(theCoin, coinCount);
//         }
//         return coinCount;
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int ans=solve(coins,amount);
//         if(ans==INT_MAX){
//             return -1;
//         }
//         else{
//             return ans;
//         }
//     }
// int main(){
//     return 0;
// }

////House robber(Leet:198)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int solve(vector<int>&nums,int index){
//         int n=nums.size();
//         if(index>=n){
//             return 0;
//         }
//         int option1=nums[index]+solve(nums,index+2);
//         int option2=0+solve(nums,index+1);
//         int theans=max(option1,option2);
//         return theans;
//     }
//     int rob(vector<int>& nums) {
//         int index=0;
//         int ans=solve(nums,index);
//         return ans;
//     }
// int main(){
//     return 0;
// }

// //Add strings(Leet: 415)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void solve(string&num1, string&num2, int start, int end, int carry,
//     string&ans){
//     if(start<0 && end<0){
//         if(carry!=0){
//             ans.push_back(carry+'0');
//         }
//         return ;
//     }
//     int n1= (start>=0? num1[start] :'0')-'0';
//     int n2= (end>=0? num2[end] :'0')-'0';
//     int sum= n1+n2+carry;
//     int digit=sum%10;
//     carry=sum/10;
//     ans.push_back(digit+'0');
//     solve(num1,num2,start-1,end-1,carry,ans );

// }
//     string addStrings(string num1, string num2) {
//         int start=num1.size()-1;
//         int end=num2.size()-1;
//         string ans="";
//         solve(num1,num2,start,end,0,ans);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// int main(){
//     return 0;
// }

// //Remove all the occurances of a substring(Leet: 1910)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void theOccurance(string &s, string &part) {
//     if(s.find(part)==string::npos){
//         return;
//     }
//     int found=s.find(part);
//     if(found!=string::npos){//if the string is not given then the compiler return npos therefor !=
//         string left=s.substr(0,found);
//         string right=s.substr(found+part.size(),s.size());
//         s=left+right;
//     }
//     theOccurance(s,part);
// }
// int main(){
//     string s="abccbabcbcabc";
//     string part="abc";
//     theOccurance(s,part);
//     cout<<s;
//     return 0;
// }
// /////solution of iteration
// // string removeOccurrences(string s, string part) {
// //         while(s.find(part)!= string :: npos){
// //             s.erase(s.find(part),part.length());
// //         }
// //         return s;
// //     }

// //Best time to buy or sell stock(Leet:121)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void theprofit(vector<int>& prices,int index,int &minNum, int &totalProfit) {
//     if(index>=prices.size()){
//         return;
//     }
//     if(prices[index]<minNum){
//         minNum=prices[index];
//     }
//     int todayProfit=prices[index]-minNum;
//     if(todayProfit>totalProfit){
//         totalProfit=todayProfit;
//     }
//     theprofit(prices,index+1,minNum,totalProfit);
// }
// int maxProfit(vector<int>& prices) {
//     int minNum=INT_MAX;
//     int totalProfit=INT_MIN;
//     int index=0;
//     theprofit(prices,index,minNum,totalProfit);
// }
// int main(){
//     return 0;
// }

//// Integer to English Words(Leet:273)
// #include <iostream>
// #include <vector>
// #include <string.h>
// #include <algorithm>
// #include <cmath>
// #include <limits.h>
// #include <numeric>
// using namespace std;
// string numberToWords(int num) {
//         vector<pair<int, string>> mp = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"},
//          {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, 
//          {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, 
//          {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, 
//          {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, {7, "Seven"}, 
//          {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"}, {1, "One"}};
//          if(num==0){
//             return "zero";
//          }
//          for(auto it:mp){
//             if(num>=it.first){
//                 string a="";
//                 if(num>=100){
//                     a=numberToWords(num/it.first);
//                 }
//                 string b=" "+it.second+" ";  
//                 string c="";
//                 if(num%it.first!=0){
//                     c=numberToWords(num%it.first);
//                 }
//                 return a+b+c;
//             }
//             return "";
//          }
// }
// int main()
// {
//     return 0;
// }

////perfect square(Leet:279)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int thebinary(int &n,int thenum,vector<int>&ans){
//     thenum=0;
//     int start=1;
//     int end=100;
//     while(start<end){
//         int mid=(start+end)/2;
//         if(mid*mid<=n){
//             thenum=mid*mid;
//             start=mid+1;
//         }
//         else if(mid*mid==n){
//             n=0;
//             return mid*mid;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     ans.push_back(thenum);
//     n=n-thenum;
//     return thenum;
// }
// int numSquares(int n) {
//     vector<int>ans;
//     int thenum=0;
//     thebinary(n,thenum,ans);
//     if(n==0){
//         return ans.size();
//     }
//     if(n!=0){
//         ans.push_back(thenum);
//         numSquares(n-thenum);
//     }
//     return ans.size();
//     }
// int main(){

//     return 0;
// }