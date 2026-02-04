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



//TWO SUM - Brute force
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

    int target;
    cout<<"Enter the target value = ";
    cin>>target;

    int num1, num2;

    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == target)
        { 
            num1 = arr[i];
            num2 = arr[j];
        }
        }
    }

    cout<<"Those two values are :"<<num1<<" & "<<num2;
}



//TWO SUM - Binary search
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

    int target;
    cout<<"Enter the target value = ";
    cin>>target;

    int num1, num2;
    
    for(int i = 0; i<n-1 ; i++)
    {
        int x = target - arr[i];

        int start = i+1, end = n-1, mid;
        
        while(start <= end)
        {
            mid = start +(end - start) / 2;
            if(arr[mid] == x)
            {
                num1 = arr[i];
                num2 = x;
                cout<<"Those two values are "<<num1<<" & "<<num2;
                break;
            }

            else if(arr[mid] >x)
            end = mid-1;

            else
            start = mid+1;
        }
    }
}