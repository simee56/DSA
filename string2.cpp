//Reverse a string
#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter the stirng : ";
    cin>>name;

    int start = 0, end = name.size()-1;

    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout<<name;
}