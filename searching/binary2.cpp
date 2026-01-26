//SQRT
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number whose sqrt you want = ";
    cin>>n;

    int start = 1, end = n, mid, ans ;

    if(n == 0)
    cout<<0;

    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(mid == n/mid)
        {
            ans = mid;
            cout<<mid;
            break;
        }

        else if(mid < n/mid)
        {
            ans = mid;
            start = mid+1;
        }

        else
        end = mid-1;
    }
}