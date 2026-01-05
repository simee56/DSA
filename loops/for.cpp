//printing numbers from 0 to 10
#include<iostream>
using namespace std;

int main() 
{
    for(int i =0; i<=10; i++){
        cout<<i<<endl;
    }
}


//printing square
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(int i = 0; i<10; i++){
        cout<<"The square of "<<i<<" is "<<i*i<<endl;
    }
}