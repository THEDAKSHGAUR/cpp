// //SQUARE
// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

// RECTANGLE
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<7;j++){
//             cout<<"* ";

//         }
//         cout<<endl;

//     }
// }

// HOLLOW RECTANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<7;j++){
//              if(i==0 || i==4){
//                 cout<<"* ";
//         }
//         else{
//             if(j==0 || j==6){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         }
//         cout<<endl;
//     }
// }

// HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int row=5;
//     int col=5;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";    
//         }
//         cout<<endl;
//     }
// }

// INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<5;row++){
//         for(int col=0;col<5-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// NUMERICAL HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows::";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }

// NUMERICAL INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5-i;j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }