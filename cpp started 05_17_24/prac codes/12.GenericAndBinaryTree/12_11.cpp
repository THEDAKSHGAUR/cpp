//revision part 2 today I will complete the tree revision
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->data=val;
        this->right=NULL;
        this->left=NULL;
    }
};
int maxDepth(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    int height=0;
    while(q.size()>1){
        if(q.front()==NULL){
            height++;
            q.pop();
            q.push(NULL);
        }
        else{
            TreeNode* font=q.front();
            if(font->left){
                q.push(font->left);
            }
            if(font->right){
                q.push(font->right);
            }
        }
    }
    return height+1;
} 
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int heightleft=height(root->left);
    int heightright=height(root->right);
    int ans=max(heightleft,heightright);
    return ans;
}
int diameterOfBinaryTree(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int leftans=height(root->left);
    int rightans=height(root->right);
    int combinedans=leftans+rightans;
    return max(leftans,max(rightans,combinedans));
}
bool isBalanced(TreeNode* root){
    if(root==NULL){
        return true;
    }
    bool leftbalance=isBalanced(root->left);
    bool rightbalance=isBalanced(root->right);

    int leftans=height(root->left);
    int rightans=height(root->right);
    if(abs(leftans-rightans)>1 &&leftbalance && rightbalance){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    return 0;
}