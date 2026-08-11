#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Storing only 2 values in pair
    pair<string, int> p;    // Name, age
    p = make_pair("simee", 20);

    cout << p.first << " " << p.second << " ";

    // Storing 3 values
    pair<string, pair<int, int>> p2;   // Name, age, marks
    p2.first = "simee";
    p2.second.first = 20;
    p2.second.second = 100;

    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

}