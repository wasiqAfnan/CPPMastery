#include <iostream>
using namespace std;

int main(){
    // To get value from user using terminal we have cin keyword and to print to the terminal
    // we have cout keyword. Let us see the use case of these

    int a; // declaring a varaible whose value will be give by the user
    int b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int sum = a+b;
    cout << a << " + " << b << " = " << sum;
    return 0;
}