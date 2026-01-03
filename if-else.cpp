//pass and fail
#include<iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks<33) {
        cout<<"You are failed!";
    }
    else {
        cout<<"You are passed!";
    };
}

//which number is greater
#include<iostream>
using namespace std;

int main () {
    int num1, num2;
    cout<<"enter first number = ";
    cin>>num1;
    cout<<"enter second number = ";
    cin>>num2;

    if(num1 > num2)
    cout<<"first number "<<num1<<" is greater.";
    else
    cout<<"second number "<<num2<<" is greater.";
}

//even or odd
#include<iostream>
using namespace std;

int main () {
     int n;
    cout<<"Enter number = ";
    cin>>n;

    if(n%2 == 0)
    cout<<"Given number " <<n<<" is Even.";
    else
    cout<<"Given number " <<n<<" is Odd.";
}
   
