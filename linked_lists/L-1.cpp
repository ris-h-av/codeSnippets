#include<bits/stdc++.h>
using namespace std;

/*
    Linked list: linear data structure 
    collection of nodes & node contains data and reference to the next node
    It is a dynamic data structure 
    can grow or shrink in size during execution of the program
    no shifting needed for insertion or deletion
*/

// node structure
class node{ // this is a class of 'node' type
    public:
    int data;
    node *next;

    // constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node* insertAtHead(node* &head,int data){
    node *temp = new node(data);
    temp->next = head;
    head = temp;
    return head;
}

node* insertAtTail(node* &tail, int data) {
    node* temp = new node(data);
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
    return tail;
}

void insertAtPosition(node* &head,node* &tail,int position,int data){
    // if position is 1 then insert at head
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    node *temp = head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(node* &head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // creating nodes
    // node *newNode = new node(10); // creating a new node
    // cout<<newNode->data<<endl;

    // inesrting at head

    // node *head=NULL;
    // insertAtHead(head,10);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,14);
    // print(head);

    // inserting at tail

    // node *head = NULL;
    // node *tail = NULL;
    // head=insertAtTail(tail,10);
    // insertAtTail(tail,20);
    // insertAtTail(tail,30);
    // insertAtTail(tail,40);
    // print(head);

    // inesrt ad position
    node *head=NULL;
    node *tail=NULL;
    head = insertAtTail(tail,10);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    print(head);
    insertAtPosition(head,tail,4,25);
    print(head);   
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}
