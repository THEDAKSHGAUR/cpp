//reversifying a queue
//reversifying till K elements
//interleave first and second elements
//printFirstNegetive
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
using namespace std;
//procedure of stack
void reverseQ(queue<int>&q){
    int n=q.size();
    stack<int>s;
    while(!q.empty()){
        int x=q.front();
        s.push(x);
        q.pop();
    }
    while(!s.empty()){
        int x=s.top();
        q.push(x);
        s.pop(); 
    }
}
//procedure of recursion
void recursionReverseQ(queue<int>&q){
    //base case
    if(q.empty())return;
    //single element
    int x=q.front();
    q.pop();
    //recursive call
    recursionReverseQ(q);
    q.push(x);
}
void printQ(queue<int>q){
    cout<<"your Q is :: ";
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
    }
    cout<<endl;
}
void reverseTillK(queue<int>&q,int k){
    stack<int>s;
     int m=0;
     while(m!=k){
        int x=q.front();
        s.push(x);
        q.pop();
        m++;
     }
     queue<int>dummy;
     while(!q.empty()){
        int x=q.front();
        dummy.push(x);
        q.pop();
     }
     while(!s.empty()){
        int x=s.top();
        q.push(x);
        s.pop();
     }
     while(!dummy.empty()){
        int x=dummy.front();
        q.push(x);
        dummy.pop();
     }
}
void interleaveFAS(queue<int>& q) {
    if (q.size() <= 1) {
        cout << "Your queue is too small to be interleaved." << endl;
        return;
    }
    int n=0;
    if(q.size()%2==0){
        n = q.size() / 2;
    }
    else{//handled the odd case here
        n = (q.size() + 1) / 2;
    }
    queue<int> dummyQone;

    for (int i = 0; i < n; ++i) {
        dummyQone.push(q.front());
        q.pop();
    }

    queue<int> dummyQtwo = q;

    while (!q.empty()) {
        q.pop();
    }

    while (!dummyQone.empty() || !dummyQtwo.empty()) {
        if (!dummyQone.empty()) {
            q.push(dummyQone.front());
            dummyQone.pop();
        }
        if (!dummyQtwo.empty()) {
            q.push(dummyQtwo.front());
            dummyQtwo.pop();
        }
    }
}
void printFirstNegetive(int *arr, int size, int k){
    queue<int>q;
    for(int index=0;index<k;index++){
        if(arr[index]<0){
            q.push(index);
        }
    }
    //process the lest out windows
    for(int index=k;index<size;index++){
        //aage badhne se pehele purani window ka ans nikal doo
        if(q.empty()){
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        //removal
        if(index-q.front()>=k){
            q.pop();
        }
        //addition
        if(arr[index]<0){
            q.push(index);
        }
    }
    //ans for last window;
    if(q.empty()){
        cout<<"0"<<endl;
    }
    else{
        cout<<arr[q.front()]<<" ";
    }
}
int main(){
    queue<int>q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    // q.push(70);
    // q.push(80);
    // print
    int arr[]={2,-5,4,-1,-2,0,5};
    int size=7;
    int k=3;
    //function
    printFirstNegetive(arr,size,k);
    return 0;
}