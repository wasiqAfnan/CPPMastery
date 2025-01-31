#include <iostream>
#include <fstream>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    ifstream file("input.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    int vowelCount = 0;

    while (file.get(ch)) {
        if (isVowel(ch)) vowelCount++;
    }

    file.close();
    cout << "Number of vowels in the file: " << vowelCount << endl;

    return 0;
}
