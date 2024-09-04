#include<bits/stdc++.h>
using namespace std;

// Write a program to remove all characters from a string except alphabets in a given string.

int main(){
    string str = "1.Python & 2.Java";
    // str.erase(0,1); // erases one character at index 0 
    // str.erase(0,6); // erases 6 characters starting from the index 0 
    
    // for(int i=0;i<str.size();i++){
    //     if((int(str[i]) >=int('a') && int(str[i])<= int('z')) || (int(str[i]) >=int('A') && int(str[i])<= int('Z'))){
    //         continue;
    //     }
    //     else{
    //         // str.erase(i,1);
    //         str = str.substr(0,i) + str.substr(i+1);
    //         i--;
    //     }
    // }

    // ------- Another Way ------------

    for(int i=0;i<str.size();i++){
        if(!isalpha(str[i])){
            str = str.substr(0,i) + str.substr(i+1);
            i--;
        }
    }
    
    cout<<str;
    return 0;
}