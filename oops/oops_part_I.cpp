#include<bits/stdc++.h>
// #include "hero.cpp"  // we can also import class from other files
using namespace std;

/*
    class -> is a user defined data type
    object -> is an instance of an object
    if class is empty thein it has a size of 1

    ACCESS MODIFIERS : they set some restrictions on class members so that 
    they can’t be directly accessed by outside functions. 
    We have 3 access modifiers: public,private and protected
    By default all members are private until specified

    Whenever an object is created a constructor is invoked behind the scenes haning no return type
    By default it is named like the way u name your class e.g. Hero Aman; then Aman.Hero() is invoked at the time of creation
    When you define your own constructor then the default constructor get destroyed

    'this' keyword is a pointer to the current object

    Shallow copy : same memory is shared
    Deep copy : a copy of the original memory is created
    Default constructor by default creates a shallow copy

    for static allocation destructor is called when the object goes out of scope (destructor called automatically)
    for dynamic allocation destructor is called when we delete the object (destructor called manually)

    Read about 'const' keyword in oops to understand the concept of const functions and objects

    Static keyword creates a data member that belongs to the class rather than the object of the class
    and can be accessed without creating an object of the class

    Static functions can only access static data members and static functions
    they don't have 'this' pointer
*/

class Hero{ // this is a class of 'Hero' type 
    // following are the properties/members of this class
    private: // means can be accessed only inside the class
    int health;
    public:  // means can be accessed anywhere
    char *name;
    char level;
    static int timeToComplete; // static member

    static int random(){
        return timeToComplete;
    }

    // default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }
    // parameterised constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    // deep copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor called \n";
        this->health = temp.health;
        this->level = temp.level;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
        cout<<endl;
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
        strcpy(this->name, n);
    }
    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int Hero::timeToComplete = 10; // static member should be defined outside the class

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

    // Default copy constructor when our custom constructor is not defined
    // Hero player1;
    // player1.setName("Player1");
    // player1.setHealth(100);
    // player1.setLevel('1');
    // Hero player2 = player1; // shallow copy is created
    // player1.print();
    // player2.print();
    // player1.setName("Player1 changed");
    // player1.print();
    // player2.print();


    // Deep copy 
    // Hero ramesh(100,'3');
    // ramesh.setName("Ramesh");
    // ramesh.print();
    // Hero suresh(ramesh); 
    // suresh.print();
    // ramesh.setName("Suresh");
    // ramesh.print();
    // suresh.print();


    // Hero p1;
    // Hero *p2 = new Hero();
    // p2->setName("Risab");
    // delete p2; // destructor called

    // static member
    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    
    return 0;
}
