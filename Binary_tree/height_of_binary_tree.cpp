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

    int left_height = height(root->left);
    int right_height = height(root->right);

    int height = max(left_height,right_height) + 1;

    return height;
}

 pair<bool,int> isBalancedFast(node* root){
        if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        
        bool l = left.first;
        bool r = right.first;
        bool hDiff = abs(left.second - right.second) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second,right.second) + 1;
        if(l && r && hDiff){
            ans.first = true;
        }
        else{
            ans.second = false;
        }
        
        return ans;
}
/*
 Given a binary tree, find if it is height balanced or not. 
 A tree is height balanced if difference between heights of left and right subtrees 
 is not more than one for all nodes of tree. 

*/
bool isBalanced(node *root){
    return isBalancedFast(root).first;
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    cout<<"height is "<<height(root);

    isBalanced(root)? cout<<"Balanced" : cout<<"Not balanced";
    return 0;
}