//Subsequence of a set
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subseq(vector<int>arr, int index, int n, vector<int>temp, vector<vector<int> >&ans)
{

    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    //Element isnt included in the set
    subseq(arr, index+1, n, temp, ans);

    //Element is included in the set
    temp.push_back(arr[index]);
    subseq(arr, index+1, n, temp, ans);


}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; 

    vector<int>arr(n);
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n ; i++)
    cin>>arr[i];

    vector<int>temp;
    vector<vector<int> >ans;

    subseq(arr, 0, n, temp, ans);

    for(int i =0; i<ans.size(); i++)
    {
        for(int j =0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


//Print all the subets of a String
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subseq(string &s, int index, int n, string &temp, vector<string>&ans)
{

    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    //Element isnt included in the set
    subseq(s, index+1, n, temp, ans);

    //Element is included in the set
    temp.push_back(s[index]);
    subseq(s, index+1, n, temp, ans);
    temp.pop_back();


}

int main()
{
    string s;
    cout<<"Enter the elements of the String : ";
    cin>>s;

    string temp;
    vector<string>ans;

    subseq(s, 0, s.size(), temp, ans);

    for(int i =0; i<ans.size(); i++)
    {
        cout<<ans[i]<<"\n";
    }
}