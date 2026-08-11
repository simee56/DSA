#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> Set;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    Set.insert(0);
    for(int i = 0; i < n; i++)
    Set.insert(i);

    cout << "The values stored in set are : ";
    for(auto it = Set.begin(); it != Set.end(); it++)
    cout << *it << " ";

    cout << endl;
}