#include <iostream>
using namespace std;

int main(){
    /*Variables are like containers in which we can store any data*/
    // Syntax: <DataType> <VarName> = <Value>

    int a = 10; // it will create a variable named 'a' whose value is 10
    cout << a; // this will print the value of a to the terminal

    // we can also declare constants using const keyword
    const int b = 10; // now we can not change the value of b throughout the program as b is declared as constant
    // b = 15; --> this will produce error
    cout << b;

    return 0;
}