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


//isRecatangle
#include<iostream>
using namespace std;

bool isRecatangle(int a, int b, int c, int d)
{
    if((a==b && b==c) || (a==c && b==d) || (a=d && b==c))
    return 1;

    else
    return 0;
}


int main()
{
    int a, b, c, d;
    cout<<"Enter values = ";
    cin>>a>>b>>c>>d;

    int ans = isRecatangle(a,b,b,c);
    cout<<ans;
}