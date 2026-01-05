//table
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n to print the table = ";
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout<<i <<"*" <<n<< " is "<<i*n<<endl;
    }
}