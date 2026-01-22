#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int index=0, left = start, right = mid+1;

    while(left<=mid && right<=end)
    {
        if(arr[left] < arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
            
        //if elements are present in the left half
        while(left<=mid)
        {
            temp[index] = arr[left];
            index++;
            left++;     
        }

        //if elements are present in the right half
        while(right<=end)
        {
            temp[index] = arr[right];
            index++;
            right++;     
        }

        index = 0;
        while(start<=end)
        {
            arr[start] = temp[index];
            index++;
            start++;
        }
    }
}

void MergeSort(int arr[], int start, int end)
{
    if(start >= end)
    return;

    int mid = start + (end-start) / 2;

    //Left half
    MergeSort(arr, start, mid);
    //Right half
    MergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
}


int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the elements of an array = ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    MergeSort(arr, 0, n-1);

    cout<<"Sorted Array = ";
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
}
