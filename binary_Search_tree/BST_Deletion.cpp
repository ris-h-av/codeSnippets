#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

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
    if(root->data > data){
        root->left = insertIntoBST(root->left,data);
    }
    else{
        root->right = insertIntoBST(root->right,data);
    }
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
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

node* deleteFromBST(node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data == val){
        // 3 cases: 0 child, 1 child, 2 child

        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 child (left child)
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        // 1 child (right child)
        if(root->left==NULL && root->right!=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data; // you can take minimum value from either right subtree or the left subtree
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }else if(root->data > val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}

int main(){
    node* root= NULL;
    cout<<"Enter data for BST: ";
    takeInput(root);
    cout<<"BST before deletion of node "<<endl;
    LevelOrderTraversal(root);
    root = deleteFromBST(root,7);
    cout<<"BST after deletion of node "<<endl;
    LevelOrderTraversal(root);
    return 0;
}