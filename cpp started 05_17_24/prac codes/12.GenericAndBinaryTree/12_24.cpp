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
// //Left view traversal
// TreeNode* LeftView(TreeNode* root,int level, vector<int>&thearray){
//     if(root==NULL)return NULL;
//     if(level==thearray.size()){
//         thearray.push_back(root->data);
//         cout<<root->data<<" ";
//     }
//     LeftView(root->left,level+1,thearray);
//     LeftView(root->right,level+1,thearray);
// } 
// int main(){
//     return 0;
// }