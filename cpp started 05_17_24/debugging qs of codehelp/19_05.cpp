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
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n; //only cin was not asked.
//     int i=1;
//     while(i<n){
//         int j = i,star = 0;
//         while(star<i){
//             cout<<j;
//             j = j + 1;
//             star = star + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


//Q3
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){ 
//         int j = i,star = 2*n+1,gaps=(n -i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = star - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }
//this is the alternate code for above code
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         //for space
//         for(int gap=0;gap<n-i-1;gap++){
//             cout<<" "; 
//         }
//         for(int star=0;star<2*i+1;star++){ //instead of multiplying by 2 we can have an extra space in the below.
//             cout<<"*";
//         }
//         cout<<endl;

//     }
   
//     }


//Q4
/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<i+1;j++){   //condition was incorrect.
// 	        cout<<i;
//         }
//         cout<<endl;
//     }
// }


//Q5
/*
Pattern
N = 4
1
21
321
4321
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n+1;i++){
//         int p=i;
//         for(j=1;j<i+1;j++){  //some incrementation and decrementation error was there.
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
        
//     }
// }


//Q6
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=0;i<=n;i++){  //solved by changing the values
//         char p=65+n-i;
//         for(j=0;j<i;j++){
//             cout<<p;
//             p++;  
            
//         }
//         cout<<endl;
//     }
// }


//Q7
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<row-i-1;j++){
//             cout<<" ";
//         }
//         int p=i+1;
//         for(int k=0;k<i+1;k++){
//             cout<<p;
//             p++;
//         }
//         int n=2*i;
//         for(int m=0;m<=i-1;m++){
//             cout<<n;
//             n--;
//         }
//         for(int j=0;j<row-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;


//     }
// }


//Q8 UNSOLVED PLS SOLVE IT LATER (22ND MAY 2024)
/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
// void printPatt(int n){
//     int i=1;
//     while(i<(n)){
//         int gaps = n-2*i,k=1;
//         if(i>(n)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - 1 - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

