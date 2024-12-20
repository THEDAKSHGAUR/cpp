// //code help video 2
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
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int data){
//         this->val=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//     if(root==NULL)return NULL;
//     if(root->val==p->val)return p;
//     if(root->val==q->val)return q;
//     //producing values of right and left
//     TreeNode* rightans=lowestCommonAncestor(root->right,p,q);
//     TreeNode* leftans=lowestCommonAncestor(root->left,p,q);
//     //applying 4 cases;
//     if(rightans!=NULL && leftans!=NULL)return root;
//     if(rightans!=NULL && leftans==NULL)return rightans;
//     if(rightans==NULL && leftans!=NULL)return leftans;
//     if(rightans==NULL && leftans==NULL)return NULL;
// }
// bool sum(TreeNode* root, int sol,int &theans){
//     if(root==NULL)return false;
//     if(root->left==NULL && root->right==NULL){
//         theans+=root->val;
//         if(theans==sol)return true;
//         else return false;
//     }
//     bool leftans=sum(root->left,sol,theans);
//     bool rightans=sum(root->right,sol,theans);

//     if(leftans || rightans)return true;
//     else return false;
// }
// bool hasPathSum(TreeNode* root, int targetSum){
//     int thesum=0;
//     bool ans=sum(root,targetSum,thesum);
//     return ans;
// }
// int main(){
//     return 0;
// } 