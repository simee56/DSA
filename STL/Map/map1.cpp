#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the value in array : ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    for (int i = 0; i < n; i++)
    m[arr[i]]++;

    cout << "Values stored in map m are : \n";
    for(auto it = m.begin(); it != m.end(); it++)
    cout << "Key = " << it->first << ", Value = " << it->second << " " << endl;
}