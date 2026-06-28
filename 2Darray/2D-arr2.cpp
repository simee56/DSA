

//Add two matrix
#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter the value of row : ";
    cin>>row;

    cout<<"Enter the value of column : ";
    cin>>col;

    int matrix1[100][100];
    cout<<"Enter the elemnts in matrix1 : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>matrix1[i][j];

    int matrix2[100][100];
    cout<<"Enter the elemnts in matrix2 : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>matrix2[i][j];

    int sum[100][100];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    cout<<"The sum matrix is : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cout<<sum[i][j]<<" ";
}


//Print row_index with maximum sum
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int row, col;

    cout<<"Enter the value of row : ";
    cin>>row;
    cout<<"Enter the value of column : ";
    cin>>col;

    int arr[100][100];
    cout<<"Enter the elemnts in arr : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    int sum = INT_MIN, index = -1;

    for(int i = 0; i < row; i++)
    {
        int total = 0;
        for(int j = 0; j < col; j++)
        {
            total += arr[i][j];
            if(sum < total)
            {
                sum = total;
                index = i;
            }
        }
    }

    cout<<"The row which have the maximum sum "<<sum<<" is :"<<index;
}


//Print sum of diagonal elements
#include<iostream>
using namespace std;
int main()
{
    int row, col;

    cout<<"Enter the value of row : ";
    cin>>row;
    cout<<"Enter the value of column : ";
    cin>>col;

    if(row != col)
    {
        cout<<"Please enter same values for row and col.";
        return 0;
    }
 
    int arr[100][100];
    cout<<"Enter the elemnts in arr : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    int first = 0, second = 0;

    //sum of fist diagonal elements
    for(int i = 0; i < row; i++)
    first += arr[i][i];

    cout<<"Sum of firts diagonal "<<first<<endl;

    //sum of fist diagonal elements
    int i = 0, j = col-1;
    while(j >= 0)
    {
        second += arr[i][j];
        i++;
        j--;
    }

    cout<<"Sum of second diagonal "<<second<<endl;
}



//Reverse each row of matrix
#include<iostream>
using namespace std;
int main()
{
    int row, col;

    cout<<"Enter the value of row : ";
    cin>>row;
    cout<<"Enter the value of column : ";
    cin>>col;

    int arr[100][100];
    cout<<"Enter the elemnts in arr : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    for(int i = 0; i< row; i++)
    {
        int start = 0, end = col-1;

        while(start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start ++;
            end --;
        }
    }

    cout<<"Reversed Array : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cout<<arr[i][j]<<" ";
}