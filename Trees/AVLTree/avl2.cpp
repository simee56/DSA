#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    int height;
    Node* left, *right;

    Node(int val) {
        data = val;
        height = 1;
        left = right = NULL;
    }
};

// Function to calculate the height of the root
int getHeight(Node* root)
{
    if(!root) return 0;
    return root->height;
};

// Function to check the balance factor -> height(left) - height(right)
int getBalance(Node* root)
{
    if (!root) return 0;
    return getHeight(root->left) - getHeight(root->right);
}

// Function for LeftRotation
Node* LeftRotation(Node* root)
{
    Node* child = root->right;
    Node* childLeft =child->left;

    child->left = root;
    root->right = childLeft;

    // Update the heights
    root->height =  1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}

// Function for RightRotation
Node* RightRotation(Node* root)
{
    Node* child = root->left;
    Node* childRight = child->right;

    child->right = root;
    root->left = childRight;

    // Update the heights
    root->height =  1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}


// Function to insert a new node into the tree
Node* insertNode(Node* root, int key)
{
    if(!root) return new Node(key);

    if(key < root->data)
    root->left = insertNode(root->left, key);

    else if(key > root->data)
    root->right = insertNode(root->right, key);

    else 
    return root;  // Duplicates values are not allowed

    // Update root's height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Check if it is balanced
    int balance = getBalance(root);

    if(balance > 1 && key < root->left->data)  // Leftsubtree is not balanced (Left Left case)
    return LeftRotation(root); 

    else if(balance > 1 && key > root->left->data)   // Leftsubtree isnt balanced (Left Right case)
    {
        root->left = LeftRotation(root->left); 
        return RightRotation(root); 
    }

    else if(balance < -1 && key > root->right->data)  // Rightsubtree is not balanced (Right Right case)
    return RightRotation(root); 

    else if(balance < -1 && key < root->right->data)   // Rightsubtree isnt balanced (Right Left  case)
    {
        root->right = RightRotation(root->right); 
        return LeftRotation(root); 
    }

    else    // The Tree is already balanced
    return root;
}

Node* deleteNode(Node* root, int key)
{
    if(!root) return NULL;

    if(key < root->data)
    root->left = deleteNode(root->left, key);

    else if(key > root->data)
    root->right = deleteNode(root->right, key);

    else
    {
        // If the key is leaf node
        if(!root->left && !root->right) {
            delete root;
            return NULL;
        }
        // If only one child exists
        else if(root->left && !root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(!root->left && root->right) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // If both children exist
        else {
            // Get the smallest elemnet from the right side
            Node* current = root->right;

            while(current->left)
            current = current->left;

            root->data = current->data;
            root->right = deleteNode(root->right, root->data);
        }
    }

    // Update Height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Check if it is balanced
    int balance = getBalance(root);

    // Left Left / Left Right case
    if(balance > 1)  
    {
        if(getBalance(root->left) >= 0)
        return RightRotation(root);

        else {
            root->left = LeftRotation(root->left);
            return RightRotation(root);
        }
    }
    // Right Right / Right Left case
    else if(balance < -1)
    {
        if(getBalance(root->right) <= 0)
        return LeftRotation(root);

        else {
            root->right = RightRotation(root->right);
            return LeftRotation(root);
        }
    }
    else
    return root;
}

void Inorder(Node* root)
{
    if (!root) return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    Node* root = NULL;
    int n;
    cout << "Enter the value of nodes : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter value " << i + 1 << " : ";
        cin >> val;
        root = insertNode(root, val);
    }

    cout << "Inorder traversal of the AVL tree is : ";
    Inorder(root);
    cout << endl;
    
    int key;
    cout << "Enter the value to delete : ";
    cin >> key;
    root = deleteNode(root, key);

    cout << "Inorder traversal after deletion is : ";
    Inorder(root);
    cout << endl;

    return 0;
}