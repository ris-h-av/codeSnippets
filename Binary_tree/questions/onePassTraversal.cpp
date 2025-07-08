#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<vector<int>> treeTraversal(node *root)
{
    // your code goes here
    stack<pair<node *, int>> s;
    if (root != nullptr)
        s.push({root, 1});
    vector<int> pre, ino, post;

    while (!s.empty())
    {
        auto &ptr = s.top();
        node *node = ptr.first;
        int &order = ptr.second;

        if (order == 1)
        {
            pre.push_back(node->data);
            order++;
            if (node->left != nullptr)
            {
                s.push({node->left, 1});
            }
        }
        else if (order == 2)
        {
            ino.push_back(node->data);
            order++;
            if (node->right != nullptr)
            {
                s.push({node->right, 1});
            }
        }
        else{
                post.push_back(node->data);
                s.pop();
            }
    }
    return {pre, ino, post};
}

node *buildTree(node *root)
{
    cout << "enter data " << endl;
    int data;
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for left node of " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for right node of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void printVector(vector<int> land){
    cout<<"[";
    for(int i=0;i<land.size();i++){
        cout<<land[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main()
{
    // your code goes here

    node *root = NULL;

    // creating a tree
    root = buildTree(root);

    vector<vector<int>> land = treeTraversal(root);
    for(int i=0;i<land.size();i++){
        printVector(land[i]);
    }
    return 0;
}
