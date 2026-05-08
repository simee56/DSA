#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact;

    //Base Case
    if(n==1 || n==0)
    return 1;

    return n * factorial(n-1);

}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Factorial of given number "<<n<<" is : "<<factorial(n);
}