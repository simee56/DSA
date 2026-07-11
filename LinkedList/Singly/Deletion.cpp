// Delete the first node of a Linked List
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a node's value
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Recursively builds a list from arr[index..n-1]
Node *CreateList(vector<int> &arr, int n, int index)
{
    // Base case: no elements left to add
    if (index == n)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateList(arr, n, index + 1);

    return temp;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n == 0)
    {
        cout << "List is empty, nothing to delete." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Head initially points to nothing
    Node *Head = NULL;

    // CreateList returns the address of the first node -> store it in Head
    Head = CreateList(arr, n, 0);

    // Print the list
    Node *printNode = Head;
    cout << "The list is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;

    // ---- Delete the first node of the list ----
    // Only attempt deletion if the list is non-empty.
    if (Head != NULL)
    {
        Node *tempNode = Head; // tempNode stores the address that Head contains
        Head = Head->next;     // move Head to the second node (or NULL if there was only one)
        delete tempNode;       // free the memory of the old first node
    }

    // Print the list after deletion
    printNode = Head;
    cout << "The list after deleting the first node is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;
}

// Delete the last node of a Linked List
#include <iostream>
#include <vector>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    // Constructor to initialize a node's value
    NODE(int value)
    {
        data = value;
        next = NULL;
    }
};

// Recursively builds a list from arr[index..n-1]
NODE *CreateList(vector<int> &arr, int n, int index)
{
    if (index == n)
        return NULL;

    NODE *newNode = new NODE(arr[index]);
    newNode->next = CreateList(arr, n, index + 1);

    return newNode;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n == 0)
    {
        cout << "List is empty, nothing to delete." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    NODE *Head = NULL;
    Head = CreateList(arr, n, 0);

    // Print the list
    NODE *printNode = Head;
    cout << "The list is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;

    // ---- Delete the last node of the list ----
    // Only attempt deletion if the list is non-empty.
    if (Head != NULL)
    {
        if (Head->next == NULL)
        {
            // only one node -> deleting it empties the list
            delete Head;
            Head = NULL;
        }
        else
        {
            NODE *Tail = Head; // will end up at the SECOND-LAST node
            NODE *temp = Head; // will end up at the LAST node

            // Stop as soon as temp->next is NULL, i.e. temp is the last node.
            while (temp->next != NULL)
            {
                Tail = temp;
                temp = temp->next;
            }

            Tail->next = NULL; // second-last node becomes the new last node
            delete temp;       // free the actual last node
        }
    }

    // Print the list after deletion
    printNode = Head;
    cout << "The list after deleting the last node is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;
}


//Deleting a node of a particuolar index ->Using Recusrion
#include <iostream>
#include <vector>
using namespace std;

class deleteNode
{
public:
    int data;
    deleteNode *next;

    // Constructor to initialize a node's value
    deleteNode(int value)
    {
        data = value;
        next = NULL;
    }
};

// Recursively builds a list from arr[index..n-1] 
deleteNode *CreateList(vector<int> &arr, int n, int index)
{
    if (index == n)
        return NULL;

    deleteNode *newNode = new deleteNode(arr[index]);
    newNode->next = CreateList(arr, n, index + 1);

    return newNode;
}

// Recursively deletes the node at 0-based position "index" from the list
deleteNode *DeleteNode(deleteNode *Head, int index)
{
    // Base case: reached the end of the list without finding the index
    // (e.g. index was out of range) -> nothing left to do
    if (Head == NULL)
        return NULL;
 
    // Base case: this IS the node to delete
    if (index == 0)
    {
        deleteNode *temp = Head;
        Head = Head->next;  // skip over the node being deleted
        delete temp;        // free it
        return Head;        // this becomes the new head of THIS sublist
    }
 
    // Otherwise, keep this node and recurse into the rest of the list,
    // looking for position (index - 1) starting from Head->next.
    Head->next = DeleteNode(Head->next, index - 1);
    return Head;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n == 0)
    {
        cout << "List is empty, nothing to delete." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int index;
    cout << "Enter the index of the node you want to delete (0-based) : ";
    cin >> index;
    
    deleteNode *Head = NULL;
    Head = CreateList(arr, n, 0);

    // Print the list
    deleteNode *printNode = Head;
    cout << "The list is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;

    Head = DeleteNode(Head, index);

    // Print the list after node deletion
    printNode = Head;
    cout << "The list is: ";
    while (printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
    cout << endl;
}