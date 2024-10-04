// //In this day we will be learning about the mathematics approaches to solve a mathematical q with minimal complexity
// //There are several approaches as 
// //1.Naive approach
// //2.SQRT approach
// //3.sieve of Eratosthenes
// //4.segmented seive

// // //Count Prime(Leet: 204)
// // #include<iostream>
// // #include<vector>
// // #include<string.h>
// // #include<algorithm>
// // #include<cmath>
// // using namespace std;
// // bool thenaive(int n){
// //     bool isprime=true;
// //     for(int i=2;i<n;i++){
// //         if(n%i==0){
// //             isprime=false;
// //         }
// //     }
// //     return isprime;
// // }
// // bool theSQRT(int n){
// //     bool isprime=true;
// //     int sqrt= sqrt(n);
// //     for(int i=0;i<sqrt;i++){
// //         if(n%i==0){
// //             isprime=false;
// //         }
// //     }
// //     return isprime;
// // }
// // int seiveErotosthenes(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     vector<bool>prime(n,true);
// //     prime[0]=prime[1]=false;
// //     int ans=0;
// //     for(int i=2;i<n;i++){
// //         if(prime[i]=true){
// //             ans++;

// //             int j=2*i;//this holds the main condition
// //             while(j<n){
// //                 prime[j]=true;
// //                 j+=i;
// //             }
// //         }
// //     }
// //     return ans;
// // }
// // int main(){
// //     return 0;
// // }

// // //GCD of 2 numbers(GFG)
// // #include<iostream>
// // #include<vector>
// // #include<string.h>
// // #include<algorithm>
// // #include<cmath>
// // using namespace std;
// // int gcd(int a, int b){
// //     if(a==0){
// //         return b;
// //     }
// //     else if(b==0){
// //         return a;
// //     }
// //     // if(a>b){//loop kidhar hai bhaisahab!!??:)
// //     //     a=a-b;
// //     //     b=b;
// //     // }
// //     // else if(a<b){
// //     //     a=b-a;
// //     //     b=a;
// //     // }
// //     while(a>0 && b>0){
// //         if(a>b){
// //             a=a-b;
// //         }
// //         else{
// //             b=b-a;
// //         }
// //     }
// //     return a==0? b:a;
// // }
// // int main(){
// //     int a=84;
// //     int b=368;
// //     int n=gcd(a,b);
// //     cout<<n;
// //     return 0;
// // }

// //Fast Explonentiation
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int slowExponentiation(int a,int b){
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int fastExponentiation(int a,int b){
//     int ans=1;
//     while(b>0){
//         if(b & 1){
//             ans=ans*a;
//         }
//         a=a*a;
//         b>>=1;//rightshift b by 1; b=b/2;
//     }
//     return ans;
// }
// int main(){
//     int a=5;
//     int b=4;
//     int n = fastExponentiation(a,b);
//     cout<<n;
//     return 0;
// }

////modular exponentiation for large number(GFG)
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// long long int powMod(long long int a, long long int b, long long int m){
//     long long int ans=1;
//     while(b>0){
//         if(b&1){
//             ans=(ans*a)%m;
//         }
//         a=(a*a)%m;
//         b>>=1;
//     }
//     return ans%m;
// }
// int main(){
//     int a=40;
//     int b=50;
//     int m=10;
//     int n=powMod(a,b,m);
//     cout<<n;
//     return 0;
// }

