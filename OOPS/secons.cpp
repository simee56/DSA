// Constructors

#include<iostream>
using namespace std;

class Customer {
    public:
    string name;
    int age;
    int balcance;

    // Default Consturctor
    Customer() {
        cout<<"Hii Simee"<<endl;
    }

    // Parameterized constructor
    Customer(string a, int b, int c) {
        name = a;
        age = b;
        balcance = c;
    }
};

int main ()
{
    Customer C1("Simee", 20, 100000);
    cout<<C1.name<<"\n"<<C1.age<<"\n"<<C1.balcance<<"\n";

}