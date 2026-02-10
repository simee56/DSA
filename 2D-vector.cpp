#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Create a 2D vector
    vector<vector<int>>vec1;

    // vector<vector<int>>vec2(rows, vector<int>(col, inititalization))
    vector<vector<int> >vec2(3, vector<int>(2, 1));

    for(int i = 0; i<3; i++)
    for(int j = 0; j<2; j++)
    cout<<vec2[i][j]<<" ";

    //To find the values of rows and cols
    cout<<"Rows present in vec2 = "<<vec2.size()<<endl;
    cout<<"Columns present in vec2 = "<<vec2[0].size()<<endl;


    //Take input from user
    int n, m;
    cout<<"Enter the number of rows = ";
    cin>>n;
    cout<<"Enter the number of columns = ";
    cin>>m;

    vector<vector<int >>vec3(n, vector<int>(m));

    cout<<"Enter the elements in vector : ";
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>vec3[i][j];

    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cout<<vec3[i][j]<<" ";

}