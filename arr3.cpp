//Find missing and repeateed number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size = \n";
    cin>>n;

    int arr[100];

    cout<<"Enter elements in array = ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int new_arr[100] = {0};

    for(int i = 0; i<n; i++)
    new_arr[arr[i]-1]++;

    //Missing element
    for(int i = 0; i<n; i++)
    {
        if(new_arr[i] == 0)
        {
            cout<<"Missing element is = "<<i+1;
            break;            
        }
    }

    //Repeated elemets
    for(int i = 0; i<n; i++)
    {
        if(new_arr[i] == 2)
        {
            cout<<"\nRepeated element is "<<i+1;
            break;
        }
    }

}