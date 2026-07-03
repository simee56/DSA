// File handling - write data in a file

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream fout;
    // open the file
    fout.open("zoom.txt");

    fout<<"Hey this is sime pandey.";

    // Close the file
    fout.close();


}