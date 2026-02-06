//Devide an array in subarrays with equal sum
//Brute force approach
#include<iostream>
using namespace std;

bool Subarray(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int sum1 =0, sum2 =0;

        for(int j = 0; j<=i; j++)
        sum1 += arr[j];

        for(int j = i+1; j<n; j++)
        sum2 += arr[j];

        if(sum1 == sum2)
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array :";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    cout<<"The array can be divided into subarrays with equal sum "<<Subarray(arr,n);
}



//using prefix sum
#include<iostream>
using namespace std;

void Subarray(int arr[], int n)
{
    int totalsum = 0;
    cout<<"Total sum of the array is : ";
    for(int i = 0; i<n; i++)
    totalsum += arr[i];

    cout<<totalsum<<endl;


    int prefix = 0;
    bool found = false; 
    for(int i =0; i<n-1; i++)
    {
        prefix += arr[i];   //left subarray
        int restsum = totalsum - prefix;   //Right subarray
        if(restsum == prefix)
        {
            cout<<"Array can be devided into two subarrays and the sum would be "<<restsum<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    cout<<"Array can not  be devided into two subarrays";
}


int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array :";
    for(int i =0; i<n; i++)
    cin>>arr[i];

   Subarray(arr,n);
}