#include <iostream>
using namespace std;

// this is inline function in which the actual program code is replaced while calling the function in compile time causing function excute faster than normal function call but remember calling inline function again and again will cause the size of the program bigger and bigger
inline int product(int x, int y)
{
    return x * y;
}

// Deafult arguements will execute if main function can not pass the value of the variable

float moneyReceived(float currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

int main()
{
    // ****** Inline Functions ******

    int a, b;
    cout << "Enter the value of a and b\n";
    cin >> a >> b;

    cout << "The product of " << a << " and " << b << " is " << product(a, b)<<endl;

    // ****** Default arguements ******

    int cur = 100;
    float fact = 1.02;

    // In this case 1.02 will consider as we pass fact so the deafult value of factor will be ignored
    cout << "if you have " << cur << " money in your bank you will receive " << moneyReceived(cur, fact) << endl;

    // In this case 1.04 will consider as we don't pass value of fact so the deafult value will be considered for the following case
    cout << "if you have " << cur << " and you are a vip you will receive " << moneyReceived(cur);

    return 0;
}
