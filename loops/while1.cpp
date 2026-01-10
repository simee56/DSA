//table
#include<iostream>
using namespace std;
int main()
{
    int i=1, n;
    cout<<"enter the value of n = ";
    cin>>n;

    cout<<"Table of "<<n<< " is = "<<endl;

    while(i<=10)
    {
        cout<<n*i<<endl;
        i++;
    }
}