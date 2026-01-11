#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int rem, ans = 0, mul = 1;

    while(num > 0)
    {
        //remainder
        rem = num%2;

        //quotient
        num = num/2;

        //answer
        ans = rem*mul+ans;

        //multiplication
        mul = mul*10;
    }
    cout<<"The binary form of given number is = "<<ans;
}