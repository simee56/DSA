#include<iostream>
using  namespace std;

class MinHeap {
    int *arr;
    int size;             // Total elements present in the heap
    int totalSize;        // The size of te array

    public: 
    MinHeap(int n) {
        arr = new int[n];
        size = 0;
        totalSize = n;
    }

    // Function to insert the values into the heap
    void insert(int val)
    {
        // Check if the heap isnt full
        if(size == totalSize) {
            cout << "Heap Overflow";
            return;
        }

        arr[size] = val;
        int index = size;
        size++;

        // Maintain the property of min heap -> each parent node should be <= to its children 
        while(index > 0 && arr[(index - 1) / 2] > arr[index])
        {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << arr[index] << " is inserted into the heap." << endl;
    }

    
    // A function that will maintain the property of minheap after deleting a node
    void Heapify(int index) 
    {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] < arr[smallest])
        smallest = left;

        if(right < size && arr[right] < arr[smallest])
        smallest = right;

        if(smallest != index) {
            swap(arr[index], arr[smallest]);
            Heapify(smallest);
        }
    } 

    // To delete a value from the heap
    void deleteval()
    {
        // Check if the heap isnt empty
        if(size == 0) {
            cout << "Heap UnderFlow";
            return;
        }

        cout << arr[0] << " is deleted from the heap";
        arr[0] = arr[size - 1];
        size--;

        if(size == 0)
        return;

        Heapify(0);
    }

    // Print the values of the tree
    void printHeap() {
        cout << "\nHeap array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}; 

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    MinHeap MH(n);

    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        MH.insert(val);
    }

    MH.printHeap();
    MH.deleteval();
    MH.printHeap();
}