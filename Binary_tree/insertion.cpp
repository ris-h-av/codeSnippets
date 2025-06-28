#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* BuildTree(node *root)
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for the left of " << data <<endl;
    root->left = BuildTree(root->left);
    cout << "Enter data for the right of " << data <<endl;
    root->right = BuildTree(root->right);

    return root;
}

node *InsertNode(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    // else do a level order traversal until you find an empty space
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = new node(data);
            return root;
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right = new node(data);
            return root;
        }
    }
}

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data<<" ";
    Inorder(root->right);
}

int main()
{
    node *root = NULL;
    root = BuildTree(root);
    cout << "Inorder traversal before insertion: ";
    Inorder(root);
    root = InsertNode(root, 12);
    cout << "Inorder traversal after inertin: ";
    Inorder(root);
}