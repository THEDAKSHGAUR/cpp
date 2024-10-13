// //creation insertion and deletion in a queue
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     //creation
//     queue<int>qt;
//     //insertion 
//     qt.push(40);
//     //printing top, end, size
//     cout<<"size of the queue is :: "<<qt.size()<<endl;
//     cout<<"front element of the queue is :: "<<qt.front()<<endl;
//     cout<<"last element of the queue is :: "<<qt.back()<<endl;
//     //deletion 
//     qt.pop();
//     cout<<"size of the popped queue is :: "<<endl;
//     if(qt.empty())cout<<"The queue is empty"<<endl;

//     qt.push(50);
//     qt.push(60);
//     qt.push(70);
//     cout<<"the front element of new queue is :: "<<qt.front()<<endl;
//     cout<<"the last element of new queue is :: "<<qt.back()<<endl;
//     return 0;
// }