#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;  
        this->prev = NULL;
    }
};

// insertion at head
node* insertAthead(node * &head,int data){
    node* temp = new node(data);
    if(head==NULL){
        head=temp;
        return head;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

// insertion at tail
void insertAtTail(node *&head, int data){
    node* temp=head;
    if(head==NULL){
        head=new node(data);
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* nodeToInsert = new node(data);
    nodeToInsert->prev=temp;
    temp->next=nodeToInsert;
}

// insertion at any position

void insertAtPosition(node* &head,int position,int data){
    if(position==1){
        insertAthead(head,data);
        return;
    }   
    node* temp = head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;    
    }
    if(temp->next==NULL){
        insertAtTail(head,data);
        return;
    }
    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
    temp->next->prev = nodeToInsert;
    return;
}

void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node *head=NULL;
    // insertAthead(head,1);
    // insertAthead(head,2);
    // print(head);
    // insertAtTail(head,3);
    // print(head);
    // insertAtPosition(head,1,4);
    // print(head);
    insertAtPosition(head,1,1);
    print(head);
    insertAtTail(head,2);
    print(head);
    insertAtPosition(head,3,3);
    print(head);
    return 0;
}