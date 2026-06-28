// When Class is public you can acces values from everywhere
#include<iostream>
using namespace std;

class Student1 {
    public:
    string name;
    int age, roll_number;
};

int main()
{
    Student1 s1;
    cin>>s1.name>>s1.age>>s1.roll_number;
    cout<<s1.name;
}


// When class is private you have to define a function to access values from everywhere but make sure that the function muust be public
#include<iostream>
using namespace std;

class Student2 {
    private:
    string name;
    int age, roll_number;

    // Setter function
    public:
    void setValues(string n, int a, int r)
    {   
        name = n;
        age = a;
        roll_number = r;
    }

    // Getter function
    void getValues()
    {
        cout<<name<<age<<roll_number;
    }
};

int main()
{
    Student2 s1;
    s1.setValues("Simee", 20, 235);
    s1.getValues();
}
