#include<bits/stdc++.h>
using namespace std;

/*
Stack is a data structure that follows LIFO (last in first out) order
Stack operations: push(insertion), pop(remove), peek(seeing the top element), isEmpty() returns a bool value
*/

// stack implementaion without using STL
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void Push(int data){
        if(size-top > 1){
            top++;
            arr[top]=data;
        }else{
            cout<<"stack overflow!"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack underflow"<<endl;
            return -1; 
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    // creation of stack
    // stack<int> q;

    // // insertion (push)
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // // peek 
    // cout<<q.top()<<endl;

    // // pop
    // q.pop();
    // cout<<q.top()<<endl;

    // if(q.empty()){
    //     cout<<"stack is empty!"<<endl;
    // }else{
    //     cout<<"stack is not empty"<<endl;
    // }
    // cout<<"size of stack is :"<<q.size()<<endl;

    Stack s(4);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}