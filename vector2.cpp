#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>vec(n);

    cout<<"Elements of the vector are : ";
    for(int i = 0; i < n; i++)
    cin>>vec[i];

    //Sorting
    sort(vec.begin(), vec.end());  //increasing order

    cout<<"Sorted Vector : ";
    for(int i =0; i<n; i++)
    cout<<vec[i]<<" ";
}