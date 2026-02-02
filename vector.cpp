#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Create vector, declare
    vector<int>v;
    //Size and capacity
    cout<<"Size of the vecotr is "<<v.size()<<endl;
    cout<<"Capacity of the vecotr is "<<v.capacity()<<endl;

    //Insert elements
    v.push_back(2);
    cout<<"Size of the vecotr is "<<v.size()<<endl;
    cout<<"Capacity of the vecotr is "<<v.capacity()<<endl;

    //Update value
    v[0] = 1;
}