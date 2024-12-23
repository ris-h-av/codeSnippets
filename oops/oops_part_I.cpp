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

    Whenever an object is created a constructor is invoked behind the scenes haning no return type
    By default it is named like the way u name your class e.g. Hero Aman; then Aman.Hero() is invoked at the time of creation
    When you define your own constructor then the default constructor get destroyed

    'this' keyword is a pointer to the current object
*/

class Hero{ // this is a class of 'Hero' type 
    // following are the properties/members of this class
    private: // means can be accessed only inside the class
    char name[100];
    public:  // means can be accessed anywhere
    int health;
    char level;

    Hero(){
        cout<<"Constructor called"<<endl;
    }
    // parameterised constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }


    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }

    // getter and setter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    char *getName(){
        return name;
    }

    void setName(const char n[]){
        strcpy(name, n);
    }
    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){
    // Hero h1; // creation of an object (static memory allocation)
    // cout<<"Size of h1 :" <<sizeof(h1);
    // h1.health = 100;
    // h1.level = 'A';

    // Hero *h2 = new Hero(); // creation of an object (dynamic memory allocation)
    // h2->setName("Risab"); // or (*h2).setName("Risab");
    // cout<<h2->getName(); // or cout<<(*h2).getName();

    // h1.setHealth(99);
    // h1.setLevel('A');
    // cout<<"\nHealth "<< h1.getHealth()<<endl;
    // cout<<"Level "<< h1.getLevel()<<endl;

    // Hero aman(100);
    // cout<<aman.getHealth();


    // Copy constructor
    Hero ramesh(80,'9');
    ramesh.print();

    Hero suresh(ramesh); 
    suresh.print();

    return 0;
}
