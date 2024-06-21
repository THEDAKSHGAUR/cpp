// //DIMOND PATTERN

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
//MY CODE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//         for(int i=1;i<=n;i++){
//             for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             if(j==0 || j==i-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
// }
// }

//GPT CODE(MANIPULATED BY ME)
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < n - i; j++) {
//             cout << " ";
//         }
        
//         for (int j = 1; j <= i; j++) {
//             if (j == 1 || j == i) {
//                 cout << " *";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
//to be done tomorrow(23rd May)
//continued(1151hrs)


//INVERTED HALLOW TIRANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<=row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++){
//             if(col==0 || col==n-row-1){
//                 cout<<" *";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         for(int col;col<=row;col++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


//LAST PATTERN
//THE DIAMOND
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     for(int i=0;i<row;i++){
//         //triangle
//         for(int j=0;j<row-i;j++){
//             cout<<"*";
//         }
        
//         //space
//          for(int j=0;j<i;j++){
//             cout<<" ";
//         }
       
//         //triangle
//         for(int j=0;j<1;j++){
//             for(int k=0;k<i;k++){
//                 cout<<" ";
//             }
//             for(int j=0;j<row-i;j++){
//                 cout<<"*";
//             }
//         }
        
        
        
//         cout<<endl;
//     }
//     for(int i=0;i<row;i++){
//         //inverted triangle
//         for(int j=0;j<1;j++){
            
//             for(int k=0;k<i+1;k++){
//                 cout<<"*";
//             }
//             for(int k=0;k<row-0;k++){
//                 cout<<" ";
//             }
           
//         }

//         for(int j=0;j<1;j++){
//             for(int k=0;k<row-i-1;k++){
//                 cout<<" ";
//             }

//             for(int k=0;k<i+1;k++){
//                 cout<<"*";
//             }
//         }

//             cout<<endl;
            
//     }

// }

//this code needs to be fixed.
