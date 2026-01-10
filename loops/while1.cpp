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


//print factors
#include<iostream>
using namespace std;
int main()
{
    int i=1, n;
    cout<<"Enter the value of n = ";
    cin>>n;

    cout<<"Factors of "<<n<<" are = ";
    while(i<=n)
    {
        if(n%i ==0)
        cout<<i<<" ";

        i++;
    }

}

//even and odd
#include<iostream>
using namespace std;
int main()
{
    int i=0, n;
    cout<<"enter the value of n = ";
    cin>>n;

    while(i<=n)
    {
        if(i%2 == 0)
        cout<<i<<" ";

        else
        cout<<i<<" ";

        i++;
    }
}