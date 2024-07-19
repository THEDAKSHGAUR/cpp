// //Optimization of Sieve of eratosthenes 
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// vector<bool>optimisingEratothenes(int n){
//     vector<bool>ans(n,true);
//     ans[0]=ans[1]=false;
//     for(int i=2;i*i<=n;i++){//second optimization as sqrt of n
//         if(ans[i]){
//             int j=i*i;//first optimization as the given
//             while(j<=n){
//                 ans[j]=false;
//                 j=j+i;
//             }
//         }
//     }
//     return ans;
// }
// vector<bool> segmentedSeive(int L, int R){

//     vector<bool>sieve=optimisingEratothenes(sqrt(R));
//     vector<bool>basePrime;
//     for(int i=0;i<sieve.size();i++){
//         if(sieve[i]){
//             basePrime.push_back(i);
//         }
//     }
//     vector<bool>segSieve(R-L+1,true);
//     if(L==1){
//         segSieve[0]=false;
//     }
//     for(auto prime:basePrime){

//         int first_mul=(L/prime)*prime;
//         first_mul=first_mul<L? first_mul+prime : first_mul;
//         int j=max(first_mul,prime*prime);
//         while(j<=R){
//             segSieve[j-L]=false;
//             j=j+prime;
//         }
//     }
//     return segSieve;

// }

// int main(){
//     int L=110;
//     int R=130;
//     vector<bool>ans=segmentedSeive(L,R);
//     for(int i=0;i<ans.size();i++){
//         if(ans[i]){
//             cout<<L+i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }