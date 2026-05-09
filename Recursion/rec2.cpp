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


//Power of any number
#include<iostream>
using namespace std;

int powerOfTwo(int num, int n)
{
    //Base Case
    if(n ==0)
    return 1;

    return num * powerOfTwo(num, n-1);

}

int main()
{
    int n, num;
    cout<<"Enter the n(power) : ";
    cin>>n;
    cout<<"Enter the num : ";
    cin>>num;
 
    if( n < 0)
    {
        cout<<"Power of negative number isn't possible :(";
        return 0;
    }
    cout<<num<<" To the power "<<n<<" is : "<<powerOfTwo(num, n);
}



//Sum of square of n numbers
#include<iostream>
using namespace std;

int sumOfSqaure(int num)
{
    //Base Case
    if(num == 1)
    return 1;

    return num * num + sumOfSqaure(num-1);

}

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;
 
    if( num < 0)
    {
        cout<<"Square of negative number isn't possible :(";
        return 0;
    }
    cout<<"Sum of Sqaure of "<<num<<" number is : "<<sumOfSqaure(num);
}



//Sum of cube of n numbers
#include<iostream>
using namespace std;

int sumOfCube(int num)
{
    //Base Case
    if(num == 1)
    return 1;

    return num * num * num + sumOfCube(num-1);

}

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;
 
    if( num < 0)
    {
        cout<<"Cube of negative number isn't possible :(";
        return 0;
    }
    cout<<"Sum of Cube of "<<num<<" number is : "<<sumOfCube(num);
}



//Check prime or not
#include<iostream>
using namespace std;

void prime(int i, int n)
{
    // Base case
    if(i == 1)
    {
        cout<<"It is a Prime number";
        return;
    }


    if(n % i == 0)
    {
        cout<<"Not a Prime number";
        return;
    }
  
    prime(i-1, n);
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    if(n <= 1)
    {
        cout<<"Not a Prime number";
        return 0;
    }

    prime(n-1, n);
}


//GCD of twoi numbers
#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b == 0)
    return a;

    return GCD(b, a%b);
}

int main()
{
    int num1, num2;
    cout<<"Enter number1 : ";
    cin>>num1;
    cout<<"Enter number2 : ";
    cin>>num2;

    cout<<GCD(num1, num2);
}