//Implementation of Queue using stacks(Leet:232)
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
    }
    void push(int x) {
        s1.push(x);
    }
    int pop() {
        while(!s1.empty()){
            int element=s1.top();
            s1.pop();
            s2.push(element);
        }
        int thepop=s2.top();
        s2.pop();
        while(!s2.empty()){
            int element=s2.top();
            s2.pop();
            s1.push(element);
        }
        return thepop;
    }
    int peek() {
        while(!s1.empty()){
            int element=s1.top();
            s1.pop();
            s2.push(element);
        }
        int thepeek=s2.top();
        while(!s2.empty()){
            int element=s2.top();
            s2.pop();
            s1.push(element);
        }
        return thepeek;
    }
    bool empty() {
        if(s1.empty() && s2.empty())return true;
        else return false;
    }
};
class MyStack {
public:
    queue<int>q;
    MyStack() {
    }
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            int element=q.front();
            q.pop();
            q.push(element);
        }
    }
    int pop() {
        int element=q.front();
        q.pop();
        return element;
    }
    int top() {
        return q.front();
    }
    bool empty() {
        if(q.empty())return true;
        else return false;
    }
};
int main(){
    return 0;
}
