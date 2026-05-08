//Factorial of a number
#include<iostream>
using namespace std;

int factorial(int n)
{
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

    if( n < 0)
    {
        cout<<"Factorial of negative number isn't possible :(";
        return 0;
    }
    cout<<"Factorial of given number "<<n<<" is : "<<factorial(n);
}


//Sum of n natural numbers
#include<iostream>
using namespace std;

int sumOfNums(int n)
{
    //Base Case
    if(n==1 )
    return 1;

    return n + sumOfNums(n-1);

}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if( n < 0)
    {
        cout<<"Sum of negative number isn't possible :(";
        return 0;
    }
    cout<<"Sum of given number "<<n<<" is : "<<sumOfNums(n);
}