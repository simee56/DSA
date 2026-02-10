//Wave form
#include<iostream>
using namespace std;

void PrintInwaveForm(int matrix[][100], int rows, int col)
{
    for(int j = 0; j < col; j++)
    {
        if(j % 2 == 0)
        {
            for(int i = 0; i < rows; i++)
            cout<<matrix[i][j]<<" ";
        }
        else
        {
            for(int i = rows-1; i >= 0; i--)
            cout<<matrix[i][j]<<" ";
        }
    }
}

int main()
{
    int row, col;
    cout<<"Enter the value of row : ";
    cin>>row;

    cout<<"Enter the value of column : ";
    cin>>col;

    int matrix[100][100];
    cout<<"Enter the elemnts in matrix1 : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>matrix[i][j];

    PrintInwaveForm(matrix, row, col);
}