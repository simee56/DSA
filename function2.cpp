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