/*
File I/O (Input/Output) in C++ allows reading from and writing to files using the <fstream> library. 
It provides three main classes:

ofstream (Output File Stream) – Used to write to files.
ifstream (Input File Stream) – Used to read from files.
fstream (File Stream) – Used for both reading and writing.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("example.txt");  // Open file in read mode
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {  // Read line by line
            cout << line << endl;
        }
        inFile.close();  // Close file
    } else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
