// Creation of a list
#include<iostream>
using namespace std;

class NODE {
    public:
    int data;
    NODE *next;

    NODE(int value) {
        data = value;
        next = NULL;
    }
};

int main() 
{
    NODE *Head;
    Head = new NODE(8);

    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
}

// Creation of a list -> using recursion
#include<iostream>
#include<vector>
using namespace std;

class NODE {
    public:
    int data;
    NODE *next;

    NODE(int value) {
        data = value;
        next = NULL;
    }
};

NODE *CreateList(vector<int> &arr, int n, int index)
{
    if(index == n)
    return NULL;

    NODE *newNode = new NODE(arr[index]);
    newNode->next = CreateList(arr, n, index + 1);

    return newNode;
};

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n == 0)
    {
        cout << "List cant be created." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    NODE *Head = NULL;

    Head = CreateList(arr,n, 0);

    //Print tthe list
    NODE *printList = Head;
    while(printList)
    {
        cout << printList->data << " ";
        printList = printList->next;
    }
}