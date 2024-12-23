#include <iostream>
using namespace std;

// Abstract class (contains a pure virtual function)
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function

    void display() { // Normal member function
        cout << "This is a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override { // Overriding the pure virtual function
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override { // Overriding the pure virtual function
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape; // Pointer to base class (abstract class)

    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw();   // Calls Circle's draw() method
    shape->display(); // Calls the non-virtual display() method

    shape = &rectangle;
    shape->draw();   // Calls Rectangle's draw() method
    shape->display(); // Calls the non-virtual display() method

    return 0;
}


/*
Explanation:

Abstract Class: Shape is an abstract class because it contains a pure virtual function (draw()).

Pure Virtual Function: A function declared as = 0 in a class (e.g., virtual void draw() = 0;) is a pure virtual function, requiring all derived classes to implement it.

Key Points:
Abstract classes cannot be instantiated directly.

Derived classes (Circle and Rectangle) override the pure virtual function draw() to provide specific implementations.

Non-Virtual Function: The display() function in the base class is normal and can be directly used by derived class objects.
*/