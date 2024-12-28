#include<bits/stdc++.h>
using namespace std;

// one class servers as parent class for multiple child classes
// hybrid inheritance is a combination of other inheritance

class A{
    public:
    void displayA(){
        cout<<"Class A"<<endl;
    }
};

class B: public A{
    public:
    void displayB(){
        cout<<"Class B"<<endl;
    }
};

class C: public A{
    public:
    void displayC(){
        cout<<"Class C"<<endl;
    }
};

int main(){
    A o1;
    o1.displayA();

    B o2;
    o2.displayA();
    o2.displayB();

    C o3;
    o3.displayA();
    o3.displayC();  
    return 0;
}