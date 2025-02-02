#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main() {
    ifstream file("input.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    stack<string> lines;
    string line;

    while (getline(file, line)) {
        lines.push(line);
    }
    file.close();

    ofstream outFile("reversed.txt");
    while (!lines.empty()) {
        outFile << lines.top() << endl;
        lines.pop();
    }

    outFile.close();
    cout << "File reversed successfully!" << endl;

    return 0;
}
