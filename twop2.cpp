//Three sum- brute force approach(time complexity (o(n^3)))
#include<iostream>
#include<vector>
using namespace std;

void ThreeSum(vector<int>arr, int target)
{
    int n = arr.size();
    bool found = false;

    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == target)
                {
                   cout << "Those numbers are " 
                         << arr[i] << ", " 
                         << arr[j] << " and " 
                         << arr[k] << endl;
                    found = true;
                    return; 
                }
            }
        }
    }

    if(!found)
    cout<<"No such triplets found .";

};

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    int X;
    cout<<"Enter the target : ";
    cin>>X;

    vector<int>v(n);
    cout<<"Enter the elemnts : ";
    for(int i = 0; i < n; i++)
    cin>>v[i];

    ThreeSum(v, X);
}