#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// In multiset duplicates are allowed but in sorted order

int main()
{
    multiset<int> s;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    s.insert(0);
    for(int i = 0; i < n; i++)
    s.insert(i);

    cout << "The values stored in set are : ";
    for(auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

    cout << endl;
}