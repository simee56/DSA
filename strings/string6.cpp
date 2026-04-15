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