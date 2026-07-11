// Insertion at the beginning of a Linked List
#include <iostream>
#include <vector>
using namespace std;
 
class Node
{
public:
    int data;   
    Node *next; 
 
    // Constructor: create a node with only data (used for the very first node)
    Node(int value)
    {
        data = value;
        next = NULL;
    }
 
    // Constructor: create a node with data AND a pointer to link it to an
    // existing node (used when inserting before the current head)
    Node(int value, Node *ptr)
    {
        data = value;
        next = ptr;
    }
};
 
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    Node *Head = NULL; 
 
    // Build the list by inserting each array element at the FRONT.
    // Since every new element is placed before the old head, the final
    // list ends up in REVERSE order of the array.
    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
        {
            // list is empty -> this element becomes the first and only node
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i], Head);
            Head = temp;
        }
    }
 
    // Printing the elements of the list
    Node *temp = Head;
    while (temp) // loop until temp becomes NULL (end of list)
    {
        cout << temp->data << " ";
        temp = temp->next; // move to the next node
    }
    cout << endl;
 
    return 0;
}
 

// Insertion at the end of a Linked List
#include <iostream>
#include <vector>
using namespace std;
 
class Node1
{
public:
    int data;    
    Node1 *next; 
 
    Node1(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    Node1 *Head = NULL; // points to the first node of the list
    Node1 *Tail = NULL; // points to the last node, so we can append in O(1)
 
    // Build the list by inserting each array element at the END.
    // Using a Tail pointer avoids walking the whole list every time
    // (without Tail, we'd have to traverse from Head to find the last node).
    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
        {
            // list is empty -> this element becomes both Head and Tail
            Head = new Node1(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node1(arr[i]);
            Tail = Tail->next;
        }
    }
 
    // Printing the elements of the list
    Node1 *temp = Head;
    while (temp) 
    {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
 
    return 0;
}
 
// Insertion at the end of a Linked List - Using Recursion
#include <iostream>
#include <vector>
using namespace std;
 
class Node3
{
public:
    int data;
    Node3 *next;
 
    Node3(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node3 *createLL(vector<int> &arr, int i, int n)
{
    // Base case: we've placed every element, nothing left to link
    if (i == n)
        return NULL;
 
    // Create a node for the current element...
    Node3 *temp = new Node3(arr[i]);
 
    // ...then recursively build the REST of the list (elements i+1 .. n-1)
    // and attach it after this node. 
    temp->next = createLL(arr, i + 1, n);
 
    return temp;
}
 
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    Node3 *Head = NULL;
    Head = createLL(arr, 0, n); // start recursion from index 0
 
    // Printing the elements of the list
    Node3 *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }



// Insertion at the beginning of a Linked List - Using Recursion
#include <iostream>
#include <vector>
using namespace std;
 
class Node4
{
public:
    int data;
    Node4 *next;
 
    Node4(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
Node4 *createLL(vector<int> &arr, int i, int n, Node4 *prevAddress)
{
    if (i == n)
        return prevAddress;
 
    Node4 *temp = new Node4(arr[i]);
    temp->next = prevAddress;
 
    return createLL(arr, i + 1, n, temp);
}
 
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    Node4 *Head = NULL;
    Head = createLL(arr, 0, n, NULL); // start recursion with an empty list
 
    // Printing the elements of the list
    Node4 *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
 
    return 0;
}


// Insertion in the middle of a Linked List
#include <iostream>
#include <vector>
using namespace std;
 
class NODE5
{
public:
    int data;
    NODE5 *next;
 
    NODE5(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int x, value;
    cout << "Enter the position and value : ";
    cin >> x >> value; // x = 1-based position where "value" should be inserted
 
    // ---- STEP 1: Build the linked list from the array (insert at end) ----
    NODE5 *Head = NULL;
    NODE5 *Tail = NULL;
 
    for (int i = 0; i < n; i++)
    {
        NODE5 *newNode = new NODE5(arr[i]);
 
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
        }
        else
        {
            Tail->next = newNode;
            Tail = newNode;
        }
    }
 
    NODE5 *ptr = Head;
 
    // ---- STEP 2: Walk to the node just BEFORE position x ----
    // Example: to insert at position 3, ptr must stop at position 2,
    // so we can link the new node in right after it.
    // x-- once to convert 1-based position to a 0-based offset,
    // then the loop moves ptr forward (x - 1) more steps.
    x--;
    while (x--)
    {
        ptr = ptr->next;
    }
 
    // ---- STEP 3: Create new node and re-link ----
    NODE5 *temp = new NODE5(value);
    temp->next = ptr->next; // new node points to whatever came after ptr
    ptr->next = temp;       // ptr now points to the new node instead
   
    // ---- STEP 4: Print the final list ----
    NODE5 *print = Head;
    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }
    cout << endl;
 
    return 0;
}
