#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
#include<map>
using namespace std;
string mostCommonWord(string document) {
    map<string,int>thestr;
    int lengthSen=document.length();
    int i=0;
    int start=0;
    while(i<lengthSen){
        int len=0;
        if(i==lengthSen-1){
            len=i-start+1;
            string substring=document.substr(start,len);
            thestr[substring]++;
        }
        if(document[i]==' '){
            len=i-start;
            string substring=document.substr(start,len);
            thestr[substring]++;
            start = i + 1;
        }
        i++;
    }
    int max=0;
    for(auto &pair:thestr){
        if(pair.second>max)max=pair.second;
    }
    string theansStr;
    for(auto &pair: thestr){
        if(pair.second==max){
            theansStr=pair.first;
            transform(theansStr.begin(), theansStr.end(), theansStr.begin(), ::tolower);
            return theansStr;
        }
    }
    transform(theansStr.begin(), theansStr.end(), theansStr.begin(), ::tolower);
    return theansStr;
}
int main(){
    string document="Greetings to the world, where wonders never cease. Welcome to the universe, a vast expanse of mystery. Greetings again, world, where every moment is a discovery. The universe, full of possibilities, speaks in whispers of opportunity. Welcome, world, to new beginnings, to horizons we've yet to see. Universe, with its endless paths, welcomes us once more. Greetings, world, let’s embark on this journey together. Welcome to the universe, where the impossible becomes reality. The world calls us forward, always forward. Greetings again, universe, we are ready for whatever comes next";
    string ans=mostCommonWord(document);
    cout<<"the answer is :: "<<ans<<endl; 
    return 0;
}