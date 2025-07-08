#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* &root,int data){
    // base case
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(data<root->data){
        root->left = insertIntoBST(root->left,data);
    }
    if(data>root->data){
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while (data!=-1)
    {
        root = insertIntoBST(root,data);
        cin>>data;
    }
}


int minVal(Node* root){
    if(root==NULL){
        return -1;
    }
    Node* temp = root;
    while (temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxVal(Node* root){
    if(root==NULL){
        return -1;
    }
    Node* temp = root;
    while (temp->right!=NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node* deleteNode(Node* root, int val){
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

        // left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            // now u can choose either min val from right subtree or max val from left subtree
            int min = minVal(root->right);
            root->data = min;
            root->right = deleteNode(root->right, min);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteNode(root->left,val);
        return root;
    }
    else{
        root->right = deleteNode(root->right,val);
        return root;
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;

    cout<<"Enter data to create BST: ";
    takeInput(root);
    inorder(root); // Inorder traversal of a binary tree is sorted
    // cout<<"Minimum value in the BST: "<<minVal(root)<<endl;
    // cout<<"Maximum value in the BST: "<<maxVal(root)<<endl;
    cout<<endl<<"After deleting a node: "<<endl;
    deleteNode(root,10);
    inorder(root);
    return 0;
}