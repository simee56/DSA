//Dfanging an IP Adress
#include<iostream>
using namespace std;

int main()
{
    string address;
    cout<<"Enter the IP Address : ";
    cin>>address;
    int i = 0, n = address.size();

    while(i < n)
    {
        if(address[i] == '.')
        cout<<"[.]";
        else
        cout<<address[i];
        
        i++;
    }
}



//check if strign is rotated by two palces
#include<iostream>
using namespace std;

void clockRotated(string &s)
{
    char c = s[0];
    int index = 1;

    while(index <= s.size())
    {
        s[index-1] = s[index];
        index++;
    }
    s[s.size()-1] = c;
}

void antiClockRotated(string &s)
{
    char c = s[s.size()-1];
    int index = s.size()-2;

    while(index >= 0)
    {
        s[index+1] = s[index];
        index--;
    }
    s[0] = c;
}

bool isRotated(string str1, string str2)
{
    if(str1.size() != str2.size())
    return 0;

    string clockwise, antiClockwise;

    clockwise = str1;
    clockRotated(clockwise);
    clockRotated(clockwise);

    if(clockwise == str2)
    return 1;

    antiClockwise = str1;
    antiClockRotated(antiClockwise);
    antiClockRotated(antiClockwise);

    if(antiClockwise == str2)
    return 1;

    return 0;
}

int main()
{
    string str1, str2;
    cout<<"Enter the string 1: ";
    cin>>str1;
    cout<<"Enter the string 1: ";
    cin>>str2;

    cout<<isRotated(str1, str2);
}