// Build heap in o(n) time
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
}