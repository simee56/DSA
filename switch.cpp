//print days using switch

#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the value of i = ";
    cin>>i;

    switch(i)
    {
        case 1:
        cout<<"Mpnday";
        break;

        case 2 :
        cout<<"Tuesday";
        break;

        case 3 :
        cout<<"Wednesday";
        break;

        case 4 :
        cout<<"Thursday";
        break;

        case 5 :
        cout<<"Friday";
        break;

        case 6 :
        cout<<"Saturday";
        break;

        case 7 :
        cout<<"Sunday";
        break;

        default :
        cout<<"Enter valid number!";
    }
}