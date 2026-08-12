#include<iostream>
using  namespace std;

class MaxHeap {
    int* arr;
    int size;       // Total elements in heap
    int totalSize;  // Size of the array

    public:
    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        totalSize = n;
    }

    // Insert values into the heap
    void insert(int val) {
        // If heap is full
        if(size == totalSize) {
            cout << "Heap Overflow\n";
            return;
        }

        arr[size] = val;
        int index = size;
        size++;

        // Maintain the property of max heap -> each parent node should be >= to its children 
        while(index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[index], arr[(index - 1)/2]);
            index = (index - 1)/2; 
        }
        cout << arr[index] << " is inserted into the heap." << endl;
    }

    // Print the values of the tree
    void printHeap() {
        cout << "\nHeap array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // A function that will maintain the property of maxheap after deleting a node
    void Heapify(int index) 
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] > arr[largest])
        largest = left;

        if(right < size && arr[right] > arr[largest])
        largest = right;

        if(largest != index)
        {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }

    // To delete a value from the heap
    void deleteNode()
    {
        if(size == 0) {
            cout << "Heap underflow";
            return;
        }

        cout << arr[0] << " is deleted from the heap";
        arr[0] = arr[size - 1];      // Swap the first and last element
        size--;                     // To delete the value

        if(size == 0)
        return;

        Heapify(0);
    }
};

int main()
{   
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    MaxHeap MH(n);

    cout << "Enter the values in array : ";
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        MH.insert(val);
    }

    MH.printHeap();

    MH.deleteNode();

    MH.printHeap();
}

