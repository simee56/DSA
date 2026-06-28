//Reverse each column of a matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> col_reverse(vector<vector<int>>& mat, int N, int M)
{
    for(int j = 0; j<M; j++)
    {
        int start = 0, end = N-1;

        while(start < end)
        {
            swap(mat[start][j], mat[end][j]);
            start++;
            end --;
        }
    }

    return mat;
}

int main()
{
    int n, m;
    cout<<"Enter the number of rows and cols : ";
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout<<"Enter the elements = ";
    
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>mat[i][j];

    mat = col_reverse(mat, n ,m);

    cout<<"\nReversed matrix : \n";

    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cout<<mat[i][j]<<" ";

}



#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the number of rows and cols : ";
    cin>>n>>m;

    int arr[100][100];
    
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>arr[i][j];


    for(int j = 0; j<m; j++)
    {    
        int sum = 0;

        cout<<"\nSUm of col "<<j<<" is : \n";
        for(int i = 0; i<n; i++)
        {
            sum =  sum+ arr[i][j];
        }
        cout<<sum;
    }
}