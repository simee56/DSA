// Heap Sort: sorts an array in O(n log n) time using a heap.
// Step 1: Build a MAX heap from the given array (for ascending order sort)
// Step 2: Repeatedly:
//         a) Swap the first element (root/max) with the LAST element of the 
//            CURRENT unsorted portion.
//         b) Decrease the "heap size" by 1 (shrink the unsorted region)
//         c) Call Heapify(0) on the reduced heap to restore the max-heap property
// Step 3: Repeat until heap size is 1 — the array is now sorted in ascending order


#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if(left < n && arr[left] > arr[largest])
    largest = left;

    if(right < n && arr[right] > arr[largest])
    largest = right;

    if(largest != index) {
        swap(arr[largest], arr[index]);
        Heapify(arr, largest, n);
    }
} 

void BuildHeap(int arr[], int n)
{
    for(int i = (n / 2) - 1; i >= 0; i--)
    Heapify(arr, i, n);
}

void sortArray(int arr[], int n)
{
    for(int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[0]);
        Heapify(arr, 0, i);
    }
}

void printHeap(int arr[], int n) {
    cout << "\nHeap array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Ente the size of the array : ";
    cin >> n;

    int arr[1000];
    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    BuildHeap(arr, n);
    printHeap(arr, n);
    sortArray(arr, n);
    printHeap(arr, n);

}