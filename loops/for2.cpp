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


//prime number
#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n = ";
    cin>>n;

    if(n<2)
    {
        cout<<"Given number isnt prime.";
        return 0;
    }

    else{
        for(int i = 2; i < n; i++){
            if(n%i == 0)
            {
                cout<<"Given number isnt prime.";
                return 0;
            }
        }
        cout<<"Given number is a prime number.";
    }
}


//Fibonacci series
#include<iostream>
using namespace std;

int main() {
    int current, n, last=0, previous=1;
    
    cout<<"Enter the value of n = ";
    cin>>n;

      if (n == 0) {
        cout << 0;
        return 0;
    }

    if (n == 1) {
        cout << 1;
        return 0;
    }

    for(int i=1; i<n; i++){
        current = previous+last;
        last = previous;
        previous = current;

        cout<<current<< ", ";

    }
}

