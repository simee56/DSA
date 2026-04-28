#include<iostream>      
using namespace std;

void incr(int n)   //Withput pointer
{
    n++;
}

void incrm(int *ptr)   //Pass by pointers
{
    *ptr = *ptr + 1;
}

int main()
{
    int num = 10;
    int temp = num;
    incr(num);
    cout<<num<<endl;
    incrm(&num);
    cout<<num;
}


