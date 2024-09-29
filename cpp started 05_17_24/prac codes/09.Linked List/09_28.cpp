// //STARTING POINT OF LL LOOP
// //REMOVE LOOP
// //ADD NUM IN LL
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// class LinkList{
//     public:
//     int data;
//     LinkList *next;
//     LinkList(){
//         this->next=NULL;
//     }
//     LinkList(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void printLL(LinkList *head){
//     LinkList *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     };
// }
// bool findLoop(LinkList* head,LinkList * &fast, LinkList * &slow){
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next;
//         fast=fast->next;
//         slow=slow->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// void removeLoop(LinkList *  head,LinkList* &fast, LinkList* &slow){
//     if(findLoop(head,fast,slow)){
//         slow=head;
//         while(fast!=NULL){
//             if(fast==slow){
//             LinkList *temp=fast;
//             while(temp->next!=fast){
//             temp=temp->next;
//             };
//             temp->next=NULL;
//             return;
//         }
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
// }
// void reverseLL(LinkList * &head){
//     LinkList *prev=NULL;
//     LinkList * curr=head;
//     LinkList *carry=head->next;
//     while(curr!=NULL){
//         curr->next=prev;
//         prev=curr;
//         curr=carry;
//         if(carry!=NULL)carry=carry->next;
//     }
//     head=prev;
//     return;
// }
// void addDigit(LinkList* &head,int add){
//     reverseLL(head);
//     LinkList *temp=head;
//     int carry=add;
//     while(temp!=NULL){
//         temp->data=temp->data+carry;
//         if(temp->data>9){
//             carry=temp->data/10;
//             temp->data=temp->data%10;
//             temp=temp->next;
//         }
//         else{
//             carry=0;
//             reverseLL(head);
//             return;
//         }
//     }
//     if(carry>0){
//         LinkList *newNode=new LinkList(carry);
//         LinkList *temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newNode;
//         newNode->next=NULL;
//     }
//     reverseLL(head);
//     return;
// }
// int main(){
//     LinkList *numOne= new LinkList(9);
//     LinkList *numTwo= new LinkList(9);
//     LinkList *numThree= new LinkList(9);
//     LinkList *numFour= new LinkList(9);
//     LinkList *fast=numOne;
//     LinkList *slow=numOne;
//     LinkList *head=numOne;
//     numOne->next=numTwo;
//     numTwo->next=numThree;
//     numThree->next=numFour;
//     numFour->next=numOne;
//     //removing
//     removeLoop(head,fast,slow);
//     //adding digit
//     addDigit(head,1);
//     //printing
//     printLL(head);
//     return 0;
// }