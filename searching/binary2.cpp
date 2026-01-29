//SQRT
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number whose sqrt you want = ";
    cin>>n;

    int start = 1, end = n, mid, ans ;

    if(n == 0)
    cout<<0;

    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(mid == n/mid)
        {
            ans = mid;
            cout<<mid;
            break;
        }

        else if(mid < n/mid)
        {
            ans = mid;
            start = mid+1;
        }

        else
        end = mid-1;
    }
}



//count ocuurance 
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int X)
{
    int start = 0, end = n-1, mid, ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == X)
        {
            ans = mid;
            end = mid - 1;   
        }

        else if(arr[mid] > X)
        end = mid - 1;

        else
        start = mid + 1;
    }
    return ans;
};

int lastOcc(int arr[], int n, int X)
{
    int start = 0, end = n - 1, ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == X)
        {
            ans = mid;
            start = mid + 1;  // go right
        }

        else if(arr[mid] > X)
        end = mid - 1;

        else
        start = mid + 1;
    }
    return ans;
};

int CountOccurance(int arr[], int n, int X)
{
    int first = firstOcc(arr, n, X);
    int last = lastOcc(arr, n, X);

    if(first == -1)
    return 0;

    return last - first + 1;
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
    cout<<"Enter the target element = ";
    cin>>X;

    cout<<"target element occurs "<<CountOccurance(arr, n, X)<<" times";
}



