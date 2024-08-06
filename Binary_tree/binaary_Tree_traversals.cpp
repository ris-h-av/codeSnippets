#include <bits/stdc++.h>
using namespace std;

class  node{
public:
    int data;
    node* left;
    node* right;
    
    node(int d){        // node constructor
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    
    
};
// constructing tree

node* buildTree(node* root){
        cout<<"enter data "<<endl;
        int data;
        cin>>data;
        
        root = new node(data);
        if(data == -1){
            return NULL;
        }
        cout<<"enter data for left node of "<<data<<endl;
        root->left = buildTree(root->left);
        cout<<"enter data for right node of "<<data<<endl;
        root->right = buildTree(root->right);
        
        return root;
}

// Level order traversal
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

void inorderTraversal(node* root){   // LNR (left-node-right)
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(node* root){  // NLR (node-left-right)
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node* root){  // LRN (left-right-node)
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main() {
	// your code goes here
	
	node* root = NULL;
	
	// creating a tree
	root = buildTree(root);
	
    // cout<<"Level Order traversal of the tree is : "<<endl;
    // levelOrderTraversal(root);

    // cout<<" InOrder traversal of the tree is : "<<endl;
    // inorderTraversal(root);

    // cout<<" PreOrder traversal of the tree is : "<<endl;
    //preorderTraversal(root);

    cout<<" PostOrder traversal of the tree is : "<<endl;
    postorderTraversal(root);
}   

