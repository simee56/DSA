//factorial
#include<iostream>
using namespace std;

int main() {
    long int fact = 1;
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    if(n == 0 || n == 1)
    cout<<"Factorial is = "<<fact;

    else{
        for(int i = 1; i <= n; i++){
            fact = fact*i;
        }
        cout<<"Factorial of number "<<n<<" is "<< fact;
    }
}
