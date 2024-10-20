//the given code is completed but not mentaining the circular nature
#include<iostream>
using namespace std;
class deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    deque(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push_back(int val){
         //overflow
         if(rear==size-1){
            cout<<"the queue is full"<<endl;
            return;
         }
         //emptycase
         else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
         }
         //normal case
         else{
            rear++;
            arr[rear]=val;
         }
    }
    void push_front(int val){
        //overflow
        if(front+1==rear){
            cout<<"the queue is full"<<endl;
            return;
        }
        //emptycase
        else if(front==-1 && rear==-1){
            rear++; 
            front++;
            arr[front]=val; 
        }
        //normal case
        else{
            front--;
            arr[front]=val;
        }
    }
    void pop_back(){
        if(front==-1 && rear==-1){
            cout<<"the underflow"<<endl;
        }
        else if(front==0 && rear==0){
            arr[rear]=-1;
            front--;
            rear--;
        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }
    void pop_front(){
        //underflow 
        if(front==-1 && rear==-1){
            cout<<"there is nothing to remove";
        }
        //single case
        else if(front==0 && rear==0){
            arr[front]=-1;
            front--;
            rear--;
        }
        //normal
        else{
            arr[front];
            front--;
        }
    }
};
int main(){
    return 0;
}