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


//transpose of a matrix - Diagonal ke upar wale
#include<iostream>
using namespace std;

void TransposeMatirx(int arr[][100], int row, int col)
{
    if(row != col) 
    {
        cout << "Transpose using swap works only for square matrix.";
        return;
    }

    for(int i = 0; i < row-1; i++)
    for(int j = i+1; j < col; j++)
    swap(arr[i][j], arr[j][i]);
}

int  main()
{
    int row, col;
    cout<<"Enter the rows : ";
    cin>>row;

    cout<<"Enter the col : ";
    cin>>col;

    int arr[100][100];
    cout<<"Enter the element in array : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    TransposeMatirx(arr, row, col);

    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cout<<arr[i][j]<<" ";
}


//transpose of a matrix - Diagonal ke neehce wale
#include<iostream>
using namespace std;

void TransposeMatirx(int arr[][100], int row, int col)
{
    if(row != col) 
    {
        cout << "Transpose using swap works only for square matrix.";
        return;
    }

    for(int i = 0; i < row; i++)
    for(int j = 0; j < i; j++)
    swap(arr[i][j], arr[j][i]);
}
int  main()
{
    int row, col;
    cout<<"Enter the rows : ";
    cin>>row;

    cout<<"Enter the col : ";
    cin>>col;

    int arr[100][100];
    cout<<"Enter the element in array : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    TransposeMatirx(arr, row, col);

    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cout<<arr[i][j]<<" ";
}


//Rotate a matrix by 90
#include<iostream>
using namespace std;

void RotateMatrix(int arr[][100], int n)
{
    int ans[100][100];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans[j][n-i-1] = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cout<<ans[i][j]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the value of rows and cols : ";
    cin>>n;

    int arr[100][100];
    cout<<"Enter the element in array : ";
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    RotateMatrix(arr, n);
}