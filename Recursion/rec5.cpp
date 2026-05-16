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