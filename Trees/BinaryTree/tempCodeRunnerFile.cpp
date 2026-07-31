
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

// Function to create nodes 
Node *BinaryTree()
{
    int x;
    cin>>x;

    if(x == -1)
    return NULL;

    Node *current = new Node(x);

    // Create the lest child
    cout << "Enter the left child of " << current->data <<" :";
    current->left = BinaryTree();

    // Create the right child
    cout << "Enter the right child of " << current->data  <<" :";
    current->right =  BinaryTree();
    return current;
}

int main()
{
    cout<<"Enter the root node : ";
    Node *root = BinaryTree();
}