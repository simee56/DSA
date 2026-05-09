//Print the elements of an array if index starts with 0
#include<iostream>
using namespace std;

void printArr(int arr[], int index, int n)
{
    if(index == n)
    return;

    cout<<arr[index]<<" ";
    printArr(arr, index + 1, n);
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    printArr(arr, 0, n);
}



//Print the elements of an array in reverse order if index starts with 0
#include<iostream>
using namespace std;

void printArr(int arr[], int index, int n)
{
    if(index == n)
    return;

    printArr(arr, index + 1, n);
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    printArr(arr, 0, n);
}

