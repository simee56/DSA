//Leap Year
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the year = ";
    cin>>n;

    if(n%400 == 0)
    cout<<"Given year "<<n<<" is a Leap Year.";

    else if(n%4 == 0 && n%100 !=0)
    cout<<"Given year "<<n<<" is a Leap Year.";

    else
    cout<<"Given year "<<n<<" is not a Leap Year.";
}


