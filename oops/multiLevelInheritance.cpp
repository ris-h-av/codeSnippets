#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Husky: public Dog{
    public:
    void howl(){
        cout<<"Howling..."<<endl;
    }
};

int main(){

    Husky h;
    h.eat();
    h.bark();
    h.howl();
    return 0;
}