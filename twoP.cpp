//TWO POINTER PROBLEM - seggregate 0 and 1
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array :";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    int start = 0, end = n-1;

    while(start < end)
    {
    for(int i = 0; i<n; i++)
    {
        if(arr[start] == 0)
        start++;

        else 
        {
            if(arr[end] == 1)
            end--;

            else
            {
                swap(arr[start], arr[end]);
                end--;
            }
        }

    }
    }

    cout << "After segregating 0s and 1s: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}