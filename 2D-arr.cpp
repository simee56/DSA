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

//Search an element in 2D array - Linear search
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


//Search an element in 2D array - Binary search
#include<iostream>
using namespace std;

void BinarySearch(int arr[][100], int row, int col, int X)
{
    bool found = false;

    for(int i = 0; i < row; i++)
    {
        if(arr[i][0] <= X && X <= arr[i][col-1])
        {
            int start = 0, end = col-1;

            while(start <= end)
            {
                int mid = start + (end - start) / 2;

                if(arr[i][mid] == X)
                {
                    cout<<"Element "<<X<<" is found at index "<<i<<", "<<mid;
                    found = true;
                    break;
                }

                else if(arr[i][mid] < X)
                start = mid + 1;

                else
                end = mid - 1;
            }
         }
    }
    if(!found)
    cout<<"Element "<<X<<" is not found at any index ";
}

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

    BinarySearch(arr, row, col, X);
}


//SEARCH IN ROW-COL SORTED MATRIX
#include<iostream>
using namespace std;

int Searching(int arr[][100], int row, int col, int X)
{
    int i = 0, j = col-1;

    while(i < row && j >=0)
    {
        if(arr[i][j] == X)
        return 1;

        else if(arr[i][j] < X)
        i++;

        else
        j--;
    }
    
    return 0;
}

int main()
{
    int row, col;
    cout<<"Enter the vlaue of rows : ";
    cin>>row;
    cout<<"Enter the value of columns : ";
    cin>>col;

    int arr[100][100];
    cout<<"Enter the elements : ";
    for(int i = 0; i < row; i++)
    for(int j = 0; j < col; j++)
    cin>>arr[i][j];

    int X;
    cout<<"Enter the target element : ";
    cin>>X;

    cout<<Searching(arr, row, col , X);
}