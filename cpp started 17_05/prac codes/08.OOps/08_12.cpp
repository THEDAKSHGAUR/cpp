//const variable 
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
int main(){
    // const int a=5;
    ///if I change the variable, it will give error
    // cout<<a;
    //an obsolete method to change the value
    // int *p=&a;
    // *p=5;

    ///const data and non const pointer
    // const int *a= new int(5);
    // cout<<*a<<endl;
    // int b=20;
    // a=&b;//pointer can be reassigned
    // cout<<*a<<endl;

    ///const pointer and non const data
    // int *const a=new int(5);
    // cout<<*a<<endl;
    // *a=40;
    // cout<<*a<<endl;

    ///const data and const pointer
    // const int *const a= new int(5);
    // cout<<*a<<endl;
    // *a=50;
    // int b=100;
    // a=&b;
    // return 0;
    
}