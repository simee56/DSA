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
    // sort(vec.begin(), vec.end());  //increasing order

    // cout<<"Sorted Vector : ";
    // for(int i =0; i<n; i++)
    // cout<<vec[i]<<" ";

    sort(vec.begin(), vec.end(), greater<int>());    //Decreasing order
    //or sort(vec.rbegin(), vec.rend()); 
    cout<<"Sorted Vector : ";
    for(int i =0; i<n; i++)
    cout<<vec[i]<<" ";

    cout<<endl;              


    //Searching
    cout<<binary_search(vec.begin(), vec.end(), 55);
    cout<<endl;

    //Find Index
    cout<<find(vec.begin(), vec.end(), 55) - vec.begin();


}