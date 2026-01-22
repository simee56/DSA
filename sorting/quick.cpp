#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int start, int end)
{
    int position = start;
    for(int i = start; i<=end; i++)
    {
        if(arr[i] <= arr[end])
      {  
        swap(arr[i], arr[position]);
        position++;
    }
    };

    return position - 1;
}

void QuickSort(int arr[], int start, int end)
{
    if(start >= end)
    return;

    int pivot = partition(arr, start, end);
    
    //left half
    QuickSort(arr, start, pivot-1);

    //right half
    QuickSort(arr, pivot+1, end);
};

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the elements of an array = ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    QuickSort(arr, 0, n-1);

    cout<<"Sorted Array = ";
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}
