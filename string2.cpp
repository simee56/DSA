//Reverse a string
#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter the stirng : ";
    cin>>name;

    int start = 0, end = name.size()-1;

    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout<<name;
}


//Size of a String - withput using size method
#include<iostream>
using namespace std;

int main()
{
    string S;
    cin>>S;
    
    int Size = 0;
    while(S[Size] != '\0')
    Size++;

    cout<<Size;
}


//Pallindrome
#include<iostream>
using namespace std;

int main()
{
    string s1;
    cin>>s1;

    int start = 0, end = s1.size()-1;

    while(start < end)
    {
        if(s1[start] != s1[end])
        {
            cout<<"not a Pallindrome";
            break;
        }
        start++;
        end--;
       
    }
}