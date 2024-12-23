#include<iostream>
using namespace std;

int main(){
    int num, *ptr, rev;
    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    // cout << *ptr;

    while (num > 0)
    {
        int temp = *ptr % 10;
        rev = rev * 10 + temp;
        num = *ptr / 10;
    }

    ptr = &rev;
    cout << *ptr;

    return 0;
}