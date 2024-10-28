// // first non-repeating character in a string

// #include<iostream>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     stack<char>ansS;
//     string s="asdfggfdsaseuro";
//     queue<char>q;
//     int freq[26]={0};
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         freq[ch-'a']++;
//         q.push(ch);

//         //finding answer in the queue;
//         while(!q.empty()){
//             if(freq[q.front()-'a']>1){
//                 q.pop();
//             }
//             else{
//                 //ans is here;
//                 ansS.push(q.front());
//                 // cout<<q.front()<<"->";//you can either print for all substrings
//                 break;//this break will help the stack to only put first element in every traversal
//             }
//     }
//     }
//     //this method will help you to print the single first element in the given string
//     if (q.empty() || ansS.empty()) {
//         cout << "#" << endl;
//     }
//     else{
//         cout<<ansS.top()<<endl;
//     }
//     return 0;
// }