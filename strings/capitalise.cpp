#include<bits/stdc++.h>
using namespace std;

//Capitalize first and last character of each word of a string

int main(){
    string s="Take u Forward is Awesome";
    
    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
            if(!isupper(s[i])){
                s[i] = toupper(s[i]);
            }
        }
        if(s[i]==' '){
            if(!isupper(s[i-1])){
                s[i-1] = toupper(s[i-1]);
            }
            if(!isupper(s[i+1])){
                s[i+1] = toupper(s[i+1]);
            }
        }
    }
    cout<<s;
    return 0;
}