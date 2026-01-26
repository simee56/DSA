#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int x;
    cout<<"Enter the searching element = ";
    cin>>x;

    int start=0, end=n-1, mid;

    bool found = false;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(arr[mid] == x)
        {   
            cout<<"Element "<<x<<" is found at the index "<<mid<<endl;
            found = true;
            break;
        }

        else if(arr[mid] < x)
        start = mid+1;

        else
        end = mid-1;
    }

    if(!found)
    cout<<"element "<<x<<" is not present at any index ";
}



//using funtion
#include<iostream>
using namespace std;

void BinarySearch(int arr[], int n, int X)
{
    int start = 0, end = n-1, mid;

    bool found = false;

    while(start<=end)
    {
        mid = (start + end )/ 2;

        if(arr[mid] == X)
        {
            cout<<"Element "<<X<<" is found at the index "<<mid<<endl;
            found = true;
            break;
        }

        else if(arr[mid] < X)
        start = mid+1;

        else
        end = mid-1;
    }

    if(!found)
    cout<<"element "<<X<<" is not present at any index ";
};

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int X;
    cout<<"Enter the searching element = ";
    cin>>X;

    BinarySearch(arr, n, X);
}


//if the array id in descending order
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int X)
{
    int start = 0, end = n-1, mid;
    while(start<=end)
    {
        mid = (start + end )/ 2;

        if(arr[mid] == X)
        return mid;

        else if(arr[mid] < X)
        end = mid - 1;

        else
        start = mid + 1;
    }

    return -1;
};

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array in decreasing order: ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int X;
    cout<<"Enter the searching element = ";
    cin>>X;

    cout<<BinarySearch(arr, n, X);
}