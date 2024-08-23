// ////classss
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<algorithm>
// #include<cmath>
// #include<limits.h>
// #include<numeric>
// using namespace std;
// class student{

// private:
//     string gf;
// public:
//     student(){
//         cout<<"the consturctor"<<endl;
//     }
//     //parameterized constructor;
//     student(int id,int age, string name, bool present){
//         this->id=id;
//         this->age=age;
//         this->attendance=present;
//         this->name=name;
//     }
//     student(int id,int age,string name, bool present, int call){
//         this->call=call;
//         this->age=age;
//         this->name=name;
//         this->attendance=present;
//         this->id=id;
//     }
//     string name;
//     int call;
//     int age;
//     bool attendance;
//     int roll;
//     int id;
// private:
//     void sdchatting(){
//         cout<<"chatting";
//     }
// };
// int main(){
//     cout<<sizeof(student)<<endl;
//     student s1;
//     //calling the parameterized ctor
//     student s2(1,19,"Daksh Gaur",1);
//     student s3(1,19,"Daksh Gaur",1,701142);
//     //it is difficult to be managed and lengthy to see
//     // s1.name="Daksh";
//     // s1.age=19;
//     // s1.attendance=1;
//     // student s2;
//     // s2.name="Motto";
//     // s2.age=20;
//     // s2.attendance=0;
//     cout<<s3.call<<endl;
//     cout<<s2.name<<endl;
//     //heap allocation of a data
//     student *s4=new student(1,10,"Gaur",1);
//     cout<<s4->name<<endl;
//     cout<<(*s4).name<<endl;
//     delete s4;
//     return 0;
// }