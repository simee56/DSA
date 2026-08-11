#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    li.push_back(i);

    for(int i = 1; i < n; i++)
    li.push_front(i);

    // Printing all the values of the list -> Using an iterator
    cout << "The value present in the list are : " ;
    for(auto it = li.begin(); it != li.end(); it++)
    cout << *it << " ";

    cout << endl;

    cout << "The front element of the list is : " << li.front() << endl;
    cout << "The last element of the list is : " << li.back() << endl;
    cout << "The size of the list is : " <<  li.size() << endl;

    li.pop_front();
    cout <<"The front element of the list after the pop operation is : " << li.front() << endl;

    li.pop_back();
    cout << "The last element of the list after the pop operation is : " << li.back() << endl;
    
    cout << "The size of the list is : " <<  li.size() << endl;

    // Printing all the values of the list -> Using an iterator
    cout << "The value present in the list are : " ;
    for(auto it = li.begin(); it != li.end(); it++)
    cout << *it << " ";

    cout << endl;
}