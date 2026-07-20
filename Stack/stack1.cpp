#include<iostream>
using namespace std;

// Implemetatiion of Stack using array
class Stack 
{
    int *arr;
    int size;
    int Top;

    public :

    bool flag;    //FLag would be 1 if the stack is empty and it would be 0 if the stack isnt empty.

    // Constructor
    Stack(int s)
    {
        size = s;
        Top = -1;
        arr = new int[s];
        flag = 1;
    }

    // Stack operations
    // 1. Push operation
    void Push(int val)
    {
        if(Top == size - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        else {
            Top++;
            arr[Top] = val;
            cout << "Pushed " << arr[Top] << " into the stack.\n";
            flag = 0;
        }
    }

    // 2. Pop Operation
    void Pop()
    {
        if(Top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else {
                cout << "Popped " << arr[Top] << " from the stack.\n";
                Top--;
                if(Top == -1)
                flag = 1;
        }
    }

    // 3. Peak elemmnt
    int Peak()
    {
        if(Top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else {
            cout << "the top most elment of the stack is : ";
            return arr[Top];
        }
    }

    // 4. To chec k if the Stack is empty
    bool isEmpty()
    {
        return Top == -1;
    }

    // 5. To check the size of the Stack
    int stackSize()
    {
        cout << "The size of the stack is : ";
        return Top + 1;
    }

};

int main()
{   
    int n; 
    cout << "Enter the size of the Stack : ";
    cin >> n;

    Stack S(n);

    int val;
    cout << "Enter the elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        S.Push(val);
    }

    int peakValue = S.Peak();
    if(S.flag == 0)
    cout << peakValue << endl; 

    cout << S.stackSize() << endl;

    S.Pop();

    peakValue = S.Peak();
    if(S.flag == 0)
    cout << peakValue << endl;

    cout << S.stackSize() << endl;
    
    cout << S.isEmpty() << endl;

}