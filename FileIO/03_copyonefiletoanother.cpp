#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("source.txt");  // Open source file in read mode
    ofstream outFile("destination.txt");  // Open destination file in write mode

    if (!inFile || !outFile) {
        cout << "Error opening files!" << endl;
        return 1; // Exit with error
    }

    string line;
    while (getline(inFile, line)) {  // Read line by line
        outFile << line << endl;  // Write to destination file
    }

    inFile.close();
    outFile.close();

    cout << "File copied successfully!" << endl;
    return 0;
}
