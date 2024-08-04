//**Recursion assignment
////Last Occurance of the character
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// int thelast(string str,char ch,int index,int &ans){
//     int n=str.size();
//     if(index<0){
//         return -1;
//     }
//     if(str[index]==ch){
//         ans=index;
//         return ans;
//     }
//     thelast(str,ch,index-1,ans);
// }
// int main(){
//     string str="abcdde";
//     char ch='a';
//     int index=str.size()-1;
//     int ans=-1;
//     thelast(str,ch,index,ans);
//     cout<<ans;
//     return 0;
// }

// //Reverse the string
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void reverse(string &str,int start,int end){
//     if(start>end){
//         return;
//     }
//     swap(str[start],str[end]);
//     reverse(str,start+1,end-1);
// }
// int main(){
//     string str="abcdefgh";
//     int start=0;
//     int end=str.size()-1;
//     reverse(str,start,end);
//     cout<<str;
//     return 0;
// }

////Palindrome check function
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// bool checkpalindrome(string s, int i, int j){
//     int n=s.size();
//     if(i>j){
//         return true;
//     }
//     if(s[i]!=s[j]){
//         return false;
//     }
//     checkpalindrome(s,i+1,j-1);
// }
// int main(){
//     string s="asdfghjklkjhgfds";
//     int i=0;
//     int j=s.size()-1;
//     if(checkpalindrome(s,i,j)){
//         cout<<"It is a valid palindrome";
//     }
//     else{
//         cout<<"Sorry, it is not a valid palindrome";
//     }
//     return 0;
// }

// //Print all the subarrays
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// void subArrays(vector<int>&arr,int start,int end){
//     //base condition
//     int n=arr.size();
//     if(start>end){
//         return;
//     }
//     for(int i=start;i<=end;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     subArrays(arr,start+1,end);
// }
// int main(){
//     vector<int>arr={1,2,3,4,5};
//     int start=0;
//     int end=arr.size()-1;
//     subArrays(arr,start,end);
//     return 0;
// }

