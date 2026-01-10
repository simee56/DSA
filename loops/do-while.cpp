//print 1 to n
#include<iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout<<"Enter the value of n = ";
    cin>>n;

    do {
        cout<<i<<" ";
        i++;
    }while(i<=n);
}