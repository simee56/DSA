//Pair with given differnce -Brute force approach (time complexity (o(n^2)))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numbersExist(vector<int>& v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());

    cout<<"Sorted array is : ";
    for(int i = 0; i<n; i++)
    cout<<v[i]<<" ";

    cout<<endl;

    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(v[j] - v[i] == target)
            {
                found = true;
                return 1;
                break;
            }
        }
    }

    if(!found)
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the elements : ";
    for(int i = 0; i<n ;i++)
    cin>>v[i];

    int X;
    cout<<"Enter target vlaue : ";
    cin>>X;

    cout<<numbersExist(v, X);
}