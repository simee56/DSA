//DOUBLE POINTER

#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p1 = &n;
    cout<<p1<<endl;
    int **p2 = &p1;
    cout<<p2<<endl;
}