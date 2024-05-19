// Q1
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){ //online an OR operator was used, changed it
//         cout<<"0";
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<"1";
//     }
//     else{
//         cout<<"-1";
//     }
// }


//Q2
/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}