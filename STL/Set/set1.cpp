#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // To store values in set in ascending order
    for(int i = 0; i < n; i++)
    s.insert(i);

    cout << "The values stored in set are : ";
    for(auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

    cout << endl;

    // To store values in set in ascending order
    set<int, greater<int>> s1;

    for(int i = 0; i < n; i++)
    s1.insert(i);

    cout << "The values stored in set are : ";
    for(auto it = s1.begin(); it != s1.end(); it++)
    cout << *it << " ";

    cout << endl;

    // Searching an element in Set
    int value1;
    cout << "Enter the searching value : ";
    cin >> value1;

    if(s.find(value1) != s.end())
    cout << value1 << " is present in the set.\n";
    else 
    cout << value1 << " is not present in the set.\n";

    // Delete an element
    int value2;
    cout << "Enter the value to delete : ";
    cin >> value2;

    s.erase(value2);

    cout << "Values in s are : ";
    for(auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
}