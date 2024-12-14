//level order traversal
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * createTree(){
    cout<<"Enter the value :: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node *root=new Node(data);
    //left subtree;
    cout<<"for left node "<<root->data<<endl;
    root->left=createTree();
    //right subtree
    cout<<"for right node "<<root->data<<endl;
    root->right=createTree();

    return root;
}
void levelOrderTraversal(Node * root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int height=0;
    while(q.size()>1){
        Node* front=q.front();
        if(front==NULL){
            height++;
            cout<<endl;
            q.pop();
            q.push(NULL);
        }
        else{
            q.pop();
            cout<<front->data<<" ";
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }

    }
    cout<<endl;
    cout<<height+1;
}
int main(){
    Node *root=createTree();
    cout<<"the root of the tree is :: "<<root->data<<endl;
    cout<<"the level order traversal is :: "<<endl;
    levelOrderTraversal(root);
    return 0;
}