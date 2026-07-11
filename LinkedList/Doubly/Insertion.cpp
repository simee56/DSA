// Insertion of a node at the starting
#include<iostream>
#include<vector>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* prev; //This will store the address of the previous node
    ListNode* next; //This will store the address of the next node

    ListNode(int value) 
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main()
{   
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    if(n == 0)
    {
        cout<<"This list is empty.";
        return 0;
    }
    
    vector<int>arr(n);
    for(int i =0; i < n ;i++)
    cin>>arr[i];

    ListNode* Head = NULL;

    for(int i = 0; i < n; i++)
    {
        ListNode* newNode = new ListNode(arr[i]);
        if(Head == NULL)
            Head = newNode;
        else 
        {
            newNode->next = Head;
            Head->prev = newNode;
            Head = newNode;
        }
    }
    // Print hte elemnts
    ListNode* printNode = Head;
    while(printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
}

// Insertion of the node at the end
#include<iostream>
#include<vector>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* prev; //This will store the address of the previous node
    ListNode* next; //This will store the address of the next node

    ListNode(int value) 
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main()
{   
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    if(n == 0)
    {
        cout<<"This list is empty.";
        return 0;
    }
    
    vector<int>arr(n);
    for(int i =0; i < n ;i++)
    cin>>arr[i];

    ListNode* Head = NULL;
    ListNode* Tail = Head; 

    for(int i = 0; i < n; i++)
    {
        ListNode* newNode = new ListNode(arr[i]);    
        // If list doesnt exist
        if(Head == NULL)
        {
            Head = newNode;
            Tail = Head;
        }
        
        // If List exists
        else 
        {
            Tail->next = newNode;
            newNode->prev = Tail;
            Tail = newNode;
        }
    }
    // Print hte elemnts
    ListNode* printNode = Head;
    while(printNode)
    {
        cout << printNode->data << " ";
        printNode = printNode->next;
    }
}


// Insertion of a node at a particular index - Using recursion
#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public :
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    Node(int value)
    {
        data = value;
        this->prev =  prev;
        this->next =  next;
    }
};

// Firstly create the list
Node* CreateList(vector<int> &arr, int index, int size, Node* previous)
{
    if(index == size)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = previous;

    newNode->next = CreateList(arr, index + 1, size, newNode);
    return newNode;
}

// Insert the node
Node* insertNode(Node* head, int k, int value)
{
    // Base case: insert here
    if (k == 1)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        return newNode;   // this becomes the new head of this sublist
    }

    // Recursive case: insert further down the list
    head->next = insertNode(head->next, k - 1, value);
    head->next->prev = head;   
    return head;
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
    
    int k, value;
    cout << "Enter the position you want to insert the new node = ";
    cin >> k;
    cout<<"Enter the value you want to insert = ";
    cin >> value;

    Node* Head = CreateList(arr, 0, n, NULL);
    Head = insertNode(Head, k, value);

    // Print the elements of the list.
    Node* printValues = Head;
    while(printValues)
    {
        cout << printValues->data << " ";
        printValues = printValues->next;
    }
}
