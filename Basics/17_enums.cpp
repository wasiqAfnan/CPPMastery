// ### **Enum Data Type in C++**

// An **enumeration (enum)** in C++ is a user-defined data type that consists of integral constants. It allows you to assign names to a set of constant integer values, making the code more readable and easier to maintain.


// ### **Syntax**

// enum EnumName {
//     constant1,
//     constant2,
//     ...,
//     constantN
// };


// - **EnumName**: The name of the enumeration type.
// - **constant1, constant2, ..., constantN**: These are the identifiers (enumerators) representing integer constants, starting from 0 by default.



// ### **Key Points**
// 1. Enumerators are internally represented as integers starting from `0` (can be changed explicitly).
// 2. Enum values help make code more descriptive and reduce the need for "magic numbers."
// 3. Enums are strongly typed in C++ and cannot be implicitly converted to integers in modern C++ (unlike C).


// ### **Example Code**

// #### **Basic Example**

#include <iostream>
using namespace std;

enum Day { 
    Monday,    // 0
    Tuesday,   // 1
    Wednesday, // 2
    Thursday,  // 3
    Friday     // 4
};

int main() {
    Day today = Wednesday;

    cout << "Today is day number: " << today << endl;

    if (today == Wednesday) {
        cout << "It's midweek!" << endl;
    }

    return 0;
}


// #### **Output**
// ```plaintext
// Today is day number: 2
// It's midweek!
// ```


// #### **Custom Values**
// Enumerators can have custom integer values:

#include <iostream>
using namespace std;

enum StatusCode { 
    Success = 1, 
    Failure = -1, 
    Pending = 0 
};

int main() {
    StatusCode status = Success;

    if (status == Success) {
        cout << "Operation succeeded!" << endl;
    }

    return 0;
}


// **Output**:
// ```plaintext
// Operation succeeded!
// ```


// ### **Advantages of Enums**
// 1. **Readability**: Code becomes more understandable compared to using raw integers or "magic numbers."
// 2. **Maintainability**: Enum constants are easier to update or modify in one place.
// 3. **Type Safety**: Enums provide a more type-safe way of handling constants in modern C++.


// ### **Modern C++ (C++11 and Later) Enhancements**
// 1. **Strongly Typed Enum (`enum class`)**:
//    - Prevents implicit conversions to integers.
//    - Scoped enumeration: Enumerators are accessed with the `EnumName::Enumerator` syntax.
//    - Example:
     enum class Color {
         Red, Green, Blue
     };

     int main() {
         Color favorite = Color::Green;

         // cout << favorite;  // Error: Strongly typed enums don't convert to integers
         if (favorite == Color::Green) {
             cout << "Green is my favorite color!" << endl;
         }
         return 0;
     }

// 2. **Specifying Underlying Type**:
//    - You can specify the underlying type (e.g., `int`, `char`, etc.):
//      ```cpp
//      enum class Permission : char {
//          Read = 'R', Write = 'W', Execute = 'X'
//      };
//      ```



// Enums make the code expressive and type-safe, making them a vital feature in C++ for representing related constants.