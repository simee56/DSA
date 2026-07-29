#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *Listnode(vector<int>& arr, int index, int n)
{
    if(index == n)
        return NULL;

    Node *Tail = new Node(arr[index]);
    Tail->next = Listnode(arr, index + 1, n);
    return Tail;
}

class Queue 
{
    Node *Front;
    Node *Rear;

    public :

    Queue() 
    {
       Front = NULL;
       Rear = NULL;
    }

    bool isEmpty()
    {
        return Front == NULL;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            Front = new Node(x);
            Rear = Front;
        }
        else
        {
            Rear->next = new Node(x);
            Rear = Rear->next;
        }
    }

    // Recursive pop: removes front, then asks user if they want to pop again
    void pop()
    {
        if(isEmpty())
        {
            cout << "Queue underflow. Nothing more to pop.\n";
            return;
        }

        Node *temp = Front;
        cout << "Removed " << Front->data << " from the queue.\n";
        Front = Front->next;
        delete temp;

        if(Front == NULL)
            Rear = NULL;

        if(isEmpty())
        {
            cout << "Queue is now empty.\n";
            return;
        }

        // Ask the user whether to pop again
        char choice;
        cout << "Pop again? (y/n): ";
        cin >> choice;

        if(choice == 'y' || choice == 'Y')
        {
            pop();   // recursive call
        }
        else
        {
            cout << "Stopped popping.\n";
        }
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty.";
            return -1;
        }
        else
            return Front->data;
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
 
    Queue q;
    for(int i = 0; i < n; i++)
        q.push(arr[i]);

    cout << "Front element: " << q.peek() << "\n";

    q.pop();   // starts the recursive pop chain

    cout << "Final front element: " << q.peek() << "\n";
}