#include <iostream>
using namespace std;

int main(){
    /*
    Pointer: Pointer is a special type of variable which can hold the address of another variable. In other
    words pointer is a variable which points to another variable.
    */

    // Declaring a pointer variable
    int *ptr; // this is a pointer variable hwich can hold the address of an integer variable
    int a = 5;
    ptr = &a; // ptr now hold the address of a

    // * --> this is value at operator
    // & --> this is address of operator

    cout << "Address of a is: " << &a << endl;
    cout << "Address of a is: " << ptr << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of a is: " << *ptr << endl; // this will print the value at address pointed by ptr.
    
    return 0;
}