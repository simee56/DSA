//print patterns for n

// print -  *
//        * * * 
//      * * * * * 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        cout<<"  ";

        for(int col=1; col<=2*row-1; col++)
        cout<<"* ";

        cout<<endl;
    }
}


//print -    1
//         1 2 1
//       1 2 3 2 1
//     1 2 3 4 3 2 1
//   1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1 ; col<=n-row; col++)
        cout<<"  ";

        for(col=1; col<=row; col++)
        cout<<col<<" ";

        for(col=row-1; col>=1;col--)
        cout<<col<<" ";

        cout<<endl;
    }
}


// print-  * * * * * * * *  
//         * * *     * * * 
//         * *         * *
//         *             *
//         *             *
//         * *         * *
//         * * *     * * *
//         * * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(row =n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        cout<<"* ";

        for(col =1; col<=2*n-2*row; col++)
        cout<<"  ";

        for(col=1; col<=row; col++)
        cout<<"* ";

        cout<<endl;
    }

      for(row =1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        cout<<"* ";

        for(col =1; col<=2*n-2*row; col++)
        cout<<"  ";

        for(col=1; col<=row; col++)
        cout<<"* ";

        cout<<endl;
    }
}