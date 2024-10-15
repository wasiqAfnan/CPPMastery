#include <iostream>
using namespace std;

// Template class for representing complex numbers
template <class T>
class Complex {
    T real;        // Real part of the complex number
    T imaginary;   // Imaginary part of the complex number

public:
    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(T x, T y) {
        real = x;
        imaginary = y;
    }

    // Function to add two complex numbers
    Complex add(Complex c1) {
        Complex temp;
        temp.real = this->real + c1.real;
        temp.imaginary = this->imaginary + c1.imaginary;
        return temp;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Example usage with integers
    // Complex <int> c1(2, 5);
    // Complex <int> c2(7, 8);
    // Complex <int> c3;
    // c3 = c1.add(c2);
    // c3.display();

    // Example usage with floats
    Complex <float> c1(2.5, 5.3);
    Complex <float> c2(7.3, 8.1);
    Complex <float> c3;
    c3 = c1.add(c2);
    c3.display();
}
