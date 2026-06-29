// Constructors

#include<iostream>
using namespace std;

class Customer {
    string name;
    int age;
    int balance;

    public:

    // Default Consturctor
    Customer() {
        cout<<"Hii Simee"<<endl;
    }

    // Parameterized constructor
    Customer(string a, int b, int c) {
        name = a;
        age = b;
        balance = c;
    }

    void displayValue() {
        cout<<name<<"\n"<<age<<"\n"<<balance<<"\n";
    }
};

int main ()
{
    Customer C1("Simee", 20, 100000);
    C1.displayValue();
    Customer C2("Anshikaa", 20, 100000);
    C2.displayValue();
    Customer C3("Ujjwal", 20, 100000);
    C3.displayValue();

}