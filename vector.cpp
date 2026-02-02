#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Create vector, declare
    vector<int>v;
    //Size and capacity
    cout<<"Size of the vector is "<<v.size()<<endl;
    cout<<"Capacity of the vector is "<<v.capacity()<<endl;

    //Insert elements
    v.push_back(2);
    cout<<"Size of the vector is "<<v.size()<<endl;
    cout<<"Capacity of the vector is "<<v.capacity()<<endl;

    //Update value
    v[0] = 1;

    //Delete value
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(7);
    v2.push_back(3);
    v2.push_back(10);

    v2.pop_back();
    cout<<"Size of the vector2 is "<<v2.size()<<endl;

    v2.erase(v2.begin()+2);
    cout<<"Size of the vector2 is "<<v2.size()<<endl;

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