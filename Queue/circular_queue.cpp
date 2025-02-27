#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
public:
    int size;
    int front,rear;
    int *arr;
    CircularQueue(int size){
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    ~CircularQueue(){
        delete[] arr;
    }

    bool isFull(){
        if(((rear+1)%size == front)){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        return false;
    }

    void enQueue(int data){  
        if(isFull()){
            cout<<"Overflow!"<<endl;
            return;
        }else if(isEmpty()){
            front = rear = 0;
        }else{
            rear = (rear+1)%size;
        }
        arr[rear] = data;
        cout<<data<<" enqueud"<<endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Underflow!!"<<endl;
            return;
        }else if(front==rear){
            front=rear=-1;
        }else{
            cout<<arr[front]<<" dequed"<<endl;
            front = (front+1)%size;
        }
    }
    int getFront(){
        return isEmpty()? -1 : arr[front];
    }
    int getRear(){
        return isEmpty()? -1 : arr[rear];
    }
};

int main(){
    CircularQueue q(5);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    // q.enQueue(7);
    q.dequeue();
    q.enQueue(89);
    cout<<"Front "<<q.front<<" Rear "<<" "<<q.rear;
    return 0;
}