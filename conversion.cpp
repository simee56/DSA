//Decimal to Binary
//while loop
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
//for loop
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int rem, ans = 0, mul = 1;

    for(mul=1; num>0; mul*=10)
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



//Binary to Decimal
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
        rem = num%10;

        //quotient
        num = num/10;

        //answer
        ans = rem*mul+ans;

        //multiplication
        mul = mul*2;
    }
    cout<<"The Decimal form of given number is = "<<ans;
}


//Decimal to Octal
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
        rem = num%8;

        //quotient
        num = num/8;

        //answer
        ans = rem*mul+ans;

        //multiplication
        mul = mul*10;
    }
    cout<<"The Octal form of given number is = "<<ans;
}


//Binary to Octal
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int rem, decimal = 0, mul = 1;

    //FIRSTLY CONVERT BINARY INTO DECIMAL   
    while(num > 0)
    {
        rem = num%10;
        num = num/10;
        decimal = rem*mul+decimal;
        mul = mul*2;
    }
        cout<<"The Decimal form of given number is = "<<decimal<<endl;

    //Decimal to Octal
    int num1 = decimal;
    int octal = 0;
    mul = 1;

     while(num1 > 0)
    {
        rem = num1%8;
        num1 = num1/8;
        octal = rem*mul+octal;
        mul = mul*10;
    }
    cout<<"The Octal form of given number is = "<<octal;

}
