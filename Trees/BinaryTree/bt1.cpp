#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    queue<Node*> q;
    int root, left, right;

    // Initialization - create the root node
    cout << "Enter the root element : ";
    cin >> root;

    // Build the complete binary tree
    Node *temp = new Node(root);
    q.push(temp);

    while(!q.empty())
    {   
        Node *temp = q.front();
        q.pop();

        // For the left child
        cout << "Enter the left child of " << temp->data <<" :";
        cin >> left;

        if(left != -1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }

        // For the Right child
        cout << "Enter the right child of " << temp->data <<" :";
        cin >> right;

        if(right != -1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }
}