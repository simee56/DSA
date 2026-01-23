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