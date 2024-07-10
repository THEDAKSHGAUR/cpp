// //CHAR ARRAY 

// //creation and printing of a char array
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// int findLenghtString(char ch[],int num){
//     //Length of string;
//     int length=0;
//     for(int i=0;i<=num;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     // cout<<"The lenght of the string is "<<length<<endl;
//     // cout<<"The lenght of the string is "<<strlen(ch)<<endl;//inbuilt
//     return length;
// }
// void reverseEntireArray(char ch[],int length){
//     int i=0;
//     int j=length-1;
//     while(j>i){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
    
// }
// char printandinput(char ch[]){
//     for(int i=0;i<10;i++){
//         cout<<"index value "<<i<<" :: "<<ch[i]<<endl;
//     }

//     //printing the value of null character(Explicit typecasting)
//     char ans= ch[9];
//     int value=(int)ans;
//     cout<<"the value of null character is :: "<<value;
// }
// void ConvertToUpperCase(char ch[],int n){
//     int index=0;
//     while(ch[index]!='\0'){
//         char currCharacter =ch[index];
//         if(currCharacter>='a' && currCharacter<='z'){
//             ch[index] = currCharacter - 'a' + 'A';
//         }
//         index++;
//     }
    
// }
// void ConvertToLowerCase(char ch[],int n){
//     int index=0;
//     while(ch[index]!='\0'){
//         char currCharacter = ch[index];
//         if(currCharacter >= 'A' && currCharacter <='Z'){
//             ch[index]= currCharacter - 'A' + 'a';
//             ch[index]= currCharacter - 'A' + 'a';
//         }
//         index++;
//     }
// }
// //Replace @ with the space(all these will be majorly having TC of O(l) where l is the length of the string)
// void replacingSpace(char ch[], int n){
//     int i=0;
//     while(ch[i]!='\0'){
//         char thespace = ch[i];
//         if(thespace ==' '){
//             ch[i]='@';
//         }
//         i++;
//     }
// }
// void CheckPalindrome(char ch[],int n){
//     int TheLength=0;
//     for(int i=0;i<n;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             TheLength++;
//         }
//     }
//     int i=0;
//     int j=TheLength-1;
//     int ans;
//     while(j>i){
//         if(ch[i]!=ch[j]){
//             ans=0;
//             break;
//         }
//         else{
//             ans=1;
//             i++;
//             j--;
//         }
        
//     }
//     if(ans==0){
//         cout<<"the given string is Not palindrome";
//     }
//     else{
//         cout<<"The given string is a palindrome";
//     }
// }
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int n=100;
//     CheckPalindrome(ch,100);
// }

////STRINGS
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string ans;
    // cin>>ans;
    getline(cin,ans);
    cout<<ans;
    return 0;
}