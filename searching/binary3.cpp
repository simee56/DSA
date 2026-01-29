//Book allocation
#include<iostream>
using namespace std;

int AllocateBook(int arr[], int n, int M)
{
    if(M >n)
    return -1;

    int start = 0, end =0, mid, ans;
    for(int i =0; i<n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    };

    while(start<=end)
    {
        mid = start + (end- start) / 2;

        int page =0, count =1;

        for(int i =0; i<n; i++)
        {
            page += arr[i];

            if(page > mid)
            {
                count++;
                page = arr[i];
            }
        }

        if(count <= M)
        {
            ans = mid;
            end = mid-1;
        }

        else
        start = mid+1;
    }

    return ans;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int M ;
    cout<<"Enter the value of M : ";
    cin>>M;

    cout<<AllocateBook(arr, n, M);
}