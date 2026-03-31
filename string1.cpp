#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"The output is : "<<s;


    string news;
    cout<<"\nEnter the second string : ";
    cin.ignore();
    getline(cin,news);
    cout<<"The output is : "<<news;
}