// Insertion of the node at the starting
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

//Creation of a doubly linked list
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

//Creation of a doubly linked list
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