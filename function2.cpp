//Convert a to A
#include<iostream>
using namespace std;

char Convert(char name)
{
    char ans;
    ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char character ;
    cout<<"Enter character = ";
    cin>>character;

    char ans = Convert(character);
    cout<<"Given character "<<character<<" is converted into "<<ans;
}


//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;

int CountDigit(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num/=10;
    }

    return count;
}

bool isArmstrong(int num, int digits)
{
    int n= num, rem, ans = 0;
        while(n)
    {
        rem = n % 10;

        int power = 1;
        for(int i = 0; i < digits; i++)
        {
            power *= rem;
        }

        ans += power;
        n /= 10;
    }

    return ans == num;
}


int main()
{
    int num;
    cin>>num;
    int digits = CountDigit(num);
    int ans = isArmstrong(num, digits);
    cout<<ans;
}