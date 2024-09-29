//deletion operation on linked list
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(){
//         this->next=NULL;
//     }
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
//     ~node(){
//         cout<<"distructor is called"<<endl;
//     }
// };
// void printLL(node *&head){
//     if(head==NULL){
//         cout<<"there is nothing to print"<<endl;
//     }
//     else{
//         node *temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// }
// void deletionInLL(node *&head, node *&tail, int position){
//     //deletion for empty
//     if(head==NULL || tail==NULL || position<1 ){
//         cout<<"your deletion is not possible"<<endl;
//         return;
//     }
//     if(position==1){
//         node *temp=head;
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     if(position==6){
//         node *temp=head;
//         while(position!=2){
//             temp=temp->next;
//             position--;
//         }
//         tail=temp;
//         temp->next=NULL;
//         return;
//     }
//     else{
//         node *pre=NULL;
//         node *curr=head;
//         while(position!=1){
//             pre=curr;
//             curr=curr->next;
//             position--;
//         }
//         curr=curr->next;
//         pre->next=curr;
//         return;
//     }
// }
// int main(){
//     //creation of a LL
//     node *newNode1=new node(1);
//     node *newNode2=new node(2);
//     node *newNode3=new node(3);
//     node *newNode4=new node(4);
//     node *newNode5=new node(5);
//     node *newNode6=new node(6);
//     node *head=newNode1;
//     node *tail=newNode1;
//     //connections
//     newNode1->next=newNode2;
//     newNode2->next=newNode3;
//     newNode3->next=newNode4;
//     newNode4->next=newNode5;
//     newNode5->next=newNode6;
//     newNode6->next=NULL;
//     printLL(head);
//     //Deletion in LL
//     deletionInLL(head,tail,1);
//     printLL(head);
//     return 0;
// }


// ////Doubly linked list
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(){
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// void printLL(node *&head){
//     node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
//     return;
// }
// int lengthLL(node *&head){
//     int length=1;
//     node *temp=head;
//     while(temp->next!=NULL){
//         length++;
//         temp=temp->next;
//     }
//     return length;
// }
// void HeadInsertionInDLL(node *&head, node*&tail, int data){
//     if(head==NULL){
//         node *temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         node *temp=new node(data);
//         head->prev=temp;
//         temp->next=head;
//         head=temp;
//     }
// }
// void TailInsertionInDLL(node *&head, node*&tail, int data){
//     if(head==NULL){
//         //the given DLL is empty
//         node *temp=new node(data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         //if the given DLL is not empty
//         node *temp=new node(data);
//         //you was not handling the next pointer of the existing tail hence wasnt able to use the temp->prev
//         tail->next=temp;
//         temp->next=NULL;
//         //temp->prev=tail;
//         tail=temp;
//     }
// }
// void BetweenInsertionInDLL(node *&head, node*&tail, int data,int position){
//     int len=lengthLL(head);
//     if(position<1 || position>len){
//         cout<<"your operation is not valid, please try again later"<<endl;
//         return;
//     }
//     if(position==1){
//         HeadInsertionInDLL(head,tail,data);
//         return;
//     }
//     if(position==len){
//         TailInsertionInDLL(head,tail,data);
//         return;
//     }
//     else{
//         node *temp=new node(data);
//         node *pre=NULL;
//         node *curr=head;
//         while(position!=1){
//             pre=curr;
//             curr=curr->next;
//             position--;
//         }
//         temp->prev=pre;
//         curr->prev=temp;
//         pre->next=temp;
//         temp->next=curr;
//     }
// }
// void DeletionInDLL(node *&head, node*&tail,int position){
//     int len=lengthLL(head);
//     if(head==tail){
//         node *temp=head;
//         delete temp;
//         head=NULL;
//         tail=NULL;
//         return;
//     }
//     if(position<1 || position>len){
//         cout<<"your operation is not valid, please try again later"<<endl;
//         return;
//     }
//     if(position==1){
//         node *temp=head;
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//         return;
//     }
//     if(position==len){
//         node *temp=tail;
//         node *pre=head;
//         while(position!=2){
//             pre=pre->next;
//             position--;
//         }
//         pre->next=NULL;
//         temp->prev=NULL;
//         tail=pre;
//         return;
//     }
//     else{
//         node *pre=NULL;
//         node *curr=head;
//         while(position!=1){
//             pre=curr;
//             curr=curr->next;
//             position--;
//         }
//         node *newNode=curr;
//         curr=curr->next;
//         //links
//         pre->next=curr;
//         curr->prev=pre;
//         delete newNode;
//         return;
//     }
// }
// ////No need to run this function because dynamically the code is helping tail to change its position.
// // void findTail(node *&head, node *&tail,int len){
// //     node *temp=head;
// //     while(len!=1){
// //         tail=temp;
// //         temp=temp->next;
// //         len--;
// //     }
// //     tail=temp;
// //     return;
// // }
// int main(){
//     node *tail=NULL;
//     node *head=NULL;
//     HeadInsertionInDLL(head,tail,5);
//     HeadInsertionInDLL(head,tail,6);
//     HeadInsertionInDLL(head,tail,7);
//     HeadInsertionInDLL(head,tail,8);
//     TailInsertionInDLL(head,tail,4);
//     TailInsertionInDLL(head,tail,3);
//     TailInsertionInDLL(head,tail,2);
//     TailInsertionInDLL(head,tail,1);
//     BetweenInsertionInDLL(head,tail,2723,4);
//     BetweenInsertionInDLL(head,tail,98472,1);
//     BetweenInsertionInDLL(head,tail,93475,10);
//     BetweenInsertionInDLL(head,tail,985,19);
//     int len=lengthLL(head);
//     cout<<"Before deletion"<<endl;
//     cout<<len<<endl;
//     printLL(head);
//     cout<<head->data<<endl;
//     cout<<tail->data<<endl;
//     cout<<"After deletion"<<endl;
//     DeletionInDLL(head,tail,1);
//     DeletionInDLL(head,tail,10);
//     DeletionInDLL(head,tail,4);
//     len=lengthLL(head);
//     cout<<len<<endl;
//     printLL(head);
//     cout<<head->data<<endl;
//     cout<<tail->data<<endl;
//     return 0;
// }