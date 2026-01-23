#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number present in array = ";
    cin>>n;

    cout<<"Enter the elemetns of the array  = ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int x;
    cout<<"Enter the searching element = ";
    cin>>x;

    bool found = false;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] == x)
        { 
        cout<<"element "<<x<<" found at the index "<<i;
        found = true;
        break;
        }
    }

    if(!found)
    cout<<"element "<<x<<" is not present at any index ";
};



//Using Function
#include<iostream>
using namespace std;

void LinearSearch(int arr[], int x, int n)
{
    bool found = false;

    for(int i =0; i<n; i++)
    {
        if(arr[i] == x)
        {
            cout<<"element "<<x<<" found at the index "<<i;
            found = true;
            break;
        }
    }

    if(!found)
    cout<<"element "<<x<<" is not present at any index ";
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

    int x;
    cout<<"Enter the searching element = ";
    cin>>x;

    LinearSearch(arr, x, n);
}