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




//3D array creation using pointers
#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout<<"Enter the values of x, y and z : ";
    cin>>x>>y>>z;

    //Firstly create the array which will store the addresess of the 2d arrays
    int ***ptr  = new int **[x];

    //Now creating 2 Array
    for(int i = 0; i < x; i++)
    {
        ptr[i] = new int *[y];
        for(int j = 0; j < y; j++)
        {
            ptr[i][j] = new int [z];
        }
    }

    for(int i = 0; i< x; i++)
    {
        for(int j =0; j <y; j++)
        {
            for(int k =0; k < z; k++)
            ptr[i][j][k] = i+j+k;
        }
    }

     for(int i = 0; i< x; i++)
    {
        for(int j =0; j <y; j++)
        {
            for(int k =0; k < z; k++)
            cout<<ptr[i][j][k]<<" ";
        }
    }
}