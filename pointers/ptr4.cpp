//2D arrays

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

    int **ptr = new int*[n];


    //Final 2d array creation
    for(int i = 0; i<n ;i++)
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
   
}