#include<iostream>
using namespace std;

class Customer {
    string name;
    int balance, acc_number;

    public :
    Customer(string name, int balance, int acc_number) {
        this -> name  = name;
        this -> balance =  balance;
        this -> acc_number = acc_number;
    }

    void deposit(int amount) {
        if(amount > 0) {
            balance += amount;
        }
        else
            throw "Amount should be greater than 0";
    }

    void withdraw(int amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
        }
        else if(amount < 0)
            throw "Amount should be greate than 0";
        else
            throw "Your balance is low ";
    }

    void displayValue() {
        cout<<"Current Balance is "<<balance<<endl;
    }
};

int main() {
    try {
        Customer C1("Simee", 2000, 123);
        C1.deposit(5);
        C1.displayValue();

        C1.withdraw(5000);
        C1.displayValue();
    }catch(const char *e) {
        cout<<"Exception Occurred: "<<e;
    }
  
}




// A simple example of try, catch and throw

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a nad b"<<endl;
    cin>>a>>b;

    try {
        if(b <= 0)
        throw "Denominator cant be 0 or less than 0";
        c =  a/b;
        cout<<"The ans is : "<<c<<endl;
    }
    catch(const char *e) {
        cout<<"An error is generated : "<<e;
    }
}