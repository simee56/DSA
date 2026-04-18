//Longest Prefix and Suffix
#include<iostream>
#include <algorithm>
using namespace std;

int LPS(string s)
{
    int n = s.size()-1,  len = 0;
    string prefix = "", suffix = "";

    for(int i = 0; i < n; i++)
    {
        prefix += s[i];
        suffix = s[n - i] + suffix;

        if(prefix == suffix)
        len =  prefix.length();
    }
    return len;
}

int main()
{
    string S;
    cin>>S;
    cout<<LPS(S);
}



// KMP Algorithm - Longst prefix suffix
#include<iostream>
#include<vector>
using namespace std;

int longestPefixSuffix(string s)
{
    vector<int>LPS(s.size(),0);
    int pre = 0, suff = 1;

    while(suff < s.size())
    {
        if(s[pre] == s[suff])
        {
            LPS[suff] = pre + 1;
            pre++;
            suff++;
        }
        else
        {
            if(pre == 0)
            {
                LPS[suff] = 0;
                suff++;
            }
            else
            pre = LPS[pre - 1];
        }
    }

    return LPS[s.size() - 1];
}



int main()
{
    string S;
    cout<<"Enter the String : ";
    cin>>S;

    cout<<longestPefixSuffix(S);
}









#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int stringMatching(string s1,string s2)
{
    int n = s1.size(), m = s2.size();
    for(int i = 0 ; i <= n-m; i++)
    {
        int first = i, second = 0;
        while(second < m)
    {
        if(s1[first] == s2[second])
        {
            first++, second++;
        }
        else
        break;
    }

      if(second == m)
        return first-second;

    }
       return -1;

}


int main()
{
    string s1, s2;
    cin>>s1>>s2;
    cout<<stringMatching(s1, s2);
}