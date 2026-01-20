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

    int ans = isRecatangle(a,b,c,d);
    cout<<ans;
}



//Bishop - total moves of a bishop
#include<iostream>
using namespace std;

int TotalMoves(int x, int y)
{
    int count = 0 ;
    count+= min(8-x, 8-y);
    count+= min(8-x, y-1);
    count+= min(x-1, 8-y);
    count+= min(x-1, y-1);a

    return count;
}

int main()
{
    int A, B;
    cout<<"Enter the positions of bishop = ";
    cin>>A>>B;

    int ans = TotalMoves(A,B);
    cout<<ans;
}