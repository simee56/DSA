#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age, roll_number;
};

int main()
{
    Student s1;
    cin>>s1.name>>s1.age>>s1.roll_number;
    cout<<s1.name;
}