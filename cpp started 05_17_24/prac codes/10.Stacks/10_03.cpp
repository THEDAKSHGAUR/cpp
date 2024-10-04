// //basic member functions of a stack
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>st;
//     //insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     //printing size
//     cout<<"size of the stack :: "<<st.size()<<endl;
//     //deleting the data
//     st.pop();
//     cout<<(st.empty()?"the stack is empty":"the stack is not empty")<<endl;
//     cout<<"top element :: "<<st.top()<<endl;
//     return 0;
// }

//stack implemention to make a stack class
#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"can't push, stack is full";
            return;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"there is nothing to pop.";
            return;
        }
        else{
            top--;
        }
    }
    void empty(){
        if(top==-1){
            cout<<"The stack is empty.";
        }
        else{
            cout<<"The stack is not empty.";
        }
        cout<<endl;
    }
    int getSize(){
        cout<<"size of the stack is :: "<<top+1<<endl;
    }
    int getTop(){
        cout<<((top==-1)?"Stack is empty.":("the top element is :: "+ to_string(arr[top])));
        cout<<endl;
    }
    //print is not member function in stack, just using it to check the funs
    void printStack(){
        cout<<"The stack :: ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.printStack();
    st.pop();
    st.printStack();
    st.empty();
    st.getTop();
    st.getSize();
    return 0;
}