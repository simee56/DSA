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


//Three sum- Binary Search(time complexity (o(n^2(logn))))
#include<iostream>
#include<vector>
using namespace std;


void ThreeSum(vector<int>v, int target)
{
    int n = v.size();
    bool found = false;

    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            BinarySearch(v, target);
            found = true;
            break;
        }

        if(!found)
        cout<<"No such triplets found .";
    }
}


bool BinarySearch(vector<int>& v, int i, int j, int n, int target)
{
    int start = j+1, end = n-1, mid;

    while(start <= end)
    {
        mid = start + (end - start) /2;

        if(v[i] + v[j] + v[mid] == target)
        {
            cout << "Those numbers are " 
                    << v[i] << ", " 
                    << v[j] << " and " 
                    << v[k] << endl;
            return; 
        }

        else if(v[i] + v[j] + v[mid] > target)
        end = mid - 1;

        else
        start = mid +1;
    }
}


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




//Four sum- brute force approach(time complexity (o(n^4)))
#include<iostream>
#include<vector>
using namespace std;

void fourSum(vector<int>& arr, int target)
{
    int n = arr.size();
    bool found = false;

    for(int i = 0; i < n-3; i++)
    {
        for(int j = i+1; j < n-2; j++)
        {
            for(int k = j+1; k < n-1; k++)
            {
                for(int l = k+1; l < n; l++)
                {
                    if(arr[i] + arr[j] + arr[k] +arr[l] == target)
                    {
                        cout << "Those numbers are " 
                             << arr[i] << ", " 
                             << arr[j] << ", " 
                             << arr[k] << " and "
                             << arr[l] << endl;
                        found = true;
                        return; 
                    }
                }
            }
        }
    }

    if(!found)
    cout<<"No such 4 numbers found .";

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

    fourSum(v, X);
}