//Function for prime number and factorial
#include<iostream>
using namespace std;
//prime
bool primeNumber(int n)
{
    if(n<2)
    return 0;

    for(int i =2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
};

//factorial
int factorial(int n)
{
    if(n == 0 ||n == 1)
    return 1;

    int fact =1;
    for(int i = 2; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
};

//main function
int main()
{
    int a, b;
    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"enter the value of b = ";
    cin>>b;
    cout<<"IS "<<a<<" a prime number ? "<<primeNumber(a)<<endl;
    cout<<"Factorial of "<<a<<" is = "<<factorial(a)<<endl;
    cout<<"IS "<<b<<" a prime number ? "<<primeNumber(b)<<endl;
    cout<<"Factorial of "<<b<<" is = "<<factorial(b)<<endl;
}



//sum of two numbers
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int num1, num2;
    cout<<"Enter the value of number1 = ";
    cin>>num1;
    cout<<"Enter the value of number2 = ";
    cin>>num2;

    int ans = sum(num1, num2);
    cout<<ans;
}