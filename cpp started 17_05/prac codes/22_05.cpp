//DIMOND PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER OF ROWS IN EVEN:: ";
//     cin>>n;
//     for(int i=1;i<=n/2;i++){
//         for(int j=0;j<n/2-i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<i;k++){
//             cout<<"* ";
//         }
//         for(int j=0;j<n/2-i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     for(int a=1;a<=n/2;a++){
//         for(int l=0;l<a-1;l++){
//             cout<<" ";
//         }
//         for(int k=0;k<n/2-a+1;k++){
//             cout<<"* ";
//         }
//         for(int l=0;l<a-1;l++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


//HOLLOW TRIANGLE
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
}
} //to be done tomorrow(23rd May)