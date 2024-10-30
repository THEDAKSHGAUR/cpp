// //implementation of tree using recursion
// //preOrder, inOrder and postOrder traversals
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;
    
//     Node(int val){
//         this->data=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node * createTree(){
//     cout<<"Enter the value :: "<<endl;
//     int data;
//     cin>>data;
//     if(data==-1){
//         return NULL;
//     }
//     Node *root=new Node(data);
//     //left subtree;
//     cout<<"for left node "<<root->data<<endl;
//     root->left=createTree();
//     //right subtree
//     cout<<"for right node "<<root->data<<endl;
//     root->right=createTree();

//     return root;
// }
// void preOrderTraversal(Node *root){
//     if(root==NULL){
//         return;
//     }
//     //N
//     cout<<root->data<<" ";
//     //L
//     preOrderTraversal(root->left);
//     //R
//     preOrderTraversal(root->right);
// }
// void InOrderTraversal(Node *root){
//     if(root==NULL){
//         return;
//     }
//     //L
//     InOrderTraversal(root->left);
//     //N
//     cout<<root->data<<" ";
//     //R
//     InOrderTraversal(root->right);
// }
// void PostOrderTraversal(Node *root){
//     if(root==NULL){
//         return;
//     }
//     //L
//     PostOrderTraversal(root->left);
//     //R
//     PostOrderTraversal(root->right);
//     //N
//     cout<<root->data<<" ";
// }
// int main(){
//     Node * root=createTree();
//     cout<<"the root of the tree is : "<<root->data<<endl;
//     preOrderTraversal(root);
//     cout<<endl;
//     InOrderTraversal(root);
//     cout<<endl;
//     PostOrderTraversal(root);
//     return 0;
// }