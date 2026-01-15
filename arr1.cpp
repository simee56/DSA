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