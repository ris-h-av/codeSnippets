#include<bits/stdc++.h>
using namespace std;

/*
    Linked list: linear data structure 
    collection of nodes & node contains data and reference to the next node
    It is a dynamic data structure 
    can grow or shrink in size during execution of the program
    no shifting needed for insertion or deletion
    Types of linked list: singly, doubly, circular, doubly circular
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

    ~node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory freed for "<<value<<endl;
    }
};

// inserting at head
node* insertAtHead(node* &head,int data){
    node *temp = new node(data);
    temp->next = head;
    head = temp;
    return head;
}

// inserting at tail
node* insertAtTail(node* &tail, int data) {
    node* temp = new node(data);
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
    return tail;
}

// inserting at any position
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

// deleting node
void deletenode(node* &head,node* &tail,int position){
    if(position==1){
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        // deleting any middle or last node
        node *prev=NULL;
        node *curr=head;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL){
            tail=prev;
            prev->next=NULL;
            delete curr;
            return;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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

    node *head = NULL;
    node *tail = NULL;
    head=insertAtTail(tail,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtTail(tail,40);
    print(head);

    // inesrt at any position
    // node *head=NULL;
    // node *tail=NULL;
    // head = insertAtTail(tail,10);
    // insertAtTail(tail,20);
    // insertAtTail(tail,30);
    // print(head);
    // insertAtPosition(head,tail,4,25);
    // print(head);   
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;


    // node deletion : 
    // node *head=NULL;
    // node *tail=NULL;
    // head = insertAtTail(tail,10);
    // insertAtTail(tail,20);
    // insertAtTail(tail,30);
    // insertAtTail(tail,40);
    // print(head);

    // deletenode(head,tail,3);
    // print(head);
    // cout<<tail->data<<endl;

    return 0;
}
