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
/*Thing to keep in mind :
1.to find the substring in a big string we have to use substr(starting index,length of the substring to be found)
*/
bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    // your code here
    int glitchLen=glitchPattern.length();
    int i=0;
    int j=glitchLen-1;
    while(j!=videoStream.length()){
        string substring=videoStream.substr(i,glitchLen);
        if(substring==glitchPattern)return true;
        i++;
        j++;
    }
    return false;
 }
int main(){
    string v="0001110000";
    string g="000";
    bool ans=containsGlitchPattern(v,g);
    if(ans)cout<<"True";
    else cout<<"false";
    return 0;
}