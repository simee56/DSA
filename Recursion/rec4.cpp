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


//Count vowels
#include<iostream>
using namespace std;

int countVowels(string str, int index)
{
    if(index == -1)
    return 0;

    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    return 1 + countVowels(str, index - 1);

    else 
    return countVowels(str, index - 1);
}

int main()
{
    string str;
    cin>>str;

    int index = str.size()-1;

    cout<<countVowels(str, index);
};


//Reverse a string
#include<iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    if(start >= end)
    return;

    char c = str[start];
    str[start] =  str[end];
    str[end] = c;

    reverseString(str, start + 1, end -1);
}

int main()
{
    string str;
    cin>>str;

    int start = 0, end = str.size() -1;

    reverseString(str, start, end);
    cout<<str;
}


//Lower alphabet to Upper
#include<iostream>
using namespace std;

void lowerToUpper(string &str, int index)
{
    if(index == -1)
    return;

    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str, index-1);
}

int main()
{
    string str;
    cin>>str;

    int index = str.size() - 1;

    lowerToUpper(str, index);
    cout<<str;
}