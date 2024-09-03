#include<bits/stdc++.h>
using namespace std;
// remove all the vowels in a given string
int main(){
    string s = "riihav";
    for(int i=0;i<s.length();i++){
        char temp = tolower(s[i]);
        if(temp=='a' || temp=='i' || temp=='e' || temp=='o' || temp=='u'){
            s = s.substr(0,i) + s.substr(i+1);
            i--; /*If you don't decrement i, the loop will skip checking the new character that 
                    moves into the position of the removed vowel.*/
        }
    }
    cout<<s;
    return 0;
}