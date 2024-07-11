// //Remove all adjecent duplicates in string(Leet: 1047)
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// string removeDuplicates(string s) {
//     string ans="";
//     int n= s.length();
//     int i=0;
//     while(i<n){
//         if(ans.length()>0 && ans[ans.length()-1]==s[i]){
//             ans.pop_back();
//             i++;
//         }
//         else{
//             ans.push_back(s[i]);
//             i++;
//         }
//     }
//     cout<<ans;
//     return ans;
// }
// int main(){
//     string s="hello";
//     removeDuplicates(s);
//     return 0;
// }

// //Remove all adjecent duplicates in string II//TO BE COMPLETED AT THE TIME OF HW SOLUTION
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// string removeDuplicates(string s, int k) {
//     int n= s.length();
//     string ans;
//     int i=0;
//     while(i<n){
//         if(ans.length()>k-1 && ans[ans.length()-1]==s[i]){
//             int j=1;
//             int count=0;
//             while(j<k){
//                 if(s[i]==ans[ans.length()-j]){
//                     count++;
//                     j++;
//                 }
//             }
//             if(count==k-1){
//                 int x=0;
//                 while(x<count){
//                     ans.pop_back();
//                     x++;
//                 }
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//             i++;
//         }
//         else{
//             ans.push_back(s[i]);
//             i++;
//         }

//     }
//     cout<<ans;
//     return ans;
// }
// int main(){
//     string s="deeedbbcccbdaa";
//     int k=3;
//     removeDuplicates(s,k);
//     return 0;
// }

// //Remove all occurances of a substring
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// string removeOccurrences(string s, string part) {
//     while(s.find(part)!= string :: npos){
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main(){
//     string s="asdkfkaljflksa";
//     string part="asd";
//     removeOccurrences(s,part);
//     return 0;
// }

// // Valid Palindrome II(leet: 680)
// #include <iostream>
// #include <vector>
// #include <string.h>
// #include <algorithm>
// using namespace std;
// bool checkPalindrome(string s, int i, int j)
// {
//     while (i < j)
//     {
//         if (s[i] == s[j])
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }
// bool validPalindrome(string s)
// {
//     int n = s.length();
//     int i = 0;
//     int j = n - 1;
//     bool ans;
//     while (i < j)
//     {
//         if (s[i] == s[j])
//         {
//             i++;
//             j--;
//             ans = true;
//         }
//         else
//         {
//             // now we have to check via removing in both cases
//             bool ans = checkPalindrome(s, i + 1, j);
//             bool ans2 = checkPalindrome(s, i, j - 1);

//             return ans || ans2;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s="abca";
//     validPalindrome(s);
//     return 0;
// }

// //Palindromic Substring(Leet: 647)//Very important approach to be revised.
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// int checkCount(string s, int i, int j){
//         int count=0;
//         int n= s.length();
//         while(i>=0 && j<n && s[i]==s[j]){
//             count++;
//             i--;
//             j++;
//         }
//         return count;

//     }
//     int countSubstrings(string s) {
//         int n= s.length();
//         int i=0;
//         int totalcount=0;
//         for(int currPosition=0;currPosition<n;currPosition++){

//             int oddCount= checkCount(s, currPosition, currPosition);
//             int evenCount= checkCount(s, currPosition, currPosition+1);
//             totalcount=totalcount+oddCount+evenCount;
//         }
//         return totalcount;
//     }

// int main(){
//     string s="abaa";
//     int x=countSubstrings(s);
//     cout<<x;
//     return 0;
// }

