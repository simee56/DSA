// Creation of a doubly linked list
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev; //prev will store the address of ther previous node
    Node* next; //next will store the address of the next node

    Node(int value) {  //A Consructor to initialize the values.
        data = value;
        this->prev = prev;
        this->next = next;
    }
};

int main()
{
    Node* Head = NULL;
    Head = new Node(9);

    cout << Head->next << " ";
    cout << Head->data << " ";
    cout << Head->prev << " ";
}

// Creation of a doubly linked list - Using recursion
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
        this->next = NULL;
    }
};

Node* CreateList(vector<int> &arr, int n, int index, Node* prev)
{   
    if(index == n)
    return NULL;

    Node* newNode = new Node(arr[index]);
    newNode->prev = prev;

    newNode->next = CreateList(arr, n, index+1, newNode);
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

    // Print the elements of the list.
    Node* printValues = Head;
    while(printValues)
    {
        cout << printValues->data << " ";
        printValues = printValues->next;
    }
}
