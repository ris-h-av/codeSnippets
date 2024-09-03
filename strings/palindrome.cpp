#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int l =s.size();
        int i=0,j=l-1;
        while(i < j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
            
        }
        return true;
}


int main(){
    string s = "Pull up if i pull up";
    int l = s.length();
    bool ans = isPalindrome(s);
    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}