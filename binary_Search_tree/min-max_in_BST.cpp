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

node* minVal(node *root){
    if(root == NULL){
        return root;
    }
    node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

node* maxVal(node *root){
    if(root == NULL){
        return root;
    }
    node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

int main(){
    node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    
    node* min = minVal(root);
    node* max = maxVal(root);
    cout<<"Min value in the BST: "<<min->data<<endl;
    cout<<"Max value in the BST: "<<max->data;
    return 0;
}


// try to find the Inorder predecessor and successor in BST 