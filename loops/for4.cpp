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


//print -    1
//         1 2 
//       1 2 3
//     1 2 3 4
//   1 2 3 4 5
#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        //print space
        for(col=1;col<=n-row;col++)
        cout<<"  ";

        //print numbers
        for(col=1;col<=row;col++)
        cout<<col<<" ";

        cout<<endl;
    }
}


// print -   A
//         A B 
//       A B C 
//     A B C D 
//   A B C D E
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        cout<<"  ";

        for(char name='A'; name<='A'+row-1; name++)
        {
           cout<<name<<" ";
        }
    cout<<endl;
    }
}