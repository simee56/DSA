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


// This pointer
#include<iostream>
using namespace std;

class Customerr {
    string name;
    int age;
    int balance;

    public:
    //   this pointer stores the address of that object which calls it
    Customerr(string name, int age, int balance) {
        this->name = name;
        this->age = age;
        this->balance = balance;
    }

    void displayValue() {
        cout<<name<<"\n"<<age<<"\n"<<balance<<"\n";
    }
};

int main ()
{
    Customerr C1("Simee", 20, 100000);
    C1.displayValue();
}


// Copy constructor
#include<iostream>
using namespace std;

class Customerr {
    string name;
    int age;
    int balance;

    public:

    // Parameterized constructor
    Customerr(string n, int a, int b)
    {
        name = n;
        age = a;
        balance = b;
    }

    // Copy constructor
    Customerr(const Customerr &B)
    {
        name = B.name;
        age = B.age;
        balance = B.balance;
    }

    void displayValue() {
        cout<<name<<"\n"<<age<<"\n"<<balance<<"\n";
    }
};

int main ()
{
    Customerr C1("Simee", 20, 100000);
    C1.displayValue();

    Customerr C2(C1);     // -> Copy the value of C1 to C2
    C2.displayValue();
}


