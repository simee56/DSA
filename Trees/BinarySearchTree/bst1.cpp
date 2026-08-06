// Creartion of a BST using an array
#include<iostream>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* left, *right;

    TreeNode(int value)
    {
        data = value;
        left = right = NULL;
    }
};

TreeNode* createBST(TreeNode* root, int target)
{
    if(!root)
    {
        TreeNode* node = new TreeNode(target);
        return node;
    }

    if(target < root ->data)
    root ->left = createBST(root->left, target);

    else
    root->right = createBST(root->right, target);

    return root;
}

void inorder(TreeNode* root)
{
    if(!root) return;

    inorder(root->left);       // Go to the left side
    cout << root->data<<" ";   // Print the node's value
    inorder(root->right);      // Go to the right side
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int arr[100];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    TreeNode* root = NULL;
    
    for(int i = 0; i < n; i++)
    root = createBST(root, arr[i]);

    // Traverse the Tree
    inorder(root);
}