#include <iostream>
using namespace std;

int main(){
    int num1 = 14;
    int num2 = 3;
    // Arithmetic operators
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    // Relational operators
    int res1 = num1 > num2;
    int res2 = num1 >= num2;
    int res3 = num1 < num2;
    int res4 = num1 <= num2;
    int res5 = num1 == num2;
    int res6 = num1 != num2;

    cout << "\nTrue = 1 and False = 0"<<endl;
    cout << num1 << " > " << num2 << " = " << res1 << endl;
    cout << num1 << " >= " << num2 << " = " << res2 << endl;
    cout << num1 << " < " << num2 << " = " << res3 << endl;
    cout << num1 << " <= " << num2 << " = " << res4 << endl;
    cout << num1 << " == " << num2 << " = " << res5 << endl;
    cout << num1 << " != " << num2 << " = " << res6 << endl;

    // Logical Operator
    int x = 1, y = 0;
    // we can also use printf() to print something on terminal
    printf("\nLogical Operators:\n");
    printf("Logical AND(&&): %d\n", x && y); // Logical and (return true if all conditions are true else returns false)
    printf("Logical OR(||): %d\n", x || y); // Logical or (return true if any one condition is true else returns false)
    printf("Logical NOT(!) for x: %d\n", !x); // Logical not (chnage true to false and false to true)
    printf("Logical NOT(!) for y: %d\n", !y);

    //sizeof operator --> It returns the size of datatype

    cout << "\nSize of int: " << sizeof(int) << " byte" << endl;
    cout << "Size of long double: " << sizeof(double) << " byte" << endl;
    cout << "Size of long double: " << sizeof(long double) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " byte" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    return 0;
}