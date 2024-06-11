#include <iostream>
using namespace std;

// Template class for Calculator
// T1 represents the type of the first parameter, T2 represents the type of the second parameter (defaulting to float)
template <class T1, class T2 = float>
class Calculator {
    T1 x; // First parameter
    T2 y; // Second parameter
    T2 z; // Result

public:
    // Constructor taking two parameters of types T1 and T2
    Calculator(T1 a, T2 b) {
        x = a;
        y = b;
    }

    // Function to perform addition
    void add() {
        z = x + y;
    }

    // Function to display the result
    void display() {
        cout << z << endl;
    }
};

int main() {
    // Example usage with explicit types
    Calculator<int, float> c1(5, 2.5);

    // Example usage with default type for the second parameter
    Calculator<int> c2(5, 8.5);

    // Perform addition and display results for both instances
    c1.add();
    c1.display();
    c2.add();
    c2.display();

    return 0;
}
