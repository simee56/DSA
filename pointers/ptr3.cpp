//DOUBLE POINTER

#include<iostream>
using namespace std;

int main()
{
    int n = 10;

    int *p1 = &n;    //Stores the address of variable n
    cout<<p1<<endl;

    int **p2 = &p1;  //Stores the address of pointer P1
    cout<<p2<<endl;

    *p1 = *p1 +10;  //Updating the value of n using p1
    cout<<n<<endl;

    **p2 = **p2 + 1;   //Updating the value of n using p2
    cout<<**p2;

}