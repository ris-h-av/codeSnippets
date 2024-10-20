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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int left_height= height(root->left);
    int right_height = height(root->right);

    int ans = max(left_height,right_height) + 1;

    return ans;
}

int main() {
	// your code goes here
	
	node* root = NULL;
	
	// creating a tree
	root = buildTree(root);

    cout<<"Height of the tree is: "<<height(root);

}