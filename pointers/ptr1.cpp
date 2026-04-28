#include<iostream>
using namespace std;

int main()
{
    // int a = 10;
    
    // //Print the address of a
    // cout<<"Address of a : "<<&a;

    // //Using pointer
    // int *ptr1 = &a;
    // cout<<"\nAddress of a using pointer : "<<ptr1;

    // //Size of pointer
    // cout<<"\nSize of ptr is : "<<sizeof(ptr1);

    // //Accessing values using pointer
    // cout<<"\nValue of a is : "<<*ptr1;



    // //Pointers and arrays
    // int arr[5] = {1,4,7,9,20};
    // int *ptr2 = arr;

    // //printing the address of oth index -
    // cout<<"\nAddress of 0th index : "<<arr;
    // cout<<"\nAddress of 0th index : "<<arr+0;
    // cout<<"\nAddress of 0th index using pointer : "<<&arr[0];
    // cout<<"\nAddress of 0th index : "<<ptr2;

    // //first elemenet
    // cout<<"\nAddress of firts index : "<<arr+1;

    // //priting value of 2nd index
    // cout<<"\nValue of 2nd index is : "<<*(arr+2);

    // //Printing all the values and addresses
    // for(int i = 0; i<5; i++)
    // cout<<"\nAll values are : "<<*(arr+i);

    // for(int i= 0; i<5; i++)
    // cout<<"\nAll adresses are : "<<(arr+i);

    // //Adreesses using pointer
    // for(int i =0;i<5; i++)
    // cout<<"\nAddresses using pointers : "<<&ptr2[i];


    // //Arithmetic operation
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<"\n"<<*ptr2;
    //     ptr2++;
    // }
    // for(int i =4; i>=0;i--)
    // {
    //     cout<<"\n"<<*ptr2;
    //     ptr2--;
    // }


    //Implementation of Character Array with pointer
    char arr2[5] = "1234";
    char *ptr3 = arr2;
    cout<<'\n'<<(void*)arr2;
    cout<<'\n'<<(void*)ptr3;
}