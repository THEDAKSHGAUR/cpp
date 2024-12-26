// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;
// class TreeNode{
//     public:
//     int data;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int val){
//         this->data=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// //top view of an existing 
// //it can be done using level order traversal but the levels are artificial
// void topView(TreeNode* root){
//     map<int,int>themap;
//     queue<pair<TreeNode*,int>>q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<TreeNode*,int>temp=q.front();
//         q.pop();
//         TreeNode* frontNode=temp.first;
//         int hd=temp.second;
//         //check whether the hd is present in the map or not;
//         if(themap.find(hd)==themap.end()){
//             themap[hd]=frontNode->data;
//         }
//         if(frontNode->left!=NULL){
//             q.push(make_pair(frontNode->left,hd-1));
//         }
//         if(frontNode->right!=NULL){
//             q.push(make_pair(frontNode->right,hd-1));
//         }
//     }
//     for(auto i:themap){
//         cout<<i.second<<" ";
//     }
// }
// void bottomView(TreeNode* root){
//     map<int,int>themap;
//     queue<pair<TreeNode*,int>>q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<TreeNode*,int>temp=q.front();
//         q.pop();
//         TreeNode* frontNode=temp.first;
//         int hd=temp.second;
//             themap[hd]=frontNode->data;
//         if(frontNode->left!=NULL){
//             q.push(make_pair(frontNode->left,hd-1));
//         }
//         if(frontNode->right!=NULL){
//             q.push(make_pair(frontNode->right,hd-1));
//         }
//     }
//     for(auto i:themap){
//         cout<<i.second<<" ";
//     }
// }
// int main(){
//     return 0;
// }