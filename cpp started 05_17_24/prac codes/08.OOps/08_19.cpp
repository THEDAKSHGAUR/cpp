// //we can declare a function as the const, which means that it doesnt modify the state of the object it is called
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// class abc{
//     mutable int x;
//     int *y;
//     public:
//     abc(){
//         x=0;
//         y= new int(0);
//     }
//     abc(int _x, int _y=5){
//         x=_x;
//         y= new int(_y);
//     }
//     //declaring the above ctor using intialization list
//     abc(int _x, int _y):x(_x),y(new int(_y)){}
//     int getx() const{
//         x=3;
//         return x;
//     }

//     void setx(int val){
//         x=val;
//     }

//     int gety() const{
//         return *y;
//     }

//     void sety(int val){
//         *y=val;
//     }
// };
// void printabc(abc &a){
//     cout<<a.getx()<<" "<<a.gety()<<endl;
// }
// int main(){
//     abc a(1); 
//     a.setx(5);
//     printabc(a);
//     return 0;
// }

//MACROS
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
#define pi 3.1215
#define MAXX(x,y) (x>y?x:y)

int main(){
    int x=5;
    int y=43972;
    int r=5;
    cout<<"area :: "<<pi*r*r<<endl;
    cout<<MAXX(x,y);
    return 0;
} 
