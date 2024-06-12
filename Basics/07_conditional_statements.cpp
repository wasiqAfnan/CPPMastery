#include <iostream>
using namespace std;

int main()
{
    /* there any 2 types of conditional statements
    1) if-else
        a) Normal if-else
        b) if-elseif-else ladder
        c) Nested if-else
    2) switch-case
    */

    /* if-else */
    int num1 = 5, num2 = 4;
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }

    // if-elseif-else ladder
    int age = 15;
    if (age >= 18)
    {
        cout << "Welcome to the party!" << endl;
    }
    else if (age < 18 && age >= 14)
    {
        cout << "Welcome to the party! but with some restriction" << endl;
    }
    else
    {
        cout << "Whoops! You are not eligible for the party." << endl;
    }

    // nested if-else
    int n1 = 14, n2 = 51, n3 = 2;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << n1 << " is the greatest of all three numbers" << endl;
        }
        else
        {
            cout << n3 << " is the greatest of all three numbers" << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << n2 << " is the greatest of all three numbers" << endl;
        }
        else
        {
            cout << n3 << " is the greatest of all three numbers" << endl;
        }
    }

    /* Ternary operator */
    // syntax: condition ? value if true : value if false;
    int bigger = 10 > 20 ? 10 : 20;
    cout << bigger << endl;

    /* Switch case statements */
    int rating = 3;
    switch (rating){
        case 1:
            cout << " You have rated us 1 star " << endl;
            break;
        case 2:
            cout << " You have rated us 2 star " << endl;
            break;
        case 3:
            cout << " You have rated us 3 star " << endl;
            break;
        case 4:
            cout << " You have rated us 4 star " << endl;
            break;
        case 5:
            cout << " You have rated us 5 star " << endl;
            break;
        default:
            cout << "Please rate us between 1 to 5" << endl;
    }
    return 0;
}