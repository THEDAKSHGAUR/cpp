// //N meeting in one room(tuf)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> solAns(vector<int>start, vector<int>end){
//     vector<int>ans;
//     int size=start.size();
//     int s=-1;
//     int e=-1;
//     for(int i=0;i<size;i++){
//         if(start[i]>e){
//             ans.push_back(i+1);
//             e=end[i];
//         }
//         else continue;
//     }
//     return ans;
// }
// int main(){
//     vector<int>start={0,0,0,0,0};
//     vector<int>end={0,0,0,0,10};
//     vector<int>ans=solAns(start,end);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// //Minimum number of plateform required for the railway(tuf)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// ////brute force approach which is having O(n2) complexity
// int numberOfPlateforms(vector<int>arr,vector<int>dep){
//     int size=arr.size();
//     vector<int>s;
//     vector<int>e;
//     s.push_back(arr[0]);
//     e.push_back(dep[0]);
//     for(int i=1;i<size;i++){
//         bool done=false;
//         int j=0;
//         while(j<e.size()){
//             if(arr[i]>e[j]){
//                 s[j]=arr[i];
//                 e[j]=dep[i];
//                 done=true;
//                 break;
//             }
//             j++;
//         }
//         if(!done){
//             s.push_back(arr[i]);
//             e.push_back(dep[i]);
//         }
//     }
//     return e.size();
// }
// //optimal approach 
// int numberOfPlateformOptimal(vector<int>arr,vector<int>dep){
//     int size=arr.size();
//     sort(arr.begin(),arr.end());
//     sort(dep.begin(),dep.end());
//     int count=1;
//     int ans=1;
//     int i=1;
//     int j=0;
//     while(i<size && j<size){
//         if(arr[i]<=dep[j]){
//             count++;
//             i++;
//         }
//         else{
//             count--;
//             j++;
//         }
//         ans=max(ans,count);
//     }
//     return ans;
// }
// int main(){
//     vector<int>arr={900, 910, 955, 1100, 1140, 1800};
//     vector<int>dep={920, 1000, 1130, 1150, 1900, 2000};
//     int ans=numberOfPlateformOptimal(arr,dep);
//     cout<<ans;
//     return 0;
// }


// //Job sequencing problem(tuf)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sequencing(vector<vector<int>>&arr){
//     int profit=0;
//     int jobs=0;
//     int maxTime=0;
//     for(int i=0;i<arr.size();i++){
//         maxTime=max(maxTime,arr[i][1]);
//     }
//     unordered_map<int,bool>timeSlot;
//     sort(arr.begin(),arr.end(),[](const vector<int>&a, const vector<int>&b){
//         return b[2]<a[2];
//     });
//     for(vector<int> i: arr){
//         if(!timeSlot[i[1]]){
//             timeSlot[i[1]]=true;
//             profit +=i[2];
//             jobs++;
//         }
//         else{
//             for(int j=i[1]-1;j>0;j--){
//                 if(!timeSlot[j]){
//                     timeSlot[j]=true;
//                     profit +=i[2];
//                     jobs++;
//                 }
//             }
//         }
//     }
//     return {jobs,profit};
// }
// int main(){
//     vector<vector<int>>arr=/*{{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,1,15}};*/{{1,4,20},{2,1,10},{3,1,40},{4,1,30}};
//     vector<int>ans=sequencing(arr);
//     cout<<"number of jobs :: "<<ans[0]<<endl;
//     cout<<"profit gained :: "<<ans[1]<<endl;
//     // for(vector<int> i : arr){
//     //     for(int j: i){
//     //         cout<<j<<" ";
//     //     }
//     //     cout<<endl;
//     // }
// }


// //Fractional knapsack problem(tuf)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void fractionalKnapSack(int maxi, vector<int>&profit, vector<int>&weight){
//     int tempProfit=0;
//     unordered_map<int,int>pTOw;
//     for(int i=0;i<profit.size();i++){
//         profit[i]=profit[i]/weight[i];
//     }
//     for(int i=0;i<profit.size();i++){
//         pTOw[profit[i]]=weight[i];
//     }
//     sort(profit.begin(),profit.end(),greater<int>());
//     for(int i=0;i<profit.size();i++){
//         weight[i]=pTOw[profit[i]];
//     }
//     // for(int i=0;i<profit.size();i++){
//     //     cout<<"weight : "<<weight[i]<<" ";
//     //     cout<<"profit : "<<profit[i]<<endl;
//     // }
//     int tempWeight=0;
//     while(tempWeight!=maxi){
//         int i=0;
//         while(i<profit.size()){
//             if(weight[i]!=0){
//                 tempWeight+=10;
//                 weight[i]-=10;
//                 tempProfit+=profit[i];
//                 i++;
//             }
//             else{
//                 i++;
//             }
//         }
//     }
//     cout<<"profit earned :: "<<tempProfit*10;
// }
// int main(){
//     int maxWeight=10;
//     vector<int>profit={100,60,120};
//     vector<int>weight={20,10,30};
//     fractionalKnapSack(maxWeight,profit,weight);
//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int requiredCoin(int amount, vector<int>&coins){
//     int coinCount=0;
//     // while(amount>0){
//     //     for(int i=coins.size()-1;i>=0;i--){
//     //         if(coins[i]<=amount){
//                 // amount-=coins[i];
//                 // coinCount++;
//     //         }
//     //     }
//     // }
//     for(int i=coins.size()-1;i>=0;i--){
//         while(amount>=coins[i]){
//             amount-=coins[i];
//             coinCount++;
//         }
//     }
//     return coinCount;
// }
// int main(){
//     int amount=121;
//     vector<int>coins={1,2,5,10,20,50,100,500,1000};
//     int count=requiredCoin(amount, coins);
//     cout<<"coins required :: "<<count;
//     return 0;
// }


// //Assign Cookies(Leet:455)(tuf)
// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         int count=0;
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int i=0;
//         int j=0;
//         while(i<g.size() && j<s.size()){
//             if(g[i]<=s[j]){
//                 count++;
//                 i++;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return count;
//     }
// };