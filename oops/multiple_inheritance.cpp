#include<bits/stdc++.h>
using namespace std;    

class horse{
    public:
    int speed;
    
    public:
    void run(){
        cout<<"Horse is running"<<endl;
    }
};

class donkey{
    public:
    int height;

    public:
    void walk(){
        cout<<"Donkey is walking"<<endl;
    }
};

class Khachhar: public horse, public donkey{
    public:
    string breed;

    public:
    void eat(){
        cout<<"Khachhar is eating"<<endl;
    }
};

int main(){
    Khachhar k;
    cout<<k.speed;
    return 0;
}