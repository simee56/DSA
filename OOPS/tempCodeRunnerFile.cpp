
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a nad b"<<endl;
    cin>>a>>b;

    try {
        if(b <= 0)
        throw "Denominator cant be 0 or less than 0";
        c =  a/b;
        cout<<"The ans is : "<<c<<endl;
    }
    catch(const char *e) {
        cout<<"An error is generated : "<<e;
    }
}