// Implementation of Deque using STL
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> dq;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the elements : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push(x);   // built-in enqueue
    }

    // Peek (front element)
    if(!dq.empty())
        cout << "Front element : " << dq.front() << "\n";
    else
        cout << "Queue is empty.\n";

    // Pop (dequeue)
    if(!dq.empty())
    {
        cout << "Removed " << dq.front() << " from the queue.\n";
        dq.pop();
    }
    else
    {
        cout << "Queue underflow.\n";
    }

    // Peek again to confirm
    if(!dq.empty())
        cout << "New front element : " << dq.front() << "\n";
    else
        cout << "Queue is empty.\n";

    cout << "Current size of queue : " << dq.size() << "\n";
}