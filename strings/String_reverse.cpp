#include<bits/stdc++.h>
using namespace std;

// reverse a string
// using a stack 
void reverseStr(string &s){
    int n = s.size();
    stack<char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    int index=0;
    while (!st.empty())
    {
        char ch = st.top();
        s[index] = ch;
        st.pop();
        index++;
    }
}

int main(){
    string s = "I AM IRON MAN";
    // two pointer approach
    int i=0;
    // while (i<s.size()/2)
    // {
    //     swap(s[i],s[s.size()-i-1]);
    //     i++;
    // }

    /*
        directly reverse a string using a library function
        reverse(s.begin(),s.end());
    */

    // stack method 
    reverseStr(s);
    cout<<s;
    return 0;
}