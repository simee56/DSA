#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    
    //Print the address of a
    cout<<"Address of a : "<<&a;

    //Using pointer
    int *ptr1 = &a;
    cout<<"\nAddress of a using pointer : "<<ptr1;
}