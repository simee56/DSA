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