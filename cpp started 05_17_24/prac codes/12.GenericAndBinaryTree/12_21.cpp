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
// void createMap(int inO[], int size, map<int,int>&values){
//     for(int i=0;i<size;i++){
//         int element=inO[i];
//         int index=i;
//         values[element]=index;
//     }
// }
// //giving error
// TreeNode* postAndInOrder(map<int,int>&values, int postO[], int inO[], int &postIndex, int InOrderStart, int InOrderEnd){
//     if(postIndex<0 || InOrderStart>InOrderEnd) return NULL;
//     int element=postO[postIndex];
//     postIndex--;
//     TreeNode* root=new TreeNode(element);
//     int position=values[element];
//     root->right=postAndInOrder(values,postO,inO,postIndex,position+1,InOrderEnd);
//     root->left=postAndInOrder(values,postO,inO,postIndex,InOrderStart,position-1);
//     return root;
// }
// int main(){
//     int Inorder[]={8,14,6,2,10,4};
//     int postOrder[]={8,6,14,4,10,2};
//     int size=6;
//     int postStart=5;
//     int InStart=0;
//     int InEnd=5;
//     map<int,int>values;
//     createMap(Inorder,size,values);
//     postAndInOrder(values,postOrder,Inorder,postStart,InStart,InEnd);
//     return 0;
// }