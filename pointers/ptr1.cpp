#include<iostream>
using namespace std;

int main()
{
    // int a = 10;
    
    // //Print the address of a
    // cout<<"Address of a : "<<&a;

    // //Using pointer
    // int *ptr = &a;
    // cout<<"\nAddress of a using pointer : "<<ptr;

    // //Size of pointer
    // cout<<"\nSize of ptr is : "<<sizeof(ptr);

    // //Accessing values using pointer
    // cout<<"\nValue of a is : "<<*ptr;



    //Pointers and arrays
    int arr[5] = {1,4,7,9,20};

    //printing the address of oth index -
    cout<<"\nAddress of 0th index : "<<arr;
    cout<<"\nAddress of 0th index : "<<arr+0;
    cout<<"\nAddress of 0th index using pointer : "<<&arr[0];
    int *ptr = arr;
    cout<<"\nAddress of 0th index : "<<ptr;

    //first elemenet
    cout<<"\nAddress of firts index : "<<arr+1;

    //priting value of 2nd index
    cout<<"\nValue of 2nd index is : "<<*(arr+2);

}