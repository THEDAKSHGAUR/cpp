//AREA OF TRIANGLE
// #include<iostream>
// using namespace std;
// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = 0.5*(width * height); //USE OF DOUBLE IS IMPORTENT
//     int integer=area;//we can declare the multiplication of double data types only after,
// 	cout << integer << endl;
// 	return 0;
// }


//BINARY TO DECIMAL NUM
// #include<iostream>
// using namespace std;
// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }


//PRIME NUMS--it is correct
// #include<iostream>
// using namespace std;
// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
