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

node *buildTree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "data for inserting in left : " << data << endl;
    root->left = buildTree(root->left);

    cout << "data for inserting in right : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

/*
L = left
N = node
R = right

*/

void inOrder(node *root) // LNR
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
    // output : 7 3 11 1 17 5
}

void preOrder(node *root) // NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    // output : 1 3 7 11 5 17
}

void postOrder(node *root) // LRN
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
    // output : 7 11 3 17 5 1
}

int main()
{
    node *root = NULL;

    // creating a Tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelOrderTraversal(root);

    cout << "inOrder Traversal is : ";
    inOrder(root);
    cout << endl;

    cout << "preOrder Traversal is : ";
    preOrder(root);
    cout << endl;

    cout << "PostOrder Traversal is : ";
    postOrder(root);
    cout << endl;

    return 0;
}