#include<bits/stdc++.h>
using namespace std;
// count vowels, spaces and consonants in a string
void count(string s){
    int l=s.size();
    int v=0,c=0,space=0;
    transform(s.begin(),s.end(),s.begin(), ::tolower); // transform all cahracters into lowercase
    // another way to lowercase
    /*
        for(int i=0;i<l;i++){
            s[i] = tolower(s[i]);
        }
    */
   for(int i=0;i<l;i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        v++;
    }
    else if(s[i] == ' '){
        space++;
    }
    else if(s[i] >= 'a' && s[i]<='z'){
        c++;
    }
   }
   cout<<"Vowels : "<<v<<endl;
   cout<<"Consonants : "<<c<<endl;
   cout<<"Spaces : "<<space<<endl;
   
}

int main(){
    string s= "Take u forward is Awesome";
    count(s);
    return 0;
}