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


