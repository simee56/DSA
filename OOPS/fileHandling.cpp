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


// store data in a file
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements : ";
    for(int i = 0; i<n ; i++)
    cin>>arr[i];

    ofstream fout;
    fout.open("data.txt");

    fout<<"Original Data : \n";

    for(int i = 0; i < n; i++) {
        fout<<arr[i]<<" ";
    }

    sort(arr.begin(), arr.end());

    fout<<"\nSorted Data \n";

    for(int i = 0; i < n; i++) {
        fout<<arr[i]<<" ";
    }    

    fout.close();

}