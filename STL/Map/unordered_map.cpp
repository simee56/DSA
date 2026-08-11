#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> m;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the values : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;   // insert x into map, increment its count
    }

    cout << "Values stored in map m are : \n";
    for (auto it = m.begin(); it != m.end(); it++)
        cout << "Key = " << it->first << ", Value = " << it->second << endl;

    return 0;
}