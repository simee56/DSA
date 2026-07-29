// Implementation of Queue using Linear Array
#include<iostream>
using namespace std;

class Queue 
{
    int *arr;
    int front;
    int rear;
    int size;

    public :

    Queue(int n) 
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size=  n;
    }

    // Function to check if the Queue is empty
    bool isEmpty()
    {
        return front == -1;
    }

    // Function to check if the Queue is full
    bool isFull()
    {
        return rear == size-1;
    }

    // Peek element of the queue
    int peek()
    {   
        if(isEmpty())
        {
            cout<<"Queue is empty.\n";
            return -1;
        }
        else 
        {
            cout<<"Peek element of the queue is : ";
            return arr[front];
        }

    }

    // Enqueue operation
    void push(int x)
    {
        // If the queue is empty
        if(isEmpty())
        {   
            cout<<"Pushed "<<x<<" into the queue.\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }

        // If the queue is full
        else if(isFull())
        {
            cout<<"Queue overflow."<<endl;
            return;
        }

        else
        {   
            cout<<"Pushed "<<x<<" into the queue.\n";
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    // Dequeue operation
    void pop()
    {
        // If the queue is empty
        if(isEmpty())
        {
            cout<<"Queue underflow."<<endl;
            return;
        }

        else
        {
            if(front == rear)
            {
                cout<<"\nRemoved "<<arr[front]<<" from the queue.\n";
                front = rear = -1;
            }
                
            else
            {
                cout<<"\nRemoved "<<arr[front]<<" from the queue.\n";
                front = front + 1;
            } 
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    Queue q1(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    cout<<q1.peek();

    q1.pop();

    cout<<q1.peek();
}



// Implementation of Queue using Circular Array
#include<iostream>
using namespace std;

class Queue 
{
    int *arr;
    int front;
    int rear;
    int size;

    public :

    Queue(int n) 
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size=  n;
    }

    // Function to check if the Queue is empty
    bool isEmpty()
    {
        return front == -1;
    }

    // Function to check if the Queue is full
    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    // Peek element of the queue
    int peek()
    {   
        if(isEmpty())
        {
            cout<<"Queue is empty.\n";
            return -1;
        }
        else 
        {
            cout<<"Peek element of the queue is : ";
            return arr[front];
        }
    }

    // Enqueue operation
    void push(int x)
    {
        // If the queue is empty
        if(isEmpty())
        {   
            cout<<"Pushed "<<x<<" into the queue.\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }

        // If the queue is full
        else if(isFull())
        {
            cout<<"Queue overflow."<<endl;
            return;
        }

        else
        {   
            cout<<"Pushed "<<x<<" into the queue.\n";
            rear = (rear + 1) % size;
            arr[rear] = x;
        }
    }

    // Dequeue operation
    void pop()
    {
        // If the queue is empty
        if(isEmpty())
        {
            cout<<"Queue underflow."<<endl;
            return;
        }

        else
        {
            if(front == rear)
            {
                cout<<"\nRemoved "<<arr[front]<<" from the queue.\n";
                front = rear = -1;
            }
                
            else
            {
                cout<<"\nRemoved "<<arr[front]<<" from the queue.\n";
                front = (front + 1) % size;
            } 
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    Queue q1(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    cout<<q1.peek();

    q1.pop();

    cout<<q1.peek();
}