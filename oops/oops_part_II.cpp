#include<bits/stdc++.h>
using namespace std;

/*
    ******** PILLARS OF OOPS ********
    1. Encapsulation(Information hiding/ data hiding) : wrapping up of data and functions into a single unit
        Full encapsulation : all the data members are private
        Advantage : data hiding
                    if we want, we can make class "read-only" or "write-only"
                    code reusability

    2. Inheritance : one class acquires the properties of another class
        Base class/ parent class : the class whose properties are inherited
        Derived class/ sub class/ child class : the class that inherits the properties of the base class
        private data member of any base class is not inherited in the derived class
        Types of inheritance : single, multiple, multilevel, hierarchical, hybrid
    
    3. Polymorphpism: one name, multiple forms
        Compile time polymorphism : function overloading, operator overloading
        Run time polymorphism : function overriding, virtual functions
*/

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
    int getHeight(){
        return height;
    }
};

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getWeight(){
        return this->weight;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"This male is sleeping"<<endl;
    }
};

int main(){
    Student s1;
    
    Male m1;
    cout<<m1.height<<endl;
    m1.sleep();
   
    return 0;
}