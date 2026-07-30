// Implementation of a Deque (Double-Ended Queue) using a circular arrray
#include <iostream>
#include <vector>
using namespace std;
 
class deque 
{
    int front;
    int rear;
    int size;
    int *arr;
 
public:
    deque (int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
 
    bool isEmpty()
    {
        return front == -1;
    }
 
    bool isFull()
    {
        return (rear + 1) % size == front;
    }
 
    // ---------- PUSH ----------
 
    void pushFront(int x)
    {
        if (isFull())
        {
            cout << "The Deque is full. Cannot push " << x << ".\n";
            return;
        }

        if (isEmpty())
        {
            cout << "Pushed " << x << " into the deque at the front.\n";
            front = rear = 0;
            arr[0] = x;
        }

        else
        {
            cout << "Pushed " << x << " into the deque at the front.\n";
            front = (front - 1 + size) % size;
            arr[front] = x;
            return;
        }
    }
 
    void pushBack(int x)
    {
        if (isFull())
        {
            cout << "The Deque is full. Cannot push " << x << ".\n";
            return;
        }

        if (isEmpty())
        {
            cout << "Pushed " << x << " into the deque at the front.\n";
            front = rear = 0;
            arr[0] = x;
        }

        else
        {
            cout << "Pushed " << x << " into the deque at the front.\n";
            rear = (rear + 1) % size;
            arr[rear] = x;
            return;
        }
    }
 
    // ---------- POP ----------
 
    void popFront()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty. Nothing to pop.\n";
            return;
        }

        if(front == rear)
        {
            front = rear = -1;
        }

        front = (front + 1) % size;
    }
 
    void popBack()
    {
        if (isEmpty())
        {
            cout << "The Deque is empty. Nothing to pop.\n";
            return;
        }

        if(front == rear)
        {
            front = rear = -1;
        }

        rear = (rear - 1 + size) % size;
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
        return arr[front];
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
        return arr[rear];
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
