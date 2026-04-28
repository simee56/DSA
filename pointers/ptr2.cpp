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




#include<iostream>
using namespace std;

void d(int *p)
{
    for(int i = 0; i<n; i++)
    p[i]= p[i]*2;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    d(arr, 5);
    for(int i  =0; i<arr.size(); i++)
    cout<<arr[i];
}


#include<iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

int main()
{
    int a = 9, b = 7;
    swap(&a, &b);
    cout<<a<<b;
}
