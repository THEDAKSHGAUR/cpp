#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
class LinkList{
    public:
    int data;
    LinkList *next;
    LinkList(){
        this->next=NULL;
    }
    LinkList(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(LinkList *head){
    LinkList *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
}
LinkList* kReverse(LinkList *head,int k){
    //base case
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    //solve one case
    int p=0;
    LinkList *prev=NULL;
    LinkList *curr=curr;
    LinkList *nextNode=NULL;
    while(p<k){
        p++;
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    //recursive call;
    LinkList* recursiveAns=NULL;
    if(nextNode!=NULL){
        recursiveAns==kReverse(nextNode,k);
        nextNode->next=prev;
    }
    return recursiveAns;
}
int main(){
    LinkList *numOne= new LinkList(1);
    LinkList *numTwo= new LinkList(2);
    LinkList *numThree= new LinkList(3);
    LinkList *numFour= new LinkList(4);
    LinkList *fast=numOne;
    LinkList *slow=numOne;
    LinkList *head=numOne;
    numOne->next=numTwo;
    numTwo->next=numThree;
    numThree->next=numFour;
    numFour->next=numOne;
    //printing
    printLL(head);
    cout<<endl;
    //kReversing
    kReverse(head,2);
    //print
    printLL(head);
    return 0;
}
