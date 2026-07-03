// File handling - write data in a file

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream fout;    // fout is an object
    // open the file
    fout.open("zoom.txt");

    fout<<"Hey this is simee pandey.";

    // Close the file
    fout.close();
}

//Read a file

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream fin;    //fin is an object

    // open the file
    fin.open("zoom.txt");

    char c;
    c = fin.get();

    while(!fin.eof()) {
        cout<<c;
        c = fin.get();     // Read next character
    }

    // Close the file
    fin.close();
}