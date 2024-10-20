// //Implementation of queue from scratch
// //Implementation of circular queue
// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     //constructors
//     queue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=-1;
//         this->rear=-1;
//     }
//     void push(int val){
//         if(rear==size-1){
//             //overflow
//             cout<<"the queue is full";
//             cout<<endl;
//             return;
//         }
//         else if(front ==-1 && rear == -1){
//             //empty queue
//             front++;
//             rear++;
//             arr[rear]=val;
//         }
//         else{
//             rear++;
//             arr[rear]=val;
//         }
//         return;
//     }
//     void pop(){
//         if(front==-1 && rear==-1){
//             cout<<"the queue is empty";
//             cout<<endl;
//             return;
//         }
//         else if(rear==front){
//             arr[rear]=-1;
//             rear=-1;
//             front=-1;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//         }
//         return;
//     }
//     int lenght(){
//         int s=rear-front+1;
//         return s;
//     }
//     bool empty(){
//         if(front==-1 && rear==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool full(){
//         if(rear==size-1 && front==0){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int frontEl(){
//         if(front==-1){
//             cout<<"the queue is empty";
//             cout<<endl;
//             return 0;
//         }
//         return arr[front];
//     }
//     int rearEl(){
//         if(front==-1){
//             cout<<"the queue is empty";
//             cout<<endl;
//             return 0;
//         }
//         return arr[rear];
//     }
//     void print(){
//         cout<<"the queue :: ";
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
// };
// int main(){
//     queue qt(5);
//     qt.push(10);
//     qt.push(20);
//     qt.push(30);
//     qt.push(40);
//     qt.push(50);
//     qt.print();
//     qt.pop();
//     qt.print();
//     cout<<"the lenght of the queue is :: "<<qt.lenght()<<endl;
//     cout << (qt.empty() ? "The queue is empty" : "The queue is not empty") << endl;
//     cout << (qt.full() ? "The queue is full" : "The queue is not full") << endl;
//     qt.frontEl();
//     qt.rearEl(); 
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// class cQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     //constructor
//     cQueue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->rear=-1;
//         this->front=-1;
//     }
//     void push(int val){
//         //overflow 
//         if((front==0 && rear==size-1) || (rear==front-1)){
//             cout<<"the queue is full."<<endl;
//         }
//         else if(front==-1 && rear==-1){
//             front++;
//             rear++;
//             arr[rear]=val;
//         }
//         else if(front>0 && rear==size-1){
//             rear=0;
//             arr[rear]=val;
//         }
//         else{
//             rear++;
//             arr[rear]=val;
//         }
//     }
//     void pop(){
//         if(front==-1 && rear==-1){
//             cout<<"the stack is empty"<<endl;
//         }
//         else if(front==0 && rear==0){
//             arr[rear]=-1;
//             rear=-1;
//             front=-1;
//         }
//         else if(front==size-1){
//             arr[front]=-1;
//             front=0;
//             rear=-1;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//         }
//     }
//     void print(){
//         cout<<"front :: "<<front<<" rear :: "<<rear<<endl;
//         cout<<"your queue is :: ";
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     cQueue cqt(5);
//     cqt.print();

//     cqt.push(10);
//     cqt.print();

//     cqt.push(20);
//     cqt.print();

//     cqt.push(30);
//     cqt.print();

//     cqt.push(40);
//     cqt.print();

//     cqt.push(50);
//     cqt.print();

//     cqt.push(10);
//     cqt.print();

//     cqt.pop();
//     cqt.print();

//     cqt.pop();
//     cqt.print();

//     cqt.pop();
//     cqt.print();

//     // cqt.push(10);
//     // cqt.print();
    
//     cqt.push(10);
//     cqt.print();

//     cqt.push(20);
//     cqt.print();

//     cqt.push(30);
//     cqt.print();

//     cqt.push(40);
//     cqt.print();
// }