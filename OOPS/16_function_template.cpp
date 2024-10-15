#include <iostream>
using namespace std;

// Template function for adding two values of the same type T
template <class T>
T add(T a, T b) {
    return a + b;
}

// Template function for swapping two values of the same type T1
template <class T1>
void swapp(T1 &a, T1 &b) {
    T1 temp = a;
    a = b;
    b = temp;
}

int main() {
    // Example usage of the add function with integers
    cout << "Sum of integers: " << add<int>(5, 9) << endl;

    // Example usage of the add function with floating-point numbers
    cout << "Sum of floats: " << add<float>(5.4, 8.8) << endl;

    // Example usage of the swapp function with integers
    int x = 5, y = 6;
    cout << "Before swap: " << x << " " << y << endl;
    swapp(x, y);
    cout << "After swap: " << x << " " << y << endl;

    // Example usage of the swapp function with floating-point numbers
    float a = 4.5, b = 6.5;
    cout << "Before swap: " << a << " " << b << endl;
    swapp(a, b);
    cout << "After swap: " << a << " " << b << endl;

    return 0;
}
