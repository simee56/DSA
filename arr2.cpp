//searcha n element
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elements of array = ";

    for(int i =0; i<10; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the search element = ";
    cin>>x;

    for(int i =0; i<10; i++)
    {
        if(arr[i] == x)
    { 
        cout<<"The index of the search element "<<x<<" is : "<<i<<endl;
        return 0;
    }
    }

     cout<<"search element is not present in the array.";
}
