#include<bits/stdc++.h>
using namespace std;

// polymorphism : one name, multiple forms
// compile time polymorphism : function overloading, operator overloading
// run time polymorphism : function overriding, virtual functions


// function overloading : same function name but different parameters
class A{
    public:
    void sayHello(){
        cout<<"Hello from A"<<endl;
    }

    int sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

    void sayHello(string name,string title){
        cout<<"Hello "<<name<<title<<endl;
    }
};


// operator overloading : allows developers to redefine or "overload" the behavior of operators for user-defined types (such as     classes or structs). This provides a way to make operators work with objects in a manner similar to primitive types.

class B{
    public:
    int a;
    int b;  
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout<<"output  "<<value2-value1<<endl;
    }
};

// Run time polymorphism : allows a function to be overridden in a derived class(It is based on iheritance)
/*rules for function overriding: function name shoukd be same as the base class function,
                                return type should be same as the base class function,
                                parameter list should be same as the base class function,
*/

class Animal{
    public:
    void speak(){
        cout<<"Animal speaks"<<endl;
    }
};

class dog: public Animal{
    public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    // A obj;
    // obj.sayHello();
    // obj.sayHello("Rishav");
    // obj.sayHello("Rishav","Kumar");

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 10;

    // obj1 + obj2;

    dog obj;
    obj.speak();
    return 0;
}