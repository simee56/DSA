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