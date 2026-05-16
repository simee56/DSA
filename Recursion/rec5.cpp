//Linear Search
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int X, int index, int n)
{
    if(index == n)
    return 0;

    if(arr[index] == X)
    return 1;

    return linearSearch(arr, X, index+1, n);
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter array's elements are : ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int X;
    cout<<"Enter the search element : ";
    cin>>X;

    int index = 0;

    cout<<linearSearch(arr, X, index, n);
}


//Binary search
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int X, int start, int end)
{
    if(start > end)
    return -1;

    int mid =  start + (end - start) / 2;

    if(arr[mid] == X)
    return 1;

    else if(arr[mid] < X)
    return binarySearch(arr, X, mid + 1, end);

    else
    return binarySearch(arr, X, start, mid + 1);

}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter array's elements are in sorted manner: ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int X;
    cout<<"Enter the search element : ";
    cin>>X;

    int start = 0, end = n-1;

    cout<<binarySearch(arr, X, start, end);
}