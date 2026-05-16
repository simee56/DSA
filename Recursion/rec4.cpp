//Check Pallindrome
#include<iostream>
using namespace std;

bool checkPallindrome(string str, int start, int end)
{
    if(start >= end)
    return 1;

    if(str[start] != str[end])
    return 0;

    return checkPallindrome(str, start + 1, end - 1)
;}

int main()
{
    string str;
    cin>>str;

    int start = 0, end = str.size()-1;
    
    cout<<checkPallindrome(str, start, end);
}