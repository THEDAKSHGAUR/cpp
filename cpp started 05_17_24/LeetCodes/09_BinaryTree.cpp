// //Diameter of  binary tree(Leet:543)
// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root==NULL){
//             return 0;
//         }
//         int leftAns=height(root->left);
//         int rightAns=height(root->right);
//         int ans=max(leftAns,rightAns)+1;
//         return ans;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int ansleft=diameterOfBinaryTree(root->left);
//         int ansright=diameterOfBinaryTree(root->right);
//         int mixAns=height(root->left)+height(root->right);
//         int diameter=max(ansleft,max(ansright,mixAns));
//         return diameter;

//     }
// };

// //Maximum depth of binary tree(Leet:104)
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         queue<TreeNode *>q;
//     q.push(root);
//     q.push(NULL);
//     int height=0;
//     while(q.size()>1){
//         TreeNode* front=q.front();
//         if(front==NULL){
//             height++;
//             q.pop();
//             q.push(NULL);
//         }
//         else{
//             q.pop();
//             if(front->left!=NULL){
//                 q.push(front->left);
//             }
//             if(front->right!=NULL){
//                 q.push(front->right);
//             }
//         }
//     }
//     return height+1;
//     }
// };

// //Diameter of the binary tree(Leet: 543)
// int height(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }
//     int heightleft=height(root->left);
//     int heightright=height(root->right);
//     int ans=max(heightleft,heightright)+1;
//     return ans;
// }
// int diameterOfBinaryTree(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftans=diameterOfBinaryTree(root->left);
//     int rightans=diameterOfBinaryTree(root->right);
//     int combinedans=height(root->left)+height(root->right);
//     int diameter=max(leftans,max(rightans,combinedans));
//     return diameter;
// }

// //Binary Tree Level order traversal(Leet:102)
// vector<vector<int>> levelOrder(TreeNode* root){
//     vector<vector<int>>ans;
//     if(root==NULL){
//         return ans;
//     }
//     queue<TreeNode*>q;
//     q.push(root);
//     while(!q.empty()){
//         vector<int>subans;
//         int size=q.size();
//         for(int i=0;i<size;i++){
//             TreeNode* node=q.front();
//             q.pop();
//             if(node->left)q.push(node->left);
//             if(node->right)q.push(node->right);
//             subans.push_back(node->val);
//         }
//         ans.push_back(subans);
//     }
//     return ans;
// }

// //Balanced binary tree(Leet:110)
// int height(TreeNode *root){
//         if(root==NULL){
//             return 0;
//         }
//         int left=height(root->left);
//         int right=height(root->right);
//         int ans=max(left,right)+1;
//         return ans;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL){
//         return true;
//     }
//     bool leftbalance=isBalanced(root->left);
//     bool rightbalance=isBalanced(root->right);
//     int leftans=height(root->left);
//     int rightans=height(root->right);
//     //we are doing the leftbalance and rightbalance because we have to get the NULL both side as end
//     if(abs(leftans-rightans)<=1 && leftbalance && rightbalance){
//         return true;
//     }
//     else{
//         return false;
//     }
//     }

// //Binary tree maximum path sum(Leet:124)
// int findThePath(TreeNode* root, int &maxi){
//     if(root==NULL){
//         return 0;
//     }
//     int leftans=max(0,findThePath(root->left,maxi));
//     int rightans=max(0,findThePath(root->right,maxi));
//     maxi=max(maxi,leftans+rightans+root->val);
//     //this return statement must be return for the help of recursion
//     return max(leftans,rightans)+root->val;
// }
// int maxPathSum(TreeNode* root){
//     int maxi=INT_MIN;
//     findThePath(root,maxi);
//     return maxi;
// }

// //Same tree(Leet:100)
//  bool isSameTree(TreeNode* p, TreeNode* q){
//     if(p==NULL && q==NULL)return true;
//     if(p==NULL || q==NULL || p->val!=q->val)return false;

//     bool right=isSameTree(p->right,q->right);
//     bool left=isSameTree(p->left,q->left);

//     if(right && left) return true;
//     else return false;
// }
