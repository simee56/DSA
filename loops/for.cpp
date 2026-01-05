//printing numbers from 0 to 10
#include<iostream>
using namespace std;

int main() 
{
    for(int i =0; i<=10; i++){
        cout<<i<<endl;
    }
}


//printing square
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(int i = 0; i<10; i++){
        cout<<"The square of "<<i<<" is "<<i*i<<endl;
    }
}


//print a to z
#include<iostream>
using namespace std;

int main() {
    for( char character = 'a'; character <= 'z'; character = character+1) {
        cout<<character<< " ";
    }
}

//table
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n to print the table = ";
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout<<i <<"*" <<n<< " is "<<i*n<<endl;
    }
}

//calculate the power of a number
#include<iostream>
using namespace std;

int main()
{
    int n, num, pow;

    cout<<"Enter the value of = ";
    cin>>n;

    cout<<"Enter the power = ";
    cin>>pow;

    num = n;

    for (int i = 1; i<pow; i++){
        num = num * n;
    };
    cout<<num;
}

//print sum of n natural numbers
#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter the value of n = ";
    cin>>n;

    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<sum;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = (n*(n+1))/2;
    cout<<sum;
}