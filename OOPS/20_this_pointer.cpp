#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int length, int width) {
        this->length = length; // Resolving name conflict using 'this'
        this->width = width;
    }

    // Method to calculate area
    int calculateArea() {
        return this->length * this->width; // Using 'this' explicitly
    }

    // Method to return current object
    Rectangle* setLength(int length) {
        this->length = length;
        return this; // Returning the current object
    }

    void display() {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    Rectangle rect(10, 5); # calling Rectangle function

    cout << "Original dimensions:" << endl;
    rect.display();

    cout << "Area: " << rect.calculateArea() << endl;

    cout << "After modifying dimensions:" << endl;
    rect.setLength(15)->display(); // Method chaining using 'this'

    return 0;
}
