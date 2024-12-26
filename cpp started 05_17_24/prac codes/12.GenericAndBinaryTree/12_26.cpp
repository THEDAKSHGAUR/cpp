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
// TreeNode* createTree(){
//         int data;
//         cout<<"enter the value of rootNode :: ";
//         cin>>data;
//         if(data==-1)return NULL;
//         TreeNode* root=new TreeNode(data);
//         cout<<"enter the value for left part "<<data<< " :: ";
//         root->left=createTree();
//         cout<<"enter the value for right part "<<data<< " :: ";
//         root->right=createTree();
//         return root;
//     }
//     //boundry order traversal
//     //left part
//     void printLeftpart(TreeNode* root){
//         if(root==NULL) return;
//         if(root->left==NULL && root->right==NULL)return;
//         cout<<root->data<<" ";
//         if(root->left!=NULL){
//             printLeftpart(root->left);
//         }
//         else{
//             printLeftpart(root->right);
//         }
//     }
//     //leaf nodes
//     void printLeafpart(TreeNode* root){
//         if(root==NULL)return;
//         if(root->left==NULL && root->right==NULL){
//             cout<<root->data<<" ";  
//             return;
//         }
//         printLeafpart(root->left);
//         printLeafpart(root->right);
//     }
//     void printRightpart(TreeNode* root){
//         if(root==NULL) return ;
//         if(root->left==NULL && root->right==NULL)return;
//         if(root->right!=NULL){
//             printRightpart(root->right);
//         }
//         else{
//             printRightpart(root->left);
//         }
//          cout<<root->data<<" ";
//     }
//     void printTree(TreeNode* root){
//         printLeftpart(root);
//         printLeafpart(root);
//         if(root->right!= NULL){
//             printRightpart(root->right);
//         }
//         else{
//             printRightpart(root->left);
//         }
//     }
// int main(){
//     TreeNode* root=createTree();
//     printTree(root);
//     return 0;
// }