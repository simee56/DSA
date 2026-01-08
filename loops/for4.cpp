//Pattern printing for n times

// print - *
//       * *
//     * * *

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter th value of n = ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        //pritn space
        for(int col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        //print star
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}