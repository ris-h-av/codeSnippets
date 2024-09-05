#include<bits/stdc++.h>
using namespace std;

// Sum of the Numbers in a String

int main(){
    string s = "123xyz";
    int sum=0;
    string temp="";
    for(int i=0;i<=s.size();i++){
        if(isdigit(s[i])){
            temp += s[i];
        }else{
            sum += atoi(temp.c_str());
            temp="";
        }
    }
    cout<<sum;
    return 0;
}