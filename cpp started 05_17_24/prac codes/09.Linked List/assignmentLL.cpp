//Merge 2 sorted lists(21)
//Remove nth node from the end.
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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
    ListNode *i=list1;
    ListNode *j=list2;
    ListNode *mptr=new ListNode(-1);
    ListNode *theReturnNode=NULL;
    if(list1->data<=list2->data)theReturnNode=list1;
    else theReturnNode=list2;
    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            mptr->next=i;
            mptr=i;
            i=i->next;
        }
        else{
            mptr->next=j;
            mptr=j;
            j=j->next;
        }
    }
    if(i==NULL){
        mptr->next=j;
    }
    else if(j==NULL){
        mptr->next=i;
    }
    return theReturnNode;
}
int Length(ListNode *head){
    ListNode *temp=head;
    int i=0;
    while(head!=NULL){
        temp=temp->next;
        i++;
    }
    return i;
}
ListNode *TLECODEremoveNthFromEnd(ListNode* head, int n) {//this code is giving tlE
    if(head==NULL){
        return head;
    }
    int len=Length(head);
    int postion=len-(n-1);
    ListNode *theConnectiveFrom=NULL;
    ListNode *theConnectiveTo=NULL;
    int i=1;
    ListNode *temp=head;
    while(i!=postion+1 && temp!=NULL){
        if(i==postion-1){
            theConnectiveFrom=temp;
        };
        if(postion==i+1){
            theConnectiveTo=temp;
        }
    }
    theConnectiveFrom->next=theConnectiveTo;

    return head;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {//GPT code
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* first = dummy;
    ListNode* second = dummy;
    for (int i = 0; i <= n; i++) {
        first = first->next;
    }
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return dummy->next;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a=headA;
    ListNode *b=headB;
    while(a->next!=NULL && b->next!=NULL){
        if(a==b)return a;
        a=a->next;
        b=b->next;
    }
    int differnce=-1;
    if(a->next==NULL){
        while(b->next!=NULL){
            differnce++;
        }
        int i=1;
        b=headB;
        while(i<=differnce){
            b=b->next;
        }
        a=headA;
    }
    else{
        while(a->next!=NULL){
            differnce++;
        }
        int i=1;
        a=headA;
        while(i<=differnce){
            a=a->next;
        }
        b=headB;
    }
    while(a!=NULL && b!=NULL){
        if(a=b)return a;
    }
    return NULL;
}
//sortLists
ListNode *midFound(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* list1, ListNode* list2) {
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
    ListNode *i=list1;
    ListNode *j=list2;
    ListNode *mptr=new ListNode(-1);
    ListNode *theReturnNode=NULL;
    if(list1->data<=list2->data)theReturnNode=list1;
    else theReturnNode=list2;
    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            mptr->next=i;
            mptr=i;
            i=i->next;
        }
        else{
            mptr->next=j;
            mptr=j;
            j=j->next;
        }
    }
    if(i==NULL){
        mptr->next=j;
    }
    else if(j==NULL){
        mptr->next=i;
    }
    return theReturnNode;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *theMid=midFound(head);
        ListNode *first=head;
        ListNode *second=theMid->next;
        theMid->next=NULL;
        
        ListNode *left=sortList(first);
        ListNode *right=sortList(second);

        //merge the list
        ListNode *mergedList=merge(left,right);
        return mergedList;
}
ListNode *flatten(ListNode *root){
    if(root->next==NULL){
        return root;
    }
    ListNode *L1=root;
    ListNode *L2=root->next;
    root=merge(L1,L2);
    ListNode *theAns=flatten(root);
}
int main(){
    ListNode *numOne= new ListNode(1);
    ListNode *numTwo= new ListNode(2);
    ListNode *numThree= new ListNode(3);
    ListNode *numFour= new ListNode(5);
    ListNode *fast=numOne;
    ListNode *slow=numOne;
    ListNode *head1=numOne;
    numOne->next=numTwo;
    numTwo->next=numThree;
    numThree->next=numFour;
    numFour->next=NULL;
    ListNode *num1= new ListNode(1);
    ListNode *num2= new ListNode(3);
    ListNode *num3= new ListNode(4);
    ListNode *num4= new ListNode(5);
    ListNode *head2=num1;
    num1->next=num2;
    num2->next=num3;
    num3->next=num4;
    num4->next=NULL;
    // mergeTwoLists(head1,head2);
    // printLL(head1);
    cout<<endl;
    removeNthFromEnd(head1,2);
    printLL(head1);
}