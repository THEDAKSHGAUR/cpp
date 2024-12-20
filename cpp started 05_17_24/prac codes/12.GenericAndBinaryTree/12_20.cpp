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
// //Adobe intern interview q
// //decreasing the time complexity using maps
// void createMap(int inorderMap[], int size, map<int,int>&valueToMap){
//     for(int i=0;i<size;i++){
//         int element=inorderMap[i];
//         int index=i;
//         valueToMap[element]=index;
//     }
// }
// int searchElement(int InO[], int size, int element){
//     for(int i=0;i<size;i++){
//         if(InO[i]==element){
//             return i;
//         }
//     }
//     return -1; 
// }
// TreeNode* TraversalCreation(map<int,int>values,int preO[], int InO[], int size, int InStart, int &PreIndex, int InEnd){
//     //baseCase
//     if(PreIndex>=size || InStart>InEnd){
//         return NULL;
//     }
//     int element=preO[PreIndex];
//     PreIndex++;
//     TreeNode* root= new TreeNode(element);
//     // int position=searchElement(InO, size, element);
//     int position=values[element];
//     //recursion part;
//     root->left=TraversalCreation(values,preO,InO,size,InStart,PreIndex,position-1);
//     root->right=TraversalCreation(values,preO,InO,size,position+1,PreIndex,InEnd);

//     return root;
// }
// int main(){
//     int preorder[]={2,8,10,6,4,12};
//     int Inorder[]={10,8,6,2,4,12};
//     int size=6;
//     int preStart=0;
//     int InStart=0;
//     int InEnd=5;
//     map<int,int>values;
//     createMap(Inorder,size,values);
//     TraversalCreation(values,preorder,Inorder,size,InStart,preStart,InEnd);
//     return 0;
// }