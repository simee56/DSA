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


//using function
#include<iostream>
using namespace std;

int SeachElement(int arr[10])
{
    int x;
    cout<<"Enter the search element = ";
    cin>>x;

    for(int i =0; i<10; i++)
    {
        if(arr[i] == x)
        return i;
    }

    return -1;
}

int main()
{
    int arr[10];
    cout<<"Enter the elements of array = ";

    for(int i =0; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<SeachElement(arr);
}



//reverse an array
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

    int start = 0, end = 9;
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
}



//second largest number
#include<iostream>
using namespace std;
int main()
{
    int ans =0;
    int arr[7] ={3,5,2,6,1,4,8};
    for(int i =0; i<7; i++)
    {
        if(ans <arr[i])
        ans = arr[i];
    }

    for(int i =0; i<7;i++)
    {
        if(ans != arr[i])
        ans = max(ans, arr[i]);
    }

    cout<<ans;
}