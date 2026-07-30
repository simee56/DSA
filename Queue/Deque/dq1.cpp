// Implementation of a Deque (Double-Ended Queue) using a Doubly Linked List
#include <iostream>
#include <vector>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next, *prev;
 
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
 
class deque 
{
    Node *front;
    Node *rear;
    int currentSize;
    int maxSize;
 
public:
    deque (int n)
    {
        front = NULL;
        rear = NULL;
        currentSize = 0;
        maxSize = n;
    }
 
    bool isEmpty()
    {
        return front == NULL;
    }
 
    bool isFull()
    {
        return currentSize == maxSize;
    }
 
    // ---------- PUSH ----------
 
    void pushFront(int x)
    {
        if (isFull())
        {
            cout << "The Deque is full. Cannot push " << x << ".\n";
            return;
        }
        Node *newNode = new Node(x);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        currentSize++;
        cout << "Pushed " << x << " into the deque at the front.\n";
    }
 
    void pushBack(int x)
    {
        if (isFull())
        {
            cout << "The Deque is full. Cannot push " << x << ".\n";
            return;
        }
        Node *newNode = new Node(x);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        currentSize++;
        cout << "Pushed " << x << " into the deque at the back.\n";
    }
 
    // ---------- POP ----------
 
    void popFront()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty. Nothing to pop.\n";
            return;
        }

        Node *temp = front;

        cout << "Popped " << temp->data << " from the front.\n";
        front = front->next;

        if (front != NULL)
            front->prev = NULL;
        else
            rear = NULL; 

        delete temp;
        currentSize--;
    }
 
    void popBack()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty. Nothing to pop.\n";
            return;
        }

        Node *temp = rear;

        cout << "Popped " << temp->data << " from the back.\n";
        rear = rear->prev;

        if (rear != NULL)
            rear->next = NULL;
        else
            front = NULL; 

         delete temp;
        currentSize--;
    }

    // -----peek elemnent-----
    int peek()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty.\n";
            return -1;
        }

        cout<<"The peek element is : ";
        return front->data;
    }

    // -----=last elemnent-----
    int back()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty.\n";
            return -1;
        }

        cout<<"The last element is : ";
        return rear->data;
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

    // Deque needs capacity 2*n since we push every element
    // once from the front and once from the back.
    deque  dq(2 * n);

    cout << "\n--- pushFront ---\n";
    for (int i = 0; i < n; i++)
        dq.pushFront(arr[i]);

    cout << "\n--- pushBack ---\n";
    for (int i = 0; i < n; i++)
        dq.pushBack(arr[i]);

    cout << "\n--- peek / back ---\n";
    cout << "Front element: " << dq.peek() << "\n";
    cout << "Back element : " << dq.back() << "\n";

    cout << "\n--- popFront ---\n";
    dq.popFront();
    cout << "Front element now: " << dq.peek() << "\n";

    cout << "\n--- popBack ---\n";
    dq.popBack();
    cout << "Back element now: " << dq.back() << "\n";

    return 0;
}