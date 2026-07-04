// Abstraction - Abstraction means showing only the necessary details and hiding the implementation. We usually achieve this using abstract classes (classes with pure virtual functions).

#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.sound();
    c.sound();

    return 0;
}