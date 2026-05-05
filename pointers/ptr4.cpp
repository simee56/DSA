//2D arrays creation using pointers

#include<iostream>
using namespace std;

int main()
{
    // Array which stores address
    int n, m;

    cout<<"Enter the values of rows : ";
    cin>>n;
    cout<<"Enter the values pf columns : ";
    cin>>m;

    int **ptr = new int*[n];    //Array which contains adsresses


    //Final 2d array creation
    for(int i = 0; i<n ;i++)    //1D array consisting values
    {
        ptr[i] = new int[m];  
    }

    //Input values
    cout<<"Enter the values : ";
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>ptr[i][j];

    //Print the values
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }
   

    //Release the mmeory from Heap

    for(int i = 0; i<n; i++)
    {
        delete [] ptr[i]; //firstly release the memory of 1d array that contains values
    }

    delete [] ptr;  //This will release the memory of address array
}