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


//Sort a String
#include<iostream>
#include<vector>
using namespace std;

string sort(string s)
{
    vector<int>alpha(26,0);
    for(int i = 0; i < s.size(); i++)
    {
        alpha[s[i]-'a']++;
    }

    string ans;
    for(int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while(alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }

    return ans;
}

int main()
{
    string s;
    cout<<"Enter the string in lowercase : ";
    cin>>s;

    cout<<sort(s);

}



//Two place rotation- second logic
#include<iostream>
using namespace std;


void clockRotated(string &s)
{
    int n = s.size();
    char lastChar = s[n-1];
    for(int i = n-1; i > 0; i--)
    s[i] = s[i-1];

    s[0] = lastChar;
}

void antiClockRotated(string &s)
{
    int n = s.size();
    char first = s[0];
    for(int i = 0; i<n-1; i++)
    s[i] = s[i+1];

    s[n-1] = first;
}

bool Two(string s1, string s2)
{
    if(s1.size() != s2.size())
    return 0;

    string clock = s1;
    clockRotated(clock);
    clockRotated(clock);

    if(clock == s2)
    return 1;

    string anti = s1;
    antiClockRotated(anti);
    antiClockRotated(anti);

    if(anti == s2)
    return 1;

    return 0;
}

int main()
{
    string s1, s2;
    cout<<"Enter both strings : ";
    cin>>s1>>s2;
    cout<<Two(s1, s2);
}


//check a Pangram
#include<iostream>
#include<vector>
using namespace std;

bool pangram(string s)
{
    vector<int>allChars(26, 0);
    int i = 0;
    while(i < s.size())
    {
        allChars[s[i] - 'a']++;
        i++;
    }

    for(int i = 0 ; i<26; i++)
    {
        if(allChars[i] == 0)
        return 0;
    }

    return 1;
}

int main()
{
    string sentence;
    cout<<"Enter the sentence : ";
    cin>>sentence;
    cout<<pangram(sentence);
    
}