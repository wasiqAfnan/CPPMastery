#include <iostream>
using namespace std;

int main(){
    // array is variable which can hold more than one value of the same data-type.

    // declaring an array
    // syntax: <datatype> <arrayname>[size] = {values separated by comma}   

    int arr[5] = {25,12,54,7,4};

    // Accessing the array elements
    // if we want to access the elements of an array we have to provide the index no of the elemet.
    // array index start form 0 wich is the first element of an array and goes to size-1

    cout << arr[0] << endl; // will print the first elemnt in the array
    cout << arr[1] << endl; // will print the second elemnt in the array
    cout << arr[2] << endl; // will print the third elemnt in the array
    cout << arr[3] << endl; // will print the fourth elemnt in the array
    cout << arr[4] << endl; // will print the last elemnt (size-1) in the array

    // in the same manner we can also declare the array for othe data types
    return 0;
}