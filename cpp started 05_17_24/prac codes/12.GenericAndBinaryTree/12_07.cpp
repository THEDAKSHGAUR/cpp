//it is the revision of the given tree concepts which have been covered till 2nd Nov
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
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>>ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        vector<int>subans;
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            subans.push_back(node->data);
        }
        ans.push_back(subans);
    }
    return ans;
}
int maxDepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int height=0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node* thenode=q.front();
        if(thenode==NULL){
            q.pop();
            height++;
            q.push(NULL);
        }
        else{
            q.pop();
            if(thenode->left){
                q.push(thenode->left);
            }
            if(thenode->left){
                q.push(thenode->left);
            }
        }
    }
    return height+1;
}
int main(){
    return 0;
}