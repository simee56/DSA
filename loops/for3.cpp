// Print -   * * * * *
//           * * * * *
//           * * * * *
//           * * * * *
//           * * * * *

#include<iostream>
using namespace std;
int main() 
{
    for(int j=0; j<5; j++) 
    {
        for(int i=0; i<5; i++) 
        {
            cout<<"* ";
        };

        cout<<endl;
    }
}


// print -  1 1 1 1 1
//          2 2 2 2 2
//          3 3 3 3 3
//          4 4 4 4 4
//          5 5 5 5 5

#include<iostream>
using namespace std;
int main() 
{
    for (int j = 1; j <= 5; j++)
    {
        for(int i = 1; i <= 5; i++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// print -  1 2 3 4 5
//          1 2 3 4 5
//          1 2 3 4 5
//          1 2 3 4 5
//          1 2 3 4 5
#include<iostream>
using namespace std;
int main() 
{
    for (int j = 1; j <= 5; j++)
    {
        for(int i = 1; i <= 5; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


// print -  1 4 9 16 25
//          1 4 9 16 25
//          1 4 9 16 25
//          1 4 9 16 25
//          1 4 9 16 25
#include<iostream>
using namespace std;
int main() 
{
    for (int j = 1; j <= 5; j++)
    {
        for(int i = 1; i <= 5; i++)
        {
            cout<<i*i<<" ";
        }
        cout<<endl;
    }
}


// print -  a a a a a 
//          b b b b b
//          c c c c c
//          d d d d d
//          e e e e e
#include<iostream>
using namespace std;

int main()
{
    for(char row = 'a'; row <= 'e'; row++ )
    {
        for(int col = 1; col <= 5; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}


// print - 1 2 3 4 5
//         6 7 8 9 10
//         11 12 13 14 15
//         16 17 18 19 20
//         21 22 23 24 25
#include<iostream>
using namespace std;

int main() 
{
    int count = 1;

    for(int j=1; j<=5; j++)
    {
        for(int i=1; i<=5;i++)
        {
            cout<<count<<" ";
            count = count+1;
        }
        cout<<endl;
    }
}