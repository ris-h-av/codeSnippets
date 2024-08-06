#include <bits/stdc++.h>
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

int main() {
	// your code goes here
	
	node* root = NULL;
	
	// creating a tree
	root = buildTree(root);
}

