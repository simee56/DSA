//Kadane's Algorithm for largets sum in a contigous array
#include<iostream>
#include<algorithm>
#include <climits>
#include<vector>
using namespace std;

int maximumSum(vector<int>& v)
{
    int maxi = INT_MIN, prefix = 0, n = v.size();
    for(int i = 0; i < n; i++)
    {
        prefix += v[i];
        maxi = max(maxi, prefix);
        
        if(prefix < 0)
        prefix = 0;
    }

    return maxi;
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter Elements : ";
    for(int i = 0; i<n ;i++)
    cin>>v[i];

    cout << "Maximum subarray sum = " << maximumSum(v);
}