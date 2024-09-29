#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode *next;
    ListNode(){
        this->next=NULL;
    }
    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(ListNode *head){
    ListNode *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
    return;
}
int len(ListNode *head){
        ListNode*temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        return n;
    }
    ListNode* reverseKGroup(ListNode *head,int k){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    int p=0;
    ListNode *prev=NULL;
    ListNode *curr=head;
    ListNode *nextNode=curr->next;
    int L=len(head);
    if(L<k){
        return head;
    }
    while(p<k){
        p++;
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    ListNode* recursiveAns=NULL;
    if(nextNode!=NULL){
        recursiveAns=reverseKGroup(nextNode,k);
        head->next=recursiveAns;
    }
    return prev;
}
ListNode *removeDuplicates(ListNode *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode *temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data==temp->next->data){
            ListNode *nextTemp=temp->next;
            temp->next=nextTemp->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head; 
}
int main(){
    ListNode *numOne= new ListNode(1);
    ListNode *numTwo= new ListNode(2);
    ListNode *numThree= new ListNode(2);
    ListNode *numFour= new ListNode(2);
    ListNode *fast=numOne;
    ListNode *slow=numOne;
    ListNode *head=numOne;
    numOne->next=numTwo;
    numTwo->next=numThree;
    numThree->next=numFour;
    numFour->next=NULL;
    // //reverse for k
    // reverseKGroup(head,2);
    removeDuplicates(head);
    printLL(head);
    return 0;
}
