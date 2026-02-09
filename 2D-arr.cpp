#include<iostream>
using namespace std;

//col wise - function call
void printcolwise(int arr[][4], int row, int col)
{
    cout<<"Column Wise : ";
    for(int j = 0; j<col; j++)
    for(int i = 0; i<row; i++)
    cout<< arr[i][j]<<" ";
}

int main()
{
    //Create and initialize 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the value row wise     
    cout<<"Row Wise : ";   
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        cout<<arr[i][j]<<" ";
    }

    //print all the values column wise - using function call
    printcolwise(arr, 4, 3);
}