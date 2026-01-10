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

//sum
#include<iostream>
using namespace std;
int main()
{
    int i =0, sum= 0, n;
    cout<<"Enter the value of n = ";
    cin>>n;

    do{
        sum = sum+i;
        i++;
    }while(i<=n);

    cout<<sum;
}