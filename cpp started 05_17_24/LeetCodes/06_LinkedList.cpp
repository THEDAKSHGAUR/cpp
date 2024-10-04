// //Reverse LL(Leet: 206)
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
// };
// int main(){
//     node *prev=NULL;
//     node*curr=head;
//     while(curr!=NULL){
//         node *nextNode=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextNode;
//     }
//     return prev;
// }
// ////using recursion;
// ListNode *reverseUsingRecursion(ListNode *prev, ListNode *curr){
//     if (curr == NULL)
//     {
//         return prev;
//     }
//     ListNode *nextNode = curr->next;
//     curr->next = prev;
//     prev = curr;
//     curr = nextNode;
//     // now the game is in the hands of recursion
//     ListNode *recursionAns = reverseUsingRecursion(prev, curr);
//     return recursionAns;
// }
// ListNode *reverseList(ListNode *head)
// {
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     return reverseUsingRecursion(prev, curr);
// }

////Middle of linked list(Leet: 876)
// class Solution {
// public:
//     int lenLink(ListNode *head){
//             int n=0;
//             ListNode *prev=head;
//             while(prev!=NULL){
//                 prev=prev->next;
//                 n++;
//             }
//             return n;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int n=lenLink(head);
//         int location=1;
//         ListNode *temp=head;
//         while(location!=(n/2)+1){
//             temp=temp->next;
//             location++;
//         };
//         return temp;        
//     }
// };
////Using Tortoise algo
// ListNode* middleNode(ListNode* head) {
//         ListNode *slow=head;
//         ListNode *fast=head;
//         while(fast!=NULL){
//             fast=fast->next;
//             if(fast!=NULL){
//                 fast=fast->next;
//                 slow=slow->next;
//             }
//         }
//         return slow;
//     };

////Palindrome Linked List(Leet: 234)
// ListNode *reverseLL(ListNode *head){
//         ListNode *prev=NULL;
//         ListNode *curr=head;
//         while(curr!=NULL){
//             ListNode *nextTemp = curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextTemp;
//         }
//         return prev;
//     }
//     int len(ListNode *head){
//         int n=0;
//         ListNode *temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             n++;
//         }
//         return n;
//     }
//     bool isPalindrome(ListNode* head) {
//         //mid node
//         int length=len(head);
//         int n=(len(head)/2)+1;
//         ListNode *midNode=head;
//         while(n!=2){
//             midNode=midNode->next;
//             n--;
//         }
//         //break
//         ListNode *head2;
//         if(length%2==0){
//             head2=midNode->next;
//         }
//         else{
//             head2=midNode->next;
//             head2=head2->next;
//         }
//         //reverse
//         head2=reverseLL(head2);
//         //compair;
//         while(head!=NULL && head2!=NULL){
//             if(head->val==head2->val){
//                 head=head->next;
//                 head2=head2->next;
//             }
//             else{
//                 return false;
//             }
//         }
//         return true;
//     }

//////Linked List cycle(Leet: 141)
// //Map:- as an irrelevent approach
// bool hasCycle(ListNode *head) {
//         map<ListNode*,bool>table;
//         ListNode *temp=head;
//         while(temp!=NULL){
//             if(table[temp]==false){
//                 table[temp]=true;
//             }
//             else{
//                 return true;
//             }
//             temp=temp->next;
//         }
//         return false;
//     }
////some relevent approach the fast-slow algo/floyd's algo
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL){
//             fast=fast->next;
//             while(fast!=NULL){
//                 fast=fast->next;
//                 slow=slow->next;
//             }
//             if(fast==slow){
//                 return true;
//             }
//         }
//         return false;
//     }

////Linked List cycle II(Leet: 142)
// class Solution {
// public:
//     bool checkCycle(ListNode* &fast, ListNode* &slow) {
//     while (fast != NULL && fast->next != NULL) {
//         fast = fast->next->next;
//         slow = slow->next;
//         if (fast == slow) {
//             return true;
//         }
//     }
//     return false;
// }
// ListNode *detectCycle(ListNode *head) {
//     if (head==NULL || head->next==NULL) return NULL;
//     ListNode* slow = head;
//     ListNode* fast = head; 
//     if (checkCycle(fast, slow)) {
//         slow = head;
//         while (slow != fast) {
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return fast;
//     }
//     return NULL;
// }
// };

////Reverse Nodes in K-Groups(Leet: 25)
// class Solution {
// public:
//     int len(ListNode *head){
//         ListNode*temp=head;
//         int n=0;
//         while(temp!=NULL){
//             n++;
//             temp=temp->next;
//         }
//         return n;
//     }
//     ListNode* reverseKGroup(ListNode *head,int k){
//     //base case
//     if(head==NULL){
//         return head;
//     }
//     if(head->next==NULL){
//         return head;
//     }
//     //solve one case
//     int p=0;
//     ListNode *prev=NULL;
//     ListNode *curr=head;
//     ListNode *nextNode=curr->next;
//     int L=len(head);
//     if(L<k){
//         return head;
//     }
//     while(p<k){
//         p++;
//         nextNode=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextNode;
//     }
//     //recursive call;
//     ListNode* recursiveAns=NULL;
//     if(nextNode!=NULL){
//         recursiveAns=reverseKGroup(nextNode,k);
//         head->next=recursiveAns;
//     }
//     return prev;
// }
// };

////Merge 2 sorted Lists(Leet: 21)
// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     if(list1==NULL)return list2;
//     if(list2==NULL)return list1;
//     ListNode *i=list1;
//     ListNode *j=list2;
//     ListNode *mptr=new ListNode(-1);
//     ListNode *theReturnNode=NULL;
//     if(list1->val<=list2->val)theReturnNode=list1;
//     else theReturnNode=list2;
//     while(i!=NULL && j!=NULL){
//         if(i->val<=j->val){
//             mptr->next=i;
//             mptr=i;
//             i=i->next;
//         }
//         else{
//             mptr->next=j;
//             mptr=j;
//             j=j->next;
//         }
//     }
//     if(i==NULL){
//         mptr->next=j;
//     }
//     else if(j==NULL){
//         mptr->next=i;
//     }
//     return theReturnNode;
// }

////Remove Nth node form the end(Leet:19)
// ListNode* removeNthFromEnd(ListNode* head, int n) {//GPT code
//     ListNode* dummy = new ListNode(0);
//     dummy->next = head;
//     ListNode* first = dummy;
//     ListNode* second = dummy;
//     for (int i = 0; i <= n; i++) {
//         first = first->next;
//     }
//     while (first != nullptr) {
//         first = first->next;
//         second = second->next;
//     }
//     second->next = second->next->next;
//     return dummy->next;
// }

////Sort List(Leet: 148)
// ListNode *midFound(ListNode *head){
//         ListNode *slow=head;
//         ListNode *fast=head->next;
//         while(fast!=NULL && fast->next!=NULL){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         return slow;
//     }
//     ListNode* merge(ListNode* list1, ListNode* list2) {
//     if(list1==NULL)return list2;
//     if(list2==NULL)return list1;
//     ListNode *i=list1;
//     ListNode *j=list2;
//     ListNode *mptr=new ListNode(-1);
//     ListNode *theReturnNode=NULL;
//     if(list1->val<=list2->val)theReturnNode=list1; //this is done to find the head of new forming node, the new node must have smallest num
//     else theReturnNode=list2;
//     while(i!=NULL && j!=NULL){
//         if(i->val<=j->val){
//             mptr->next=i;
//             mptr=i;
//             i=i->next;
//         }
//         else{
//             mptr->next=j;
//             mptr=j;
//             j=j->next;
//         }
//     }
//     if(i==NULL){
//         mptr->next=j;
//     }
//     else if(j==NULL){
//         mptr->next=i;
//     }
//     return theReturnNode;
// }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode *theMid=midFound(head);
//         ListNode *first=head;
//         ListNode *second=theMid->next;
//         theMid->next=NULL;
        
//         ListNode *left=sortList(first);
//         ListNode *right=sortList(second);

//         //merge the list
//         ListNode *mergedList=merge(left,right);
//         return mergedList;
// }

////Flatten the LL
// Node* merge(Node *i, Node *j) {
//     if(i==NULL)return j;
//     if(j==NULL)return i;
//     Node *ans=NULL;
//     if(i->data<=j->data){
//         ans=i;
//         i->bottom=merge(i->bottom,j);
//     }
//     else{
//         ans=j;
//         j->bottom=merge(i,j->bottom);
//     }
//     return ans;
// }
//     Node *flatten(Node *root){
//     if(root==NULL){
//         return NULL;
//     }
//     Node *mergedLL=merge(root,flatten(root->next));
//     return mergedLL;
// }

