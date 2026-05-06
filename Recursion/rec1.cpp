#include<iostream>
using namespace std;

void print(int n)
{
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