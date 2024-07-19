////Recursion
// //finding factorial of n
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int factorial(int n){
//     //base condition
//     if(n==1 || n==0)
//     return 1;

//     //recursive call
//     int therecursion=factorial(n-1);
    
//     //processing
//     int ans= n*therecursion;
//     return ans;
// }
// int main(){
//     int n=5;
//     int ans=factorial(n);
//     cout<<ans;
//     return 0;
// }

// //Print counting
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int thecount(int n){
//     if(n==1){
//         cout<<1<<" ";
//         return 1;
//     }
//     //for reverse counting
//     //cout<<n<<" ";
//     thecount(n-1);
//     //for normal counting
//     cout<<n<<" ";
// }
// int main(){
//     int n=10;
//     thecount(n);
//     return 0;
// }

// //finding 2^n
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int pow(int n){
//     if(n==0){
//         return 1;
//     }
//     int thepower = pow(n-1);
//     int ans=2*thepower;
//     return ans;
// }
// int main(){
//     int n=10;
//     int ans=pow(n);
//     cout<<ans;
//     return 0;
// }

// //fibonacci series
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<numeric>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }
// int main(){
//     int n=9;
//     int ans=fib(n);
//     cout<<ans;
//     return 0;
// }

//sum of n numbers
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }

    int thesum= n+sum(n-1);

    return thesum;
}
int main(){
    int n=10;
    int ans=sum(n);
    cout<<ans;
    return 0;
}