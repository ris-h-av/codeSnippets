#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcde";
    int n=s.size();
    for(int i=0;i<n;i++){
        string sub = "";
        for(int j=i;j<n;j++){
            sub = sub + s[j];
            cout<<sub<<endl;
        }
    }
}