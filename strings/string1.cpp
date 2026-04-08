#include<iostream>
using namespace std;
int main()
{
    //Normal method - use cin but ts doesnt print space. 
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"The output is : "<<s;


    //use getline and cin.ignore() - getline prints space too and cin.ignore() helps getline to not to read the empty string.
    string news;
    cout<<"\nEnter the second string : ";
    cin.ignore();
    getline(cin,news);
    cout<<"The output is : "<<news;
    
    
    //Escape character
    string s2 = "Simee is a \"good\" girl\n";
    cout<<s2;

    string doubleEsc = "\\";
    cout<<doubleEsc;
}