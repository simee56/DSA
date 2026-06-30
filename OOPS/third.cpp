// Static data member and Static memeber function

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_numer, balance;
    static int totalCustomer;   // Static data member

    public:

    Customer(string name, int acc_numer, int balance) {
        this->name = name;
        this->acc_numer = acc_numer;
        this->balance  = balance;
        totalCustomer++;
    }

    void displayValue() {
        cout<<name<<" "
            <<acc_numer<<" "
            <<balance<<" "
            <<totalCustomer<<endl;
    }

    static void access_static_data() {        //Static member function
        cout<<totalCustomer<<endl;
    }
};

int Customer::totalCustomer = 0;    //Initialization of the static data member

int main()
{
    Customer C1("simee", 18, 0);
    C1.displayValue();
    Customer C2("Anshu", 78, 0);
    C2.displayValue();
    Customer::access_static_data();     //Static menmber function helps to access data using Class
}