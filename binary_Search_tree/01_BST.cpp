#include<bits/stdc++.h>
using namespace std;

class  node{
public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }  
};

node* insertIntoBST(node* root,int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }

    if(root->data < data){
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
           cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }     
        }
        
    }
}

int main(){
    node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    cout<<"Printing the levelorder traversal of the tree: "<<endl;
    levelOrderTraversal(root);
    return 0;
}