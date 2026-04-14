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


//Smallest distinct window
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int smallestSubString(string S)
{
    vector<bool>count(256,0);
    int first = 0, second = 0, len = S.size(), uniqueChar;

    //calculate the unique chars
    while(first < S.size())
    {
        if(count[S[first]] = 0)
        uniqueChar++;

        count[S[first]]++;
        first++;
    }

    for(int i =0; i < 256; i++)
    count[i] = 0;

    first = 0;

    while(second < S.size())
    {
        //Unique char exists
        while(uniqueChar && second < S.size())
        {
            if(count[S[second]] == 0)
            uniqueChar--;

            count[S[second]]++;
            second++;
        }

        len = min(len, second - first );

        //Unique cahr becomes 1

        while(uniqueChar != 1)
        {
            len = min(len, second - first );
            count[S[first]]--;

            if(count[S[first]] == 0)
            uniqueChar++;

            first++;
        }
    }
    return len;
}

int main()
{
    string s;
    cout<<"Enter the string :";
    cin>>s;

    cout<<smallestSubString(s);
}



