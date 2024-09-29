// //starting journey with another data structure known as Linked List
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
//         // cout<<"the default ctor is called"<<endl;
//         this->next=NULL;
//     }
//     node(int data){
//         // cout<<"the parameterized constructor is called"<<endl;
//         this->data=data;
//         this->next=NULL;
//     }
// };
// //printing the LL
// void printLL(node *head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// //Inserting the node at head
// void insertAtHead(node *&head,node *&tail,int data){
//     if(head==NULL){
//         //this shows that the given ll is empty
//         node *newNode=new node(data);
//         head=newNode;
//         tail=newNode;
//     }
//     else{
//         node* newNode=new node(data);
//         newNode->next=head;
//         head=newNode;
//     }
// }
// void insertAtTail(node *&head,node *&tail,int data){
//     if(tail==NULL){
//         node *newNode=new node(data);
//         head=newNode;
//         tail=newNode;
//     }
//     else{
//         node *newNode=new node(data);
//         tail->next=newNode;
//         tail=newNode;
//     }
// }
// void createTail(node *&head, node *&tail){
//     node *temp=head;
//     while(temp->next !=NULL){
//         temp=temp->next;
//     }
//     tail=temp;
//     cout<<tail<<endl;
// }
// int countLength(node *head,node*tail,int length){
//     node*temp=head;
//     while(temp!=NULL){
//         length++;
//         temp=temp->next;
//     }
//     return length;
// }
// void insertInBetween(node*&head,node *&tail, int position, int data){
//     int len=countLength(head,tail,0);
//     if(position>len || position<1){
//         cout<<"your operation is not possible"<<endl;
//     }
//     if(position==1){
//         insertAtHead(head,tail,data);
//     }
//     else if(position==len){
//         insertAtTail(head,tail,data);
//     }
//     else{
//         node *newNode= new node(data);
//         node *pre=NULL;
//         node *curr=head;
//         while(position!=1){
//             pre=curr;
//             curr=curr->next;
//             position--;
//         }
//         pre->next=newNode;
//         newNode->next=curr;
//     }
// }
// int main(){
//     node *head=NULL;
//     node *tail=NULL;
//     insertAtHead(head,tail,1);
//     insertAtTail(head,tail,2);
//     insertAtTail(head,tail,3);
//     insertAtTail(head,tail,4);
//     insertAtTail(head,tail,5);
//     cout<<"Length of the formed linked list is "<<countLength(head,tail,0)<<endl;
//     cout<<"without in between insertion :: ";
//     printLL(head);
//     insertInBetween(head,tail,5,90);
//     cout<<"after in between insertion :: ";
//     printLL(head);
// //     node* first= new node(10);
// //     node* second= new node(11);
// // //nil
// //     first->next =second;//very basic method to creat linked list.
// //     second->next=NULL;
// // //nil
// //     node*head= first;
// //     node*tail=0;
// // //nil
// //     createTail(head,tail);
// //     insertAtHead(head,5);
// //     insertAtTail(head,tail,500);
// //     printLL(head);//it is not printing because you are pasing value by value not by reference
//     return 0;
// }