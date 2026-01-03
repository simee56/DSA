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