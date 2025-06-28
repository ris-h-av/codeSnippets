#include<iostream>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* MakeTree(node* root){
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for the left of "<<root->data<<endl;
    root->left = MakeTree(root->left);
    cout<<"Enter data for the right of "<<root->data<<endl;
    root->right = MakeTree(root->right);

    return root;
}

void PreOrderNonRecursive(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> s;
    s.push(root);

    while(!s.empty()){
        node* temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right !=NULL){
            s.push(temp->right);
        }
        if(temp->left != NULL){
            s.push(temp->left);
        }
    }
}

void PostOrderNonRecursive(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> s;
    node* previous = nullptr;
    do{
        while(root!=nullptr){
            s.push(root);
            root=root->left;
        }
        while(root==nullptr && !s.empty()){
            root = s.top();
            if(root->right==nullptr || root->right==previous){
                cout<<root->data<<" ";
                s.pop();
                previous=root;
                root=nullptr;
            }
            else{
                root=root->right;
            }
        }
    }while(!s.empty());
}

int main(){
    node* root = NULL;
    root = MakeTree(root);
    cout<<"Pre-order non-recursive order: ";
    PreOrderNonRecursive(root);
    cout<<"Post-order non-recursive order: ";
    PostOrderNonRecursive(root);
    return 0;
}