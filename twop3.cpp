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
            return 1;
        }
    }
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

//Pair with given differnce - Binary Search (time complexity (o(n(logn))))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool BinarySearch(vector<int> & v, int start, int end, int x)
{
    while(start <= end)
    {
        int mid = start + (end - start) /2;
        
        if(v[mid] == x)
        return true;

        else if(v[mid] > x)
        end = mid - 1;

        else
        start = mid + 1;
    }

    return false;
}

int numbersExist(vector<int> & v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());

    for(int i = 0; i < n-1; i++)
    {
        int x = target + v[i];

        if (BinarySearch(v, i+1, n-1, x))
        return 1;
    }
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

