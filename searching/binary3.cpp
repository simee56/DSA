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
    cout<<"Enter the value of M(Students) : ";
    cin>>M;

    cout<<AllocateBook(arr, n, M);
}


//Painter partition 
#include<iostream>
using namespace std;

int MinTime(int arr[], int n, int M)
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

        int walls =0, count =1;

        for(int i =0; i<n; i++)
        {
            walls += arr[i];

            if(walls > mid)
            {
                count++;
                walls = arr[i];
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
    cout<<"Enter the value of M(Painters) : ";
    cin>>M;

    cout<<MinTime(arr, n, M);
}


//Ship packages
#include<iostream>
using namespace std;

int MinWeight(int arr[], int n, int M)
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

        int weight =0, count =1;

        for(int i =0; i<n; i++)
        {
            weight += arr[i];

            if(weight > mid)
            {
                count++;
                weight = arr[i];
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
    cout<<"Enter the value of M(Days) : ";
    cin>>M;

    cout<<MinWeight(arr, n, M);
}



//Aggresive cows
#include<iostream>
using namespace std;

int MaxDistance(int arr[], int N, int M)
{
    int start = 1, end = arr[N-1] - arr[0], mid, ans;

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        int count = 1, pos = arr[0];

        for(int i = 1; i<N; i++)
        {
            if(pos + mid <= arr[i])
            {
                count++;
                pos = arr[i];
            }
        }

        if(count < M)
        end = mid-1;
        
        else
        {
            ans = mid;
            start = mid + 1;
        }
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
    cout<<"Enter the value of M(Cows) : ";
    cin>>M;

    cout<<MaxDistance(arr, n, M);
}

