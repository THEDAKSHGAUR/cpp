// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// #include<queue>
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
// //this q is kept pending at this time and will be resumed at the time of solving qs
// TreeNode* KthAncestor(TreeNode* root,TreeNode* element,int k){
//     if(root==NULL)return NULL;
//     if(root==element){
//         k--;
//         return root;
//     }
//     TreeNode* leftans=KthAncestor(root->left,element,k);
//     TreeNode* rightans=KthAncestor(root->right,element,k);

//     if(k==0)return root;
// }
// int main(){
//     return 0;
// }