#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size]; // allocating memory for the stack
        top=-1; 
    }
    
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            std::cout << "Stack overflow" << std::endl;
        }
    }
    
    void pop(){
        if(top>-1){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    
    int peek(){
        if(top>=0 && top<size){
            return arr[top];    
        }
        else{
            cout<<"Stack is empty"<<endl;
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

int main() {
	// your code goes here
    Stack s(5);
    
    s.push(69); // 0
    s.push(89); // 1
    s.push(99); // 2
    s.push(19); // 3
    s.push(29); // 4
    // s.push(12); // size - top = 1 !> 1 stack overflow
    int top = s.peek();
    cout<<top<<endl;
    cout<<s.isEmpty();
}
