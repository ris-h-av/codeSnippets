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
// constructiing tree

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

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"enter data for the root element :";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())  
    {
        node* temp = q.front();
        q.pop();
        cout<<"enter data for left node of "<<temp->data;
        int ldata;
        cin>>ldata;
        if(ldata !=-1){
            temp->left = new node(ldata);
            q.push(temp->left)   ;
        }
        cout<<"enter data for right node of "<<temp->data;
        int rdata;
        cin>>rdata;
        if(rdata!=-1){
            temp->right = new node(rdata);
            q.push(temp->right);
        }
        
    }
    
}


int main() {
	// your code goes here
	
	node* root = NULL;
	
	// creating a tree
	// root = buildTree(root);

    // creating a tree from the given Level order traversal
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
	
}   

