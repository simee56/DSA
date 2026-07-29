// Implementation of Queue using STL
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the elements : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);   // built-in enqueue
    }

    // Peek (front element)
    if(!q.empty())
        cout << "Front element : " << q.front() << "\n";
    else
        cout << "Queue is empty.\n";

    // Pop (dequeue)
    if(!q.empty())
    {
        cout << "Removed " << q.front() << " from the queue.\n";
        q.pop();
    }
    else
    {
        cout << "Queue underflow.\n";
    }

    // Peek again to confirm
    if(!q.empty())
        cout << "New front element : " << q.front() << "\n";
    else
        cout << "Queue is empty.\n";

    cout << "Current size of queue : " << q.size() << "\n";
}