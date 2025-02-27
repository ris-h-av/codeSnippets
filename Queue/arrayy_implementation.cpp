#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int front,rear;
    int size;
    int *arr;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = rear = 0;
    }

    ~Queue(){
        delete[] arr;
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(rear == size){
            return true;
        }
        return false;
    }

    void enQueue(int data){
        if(isFull()){
            cout<<"Overflow!"<<endl;
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void deQueue(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            front = rear = 0;
            return;
        }
        cout<<arr[front]<<" dequeued"<<endl;
        arr[front] = -1;
        front++;
    }

    int getFront(){
        if(isEmpty())   return -1;
        return arr[front];
    }
    int getRear(){
        if(isEmpty()) return -1;
        return arr[rear-1];
    }
    int getSize(){
        if(isEmpty()) return 0;
        return (rear-front);
    }
};

int main(){
    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(69);
    q.enQueue(6); // will throw overflow
    cout<<"Front: "<<q.getFront()<<endl;
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Size: "<<q.getSize()<<endl;
    cout<<"rear: "<<q.getRear()<<endl;

    cout<<"Front: "<<q.getFront()<<endl;
    cout<<q.front<<" "<<q.rear;
    return 0;
}