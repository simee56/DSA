#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the elements of an array = ";
    for(int i =0; i<n; i++)
    cin>>arr[i];


    for(int i = 1; i<n; i++)
    {
        for(int j = i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j], arr[j-1]);

            else
            break;
        }
    };

    cout<<"Sorted Array = ";
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}


//Using function - increasing order
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
     for(int i = 1; i<n; i++)
    {
        for(int j = i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j], arr[j-1]);

            else
            break;
        }
    };
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the elements of an array = ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    InsertionSort(arr, n);

    cout<<"Sorted Array = ";
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}



//Using function - decreasing order
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
     for(int i = 1; i<n; i++)
    {
        for(int j = i; j>0; j--)
        {
            if(arr[j]>arr[j-1])
            swap(arr[j], arr[j-1]);

            else
            break;
        }
    };
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the elements of an array = ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    InsertionSort(arr, n);

    cout<<"Sorted Array = ";
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}



