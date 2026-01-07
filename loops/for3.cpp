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


// print -  a b c d e
//          a b c d e
//          a b c d e
//          a b c d e
//          a b c d e
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