//Search an element in 2D array
#include<iostream>
using namespace std;

void SearchElement(int arr[][100], int row, int col, int X)
{
    bool found = false;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0 ; j<col; j++)
        {
            if(arr[i][j] == X)
            {
                cout<<"value "<<X<<" is found at position ("<< i <<", "<< j << ")";
                found = true;
                return;
            }            
        }
    }
    if(!found)
    cout<<"value "<<X<<" is not found.";
};

int main()
{
    int row, col;
    cout<<"Enter the value of row : ";
    cin>>row;

    cout<<"Enter the value of column : ";
    cin>>col;

    int arr[100][100];

    cout<<"Enter the elemnts in array : ";

    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    int X;
    cout<<"Enter the value to search : ";
    cin>>X;

    SearchElement(arr, row, col, X);
}