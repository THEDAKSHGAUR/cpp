#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
using namespace std;
//if we have to use the given string by reference then we have to use backtracking.
string thePermutation(string &s, int i){
    if(i>=s.length()){
        cout<<s<<endl;
        return s;
    }

    for(int j=i;j<s.length();j++){//initialise the j with i
        swap(s[i],s[j]);
        thePermutation(s,i+1);
        //backtracking
        swap(s[i],s[j]);
    }
}
int main(){
    string s="abc";
    int i=0;
    thePermutation(s,i);
    return 0;
}