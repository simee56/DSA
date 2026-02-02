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

    //Initialize a vector
    vector<int>a(5,1);

    //print the elements of a vector  - Method1
    cout<<"ELements of vector a = ";
    for(auto it = a.begin(); it!= a.end(); it++)
    cout<<*it<<" "<<endl;


    //Method2

    cout<<"ELements of vector v = ";
    for(int i =0; i<v.size(); i++)
    cout<<v[i]<<" ";
}