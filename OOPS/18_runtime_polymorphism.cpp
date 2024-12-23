#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override { // Overriding base class method
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override { // Overriding base class method
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr; // Pointer to base class

    Dog dog;
    Cat cat;

    animalPtr = &dog;   // Pointing to Dog object
    animalPtr->sound(); // Calls Dog's sound()

    animalPtr = &cat;   // Pointing to Cat object
    animalPtr->sound(); // Calls Cat's sound()

    return 0;
}
