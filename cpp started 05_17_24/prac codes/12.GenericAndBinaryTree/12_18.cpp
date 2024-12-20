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
//     TreeNode* right;
//     TreeNode* left;
//     TreeNode(int data){
//         this->val=data;
//         this->right=NULL;
//         this->left=NULL;
//     }
// };
// //pass the mainans by reference
// void thesolve(TreeNode* root, int targetSum,vector<vector<int>>&mainsum,vector<int>temp,int sum){
//     if(root==NULL)return;
//     sum+=root->val;
//     temp.push_back(root->val);
//     if(root->left==NULL && root->right==NULL){
//         if(sum==targetSum){
//             mainsum.push_back(temp);
//         }
//         else return;
//     }
//     thesolve(root->left,targetSum,mainsum,temp,sum);
//     thesolve(root->right,targetSum,mainsum,temp,sum);
// }
// vector<vector<int>> pathSum(TreeNode* root, int targetSum){
//     vector<vector<int>>mainsum;
//     vector<int>temp;
//     int sum=0;
//     thesolve(root,targetSum,mainsum,temp,sum);
//     return mainsum;
// }
// int main(){
//     return 0;
// }