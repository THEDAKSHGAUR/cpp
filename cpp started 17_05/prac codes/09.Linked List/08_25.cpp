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

//Doubly linked list
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;

    node(){
        this->next=NULL;
        this->prev=NULL;
    }
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void printLL(node *&head,node *&tail){
    node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    delete temp;
    return;
}
int lengthLL(node *&head){
    int length=1;
    node *temp=head;
    while(temp->next!=NULL){
        length++;
        temp=temp->next;
    }
    delete temp;
    return length;
}
void HeadInsertionInDLL(node *head, node* tail, int data){
    if(head==NULL){
        node *temp=new node(data);
        head=temp;
        tail=temp;
        delete temp;
    }
    else{
        node *temp=new node(data);
        head->prev=temp;
        temp->next=head;
        head=temp;
        delete temp;
    }
}
int main(){
    node *one=new node(5);
    node *two=new node(6);
    node *three=new node(7);
    one->next=two;
    two->next=three;
    three->next=NULL;
    node *head=one;
    cout<<lengthLL(head);
    return 0;
}