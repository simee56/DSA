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
#include<algorithm>
using namespace std;

bool BinarySearch(vector<int>& v, int start, int end, int value)
{
    while(start <= end)
    {
        int mid = start + (end - start) /2;

        if(v[mid] == value)
        return true; 

        else if(v[mid] > value)
        end = mid - 1;

        else
        start = mid +1;
    }
    return false;
}

void ThreeSum(vector<int>v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());         //if array is not sorted

    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            int value = target - (v[i] + v[j]) ;

            if (BinarySearch(v, j + 1, n - 1, value))
            {
                cout << "Those numbers are "
                     << v[i] << ", "
                     << v[j] << " and "
                     << value << endl;
                found = true;
                return;  
            }
        }
    }
    if(!found)
    cout<<"No such triplets found .";
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


//Three sum - using two pointers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ThreeSum(vector<int>& v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());         //if array is not sorted

    for(int i = 0; i< n-2; i++)
    {
        int start = i+1, end = n-1;

        while(start < end)
        {
            if(v[i] + v[start] + v[end] == target)
            {
                cout << "Those numbers are "
                     << v[i] << ", "
                     << v[start] << " and "
                     << v[end] << endl;
                found = true;
                return;  
            }
            else if(v[i] + v[start] + v[end] > target)
            end--;

            else
            start ++;
        }
    }
    if(!found)
    cout<<"No such triplets found .";
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



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool BinarySearch(vector<int>& v, int start, int end, int value)
{
    while(start <= end)
    {
        int mid = start + (end - start) /2;

        if(v[mid] == value)
        return true; 

        else if(v[mid] > value)
        end = mid - 1;

        else
        start = mid +1;
    }
    return false;
}

void fourSum(vector<int>v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());         //if array is not sorted

    for(int i = 0; i < n-3; i++)
    {
        for(int j = i+1; j < n-2; j++)
        {
            for(int k = j+1; k < n-1; k++)
            {
                int value = target - (v[i] + v[j] + v[k]) ;

                if (BinarySearch(v, k + 1, n - 1, value))
                {
                    cout << "Those numbers are "
                         << v[i] << ", "
                         << v[j] << ", "
                         << v[k] << " and "
                         << value << endl;
                    found = true;
                    return;  
                }
            }
        }
    }
    if(!found)
    cout<<"No such 4 numbers found .";
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

    fourSum(v, X);
}



//Four sum problem - using two pointer
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fourSum(vector<int>& v, int target)
{
    int n = v.size();
    bool found = false;

    sort(v.begin(), v.end());         //if array is not sorted

    for(int i = 0; i<n-3; i++)
    {
        for(int j = i+1; j<n-2; j++)
        {
            int start = j+1, end = n-1;

            while(start < end)
            {
                int value = v[i] + v[j] + v[start] + v[end];

                if(value == target)
                {
                    cout<<"Those numbers are :"
                        <<v[i]<<", "
                        <<v[j]<<", "
                        <<v[start]<<" and "
                        <<v[end]<<endl;
                    found = true;
                    break;
                }

                else if(value > target)
                end --;

                else 
                start ++;
            }
        }
    }

    if(!found)
    cout<<"Those 4 numbers dont exist.";
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

    fourSum(v, X);
}