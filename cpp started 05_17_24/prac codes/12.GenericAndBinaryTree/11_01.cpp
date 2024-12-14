// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class TreeNode{
//     public:
//     int data;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int val){
//         this->data=val;
//         this->left=min;
//         this->right=min;
//     }
// };
// vector<vector<int>> levelOrder(TreeNode* root) {
//         TreeNode * min;
//         vector<vector<int>>theans;
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(min);
//         while(q.size()<1){
//             vector<int>v1;
//             if(q.front()==min){
//                 q.push(min);
//                 q.pop();
//             }
//             while(q.front()!=min){
//                 TreeNode* num=q.front();
//                 v1.push_back(num->data);
//                 q.pop();
//                 if(num->left!=min){
//                     q.push(num->left);
//                 }
//                 if(num->right!=min){
//                     q.push(num->right);
//                 }
//             }
//             theans.push_back(v1);
//         }
// }
// int main(){
//     return 0;
// }

// //Done striver sheet of binary tree