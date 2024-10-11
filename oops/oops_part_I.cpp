#include<bits/stdc++.h>
// #include "hero.cpp"  // we can also import class from other files
using namespace std;

/*
    class -> is a user defined data type
    object -> is an instance of an object
    if class is empty thein it has a size of 1

    ACCESS MODIFIERS : they set some restrictions on class members so that they can’t be directly accessed by outside functions. 
    We have 3 access modifiers: public,private and protected
    By default all members are private until specified
*/

class Hero{ // this is a class of 'Hero' type
    // following are the properties/members of this class
    private: // means can be accessed only inside the class
    char name[100];
    public:  // means can be accessed anywhere
    int health;
    char level;

    // getter and setter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){
    Hero h1; // creation of an object
    // cout<<"Size of h1 :" <<sizeof(h1);
    // h1.health = 100;
    // h1.level = 'A';

    h1.setHealth(99);
    h1.setLevel('A');
    cout<<"Health "<< h1.getHealth()<<endl;
    cout<<"Level "<< h1.getLevel()<<endl;
}