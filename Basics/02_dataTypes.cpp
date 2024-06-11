#include <iostream>
using namespace std;

int main()
{
    /**
     * There are 3 types of DataTypes available in CPP
     * 1) Primitive Data Types: These data types are built-in or predefined data types and
     * can be used directly by the user to declare variables.
     *
     * 2) Derived Data Type: Derived data types that are derived from the primitive or
     * built-in datatypes are referred to as Derived Data Types.
     *
     * 3) Abstract or user-defined Data Type:  Abstract or User-Defined data types are defined
     * by the user itself. Like, defining a class in C++ or a structure.
     */

    // Primitive Data Types
    int a = 10;
    float b = 10.25;
    double c = 7.2547889;
    bool d = true;
    char e = 'A';
    // void is used in function

    // wchar_t or wide character is data type is also a character data type but this data
    // type has a size greater than the normal 8-bit data type. Represented by wchar_t.
    // It is generally 2 or 4 bytes long.
    wchar_t wideChar = L'Ω'; // Greek capital letter omega

    // Derived Data Types
    // function, array, pointer and reference variables are example of derived data type
    // I will discuss it later

    // Abstract or user-defined Data Types
    // Class, Structure, union, Enumeration, Typedef defined Datatype are the example of these
    // data type.
    return 0;
}