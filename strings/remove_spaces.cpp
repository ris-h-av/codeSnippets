#include<bits/stdc++.h>
using namespace std;
// remove all the vowels in a given string
int main(){
    string s = "take u forward";
    // for(int i=0;i<s.length();i++){
    //     if(s[i]==' '){
    //         s = s.substr(0,i) + s.substr(i+1);
    //     }
    // }
    /*
        Another way :- 
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    */

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout<<s;
    return 0;
}