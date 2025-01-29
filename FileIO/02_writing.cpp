#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile("example.txt");  // Open file in write mode
    if (outFile.is_open()) {
        outFile << "Hello, File IO in C++!" << endl;
        outFile.close();  // Close file
    } else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
