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



//Change the address of a pointer using double pointer
#include<iostream>
using namespace std;

void fun(int **p)
{
    *p = *p +1;
}

int main()
{
    int n = 5;
    int * p1 = &n;
    int ** p2 = &p1;
    fun(p2);
    cout<<p1<<endl;
}


//Change the address of a pointer using reference variable
#include<iostream>
using namespace std;

void fun(int &p)
{
    p = p +1;
}

int main()
{
    int n = 5;
    int *p1 = &n;
    fun(*p1);
    cout<<p1<<endl;
}