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
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }
};
int findThePath(TreeNode* root, int &maxi){
    if(root==NULL){
        return 0;
    }
    int leftans=max(0,findThePath(root->left,maxi));
    int rightans=max(0,findThePath(root->right,maxi));

    maxi=max(maxi,leftans+rightans+root->val);
    return 0;
}
int maxPathSum(TreeNode* root){
    int maxi=INT_MIN;
    findThePath(root,maxi);
    return maxi;
}
bool isSameTree(TreeNode* p, TreeNode* q){
    if(p==NULL && q==NULL)return true;
    if(p==NULL || q==NULL || p->val!=q->val)return false;

    bool right=isSameTree(p->right,q->right);
    bool left=isSameTree(p->left,q->left);

    if(right && left) return true;
    else return false;
}
int main(){
    return 0;
}