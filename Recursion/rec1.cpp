//Basic code for recursion
#include<iostream>
using namespace std;

void print(int n)
{
    //Base Case
    if(n == 0)
    {
        cout<<"Happy Birthday!";
        return;
    }
    
    cout<<n<<" days left for birthday :)";
    cout<<endl;
    print(n-1);
}

int main()
{
    int n;
    cout<<"Enter the vlaue of n : ";
    cin>>n;

    print(n);
}


//Print n to 1

#include<iostream>
using namespace std;

void printNum(int n)
{
    if(n == 1)
    {
        cout<<n;
        return;
    }

    cout<<n<<'\n';
    printNum(n-1);
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    printNum(n);
}

//Print even number - input should be even
#include<iostream>
using namespace std;

void printEven(int n)
{
    if(n == 2)
    {
        cout<<n;
        return;
    }

    cout<<n<<'\n';
    printEven(n-2);
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(n%2 == 0)
    printEven(n);

    else
    { 
        n = n-1;
        printEven(n);
    }
}



//print odd numbers from 1 to n
#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 1)
    {
        cout<<n;
        return;
    }

    print(n - 2);
    cout<<"\n"<<n;
}


int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    if(n%2 == 1)
    print(n);

    else
    {
        n = n-1;
        print(n);
    }

}


//Table program for n

#include<iostream>
using namespace std;

void printTable(int i, int n)
{
    if( i == 10)
    {
        cout<<n*10;
        return;
    }

    cout<<i*n<<'\n';
    i++;
    printTable(i, n);
  
}

int main()
{   
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i =1;

    printTable(i, n);
}