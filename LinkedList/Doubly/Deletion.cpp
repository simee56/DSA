// Deletion of the first node
#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Creation of the linked list
Node* CreateList(vector<int> &arr, int size, int index, Node* previous)
{
    if(index == size)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = previous;

    newNode->next = CreateList(arr, size, index + 1, newNode);
    return newNode;
}

int main()
{   
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    if(n == 0)
    {
        cout << "The list is empty.";
        return 0;
    }

    vector<int>arr(n);
    cout << "Enter the elements of the array = ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 

    Node* Head  = NULL;
    Head =  CreateList(arr, n, 0, NULL);

    if(Head == NULL)
    {
        cout << "List is empty element can t be deleted.";
        return 0;
    }
    else
    {   
        // If there's only one node.
        if(Head->next == NULL)
        {
            delete Head;
            Head = NULL;
            cout << "The element is deleted.";
        }

        // If There're more than one node.
        else
        {
            Node* temp = Head;
            Head = Head->next;
            Head->prev = NULL;
            delete temp;
        }
    }
    // Print the elements of the list.
    Node* printValues = Head;
    while(printValues)
    {
        cout << printValues->data << " ";
        printValues = printValues->next;
    }
}


// Deletion of the Last node
#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Creation of the linked list
Node* CreateList(vector<int> &arr, int size, int index, Node* previous)
{
    if(index == size)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = previous;

    newNode->next = CreateList(arr, size, index + 1, newNode);
    return newNode;
}

int main()
{   
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    if(n == 0)
    {
        cout << "The list is empty.";
        return 0;
    }

    vector<int>arr(n);
    cout << "Enter the elements of the array = ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 

    Node* Head  = NULL;
    Head =  CreateList(arr, n, 0, NULL);

    if(Head == NULL)
    {
        cout << "List is empty element can t be deleted.";
        return 0;
    }
    else
    {   
        // If there's only one node.
        if(Head->next == NULL)
        {
            delete Head;
            Head = NULL;
            cout << "The element is deleted.";
        }

        // If There're more than one node.
        else
        {
            Node* temp = Head;
            while(temp->next != NULL)
            temp = temp->next;

            temp->prev->next = NULL;
            delete temp;
        }
    }
    // Print the elements of the list.
    Node* printValues = Head;
    while(printValues)
    {
        cout << printValues->data << " ";
        printValues = printValues->next;
    }
}


// Deletion of the particular element
#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Creation of the linked list
Node* CreateList(vector<int> &arr, int size, int index, Node* previous)
{
    if(index == size)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = previous;

    newNode->next = CreateList(arr, size, index + 1, newNode);
    return newNode;
}


int main()
{   
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    if(n == 0)
    {
        cout << "The list is empty.";
        return 0;
    }

    vector<int>arr(n);
    cout << "Enter the elements of the array = ";
    for (int i = 0; i < n; i++)
    cin >> arr[i]; 

    int k;
    cout << "Enter the the index of the node you want to delete the = ";
    cin >> k;

    Node* Head  = NULL;
    Head =  CreateList(arr, n, 0, NULL);

    if(Head == NULL)
    {
        cout << "List is empty element can t be deleted.";
        return 0;
    }
    else
    {   
        // If there's only one node.
        if(Head->next == NULL)
        {
            delete Head;
            Head = NULL;
            cout << "The element is deleted.";
        }

        // If There're more than one node.
        else
        {
            Node* temp = Head;
            // If you want to delete any of the middle element.
            while(--k)
            temp = temp->next;
            temp->prev->next = temp->next;
            delete temp;
        }
    }
    // Print the elements of the list.
    Node* printValues = Head;
    while(printValues)
    {
        cout << printValues->data << " ";
        printValues = printValues->next;
    }
}


// Deletion of the a node using recursion
#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public :
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        this->prev = NULL;
        this->next =  NULL;
    }
};

// Creation of Linked list
Node* CreateList(vector<int> &arr, int size, int index, Node* previous)
{
    if(index == size)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = previous;
    newNode->next = CreateList(arr, size, index + 1, newNode);
    return newNode;
}

// Deletion of a node 
Node* DeleteNode(Node* head, int k)
{
    // Edge case: empty list (also the base case that stops recursion
    // when k goes past the end of the list)
    if(head == NULL)
        return NULL;
 
    // Base case: this is the node to delete
    if(k == 0)
    {
        Node* newNext = head->next;
 
        if(newNext != NULL)
            newNext->prev = NULL;   
 
        delete head;                
        return newNext;             
    }
 
    // Recursive case: not this node, keep walking, then re-link on the way back up
    head->next = DeleteNode(head->next, k - 1);
 
    if(head->next != NULL)
        head->next->prev = head;    
 
    return head;
}
 
int main()
{
    int n;
    cout << "Enter the size = ";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter the elements of the array = ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    Node* Head = CreateList(arr, n, 0, NULL);

    int k;
    cout << "Enter the index of the element you want to delete = ";
    cin >> k;

    if(k > n || k < 0)
    {
        cout << "Index isn't found";
        return 0;
    }
}
