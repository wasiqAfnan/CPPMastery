#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt"); // Open the file for reading
    if (!file.is_open()) { // If file opened successfully
        cout << "Error: Couldn't open the file!" << endl;
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    string line;

    while (getline(file, line)) { // Read the file line by line
        lineCount++; // Count the line
        charCount += line.length(); // Add number of characters

        bool inWord = false;
        for (char c : line) {
            if (isspace(c)) {
                if (inWord) {
                    wordCount++;
                    inWord = false;
                }
            } else {
                inWord = true;
            }
        }
        if (inWord) { // To count the last word in the line
            wordCount++;
        }
    }

    file.close(); // Close the file

    // Display the results
    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;

    return 0;
}