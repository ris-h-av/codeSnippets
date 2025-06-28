#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node*right;

        node (int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* MakeTree(node* root){
    int data;
    cout<<"Enter data for the node: ";
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for the left of "<<data<<endl;
    root->left = MakeTree(root->left);
    cout<<"Enter data for the right of "<<data<<endl;
    root->right = MakeTree(root->right);

    return root;
}

// using tree traversal to print the tree

void Inorder(node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node* root){
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void LevelOrderTraverssal(node* root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
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

int height(node* root){
    if(root==NULL)
        return -1;
    int lefHeight = height(root->left);
    int rightHeight = height(root->right);
    int height = max(lefHeight,rightHeight) + 1;
}

int main(){
    node* root = NULL;
    root = MakeTree(root);
    // cout<<"Printitng Inorder traversal: ";
    // Inorder(root);
    // cout<<endl;
    // cout<<"Printing Preorder traversal: ";
    // Preorder(root);
    // cout<<endl;
    // cout<<"Printing Postorder traversal: ";
    // Postorder(root);
    // cout<<endl;
    // cout<<"Printing Level order traversal: "<<endl;
    // LevelOrderTraverssal(root);

    cout<<"height of the tree is: "<<height(root);
}