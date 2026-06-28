//minimum element of an array

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the elemnts of an array = ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int ans = INT_MAX;
    for(int i =0; i<5; i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }

    cout<<"The smallest element of array is "<<ans<<endl;
}


//maximum element of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int ans = arr[0];
    for(int i =0;i<5;i++)
    {
        if(ans<arr[i])
        ans = arr[i];
    }
    
    cout<<"The maximum element of array is "<<ans<<endl;

}

//sum of n elements of array
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    int sum =0;

    for(int i=0; i<10;i++)
    {
        sum =sum+arr[i];
    }

    cout<<sum;
}

//foibonacci series
#include<iostream>
using namespace std;
int main()
{
    //ask user the index at which he wants to find trhe number
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int arr[1000];
    arr[0] = 0;
    arr[1] =  1;

    for(int i =2 ; i<n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout<<arr[n-1];

}



//rotate an array by 1
#include<iostream>
using namespace std;
int main()
{
    //ask user the index at which he wants to find trhe number
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the element spf an array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int temp = arr[n-1];

    for(int i = n-2; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[0] = temp;

    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}