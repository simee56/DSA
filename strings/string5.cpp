//Longest substring without rpeating characters
#include<iostream>
using namespace std;

int longestSubstring(string s)
{
    int maxLen = 0, n = s.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            bool duplicate = false;

            for(int k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    duplicate = true;
                    break;
                }
            }

            if(duplicate)
            break;

            maxLen = max(maxLen, j-i+1);
        }
    }

    return maxLen;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    cout<<longestSubstring(s);
}