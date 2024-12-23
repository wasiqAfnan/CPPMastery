// ### **Structures in C++**
// A **structure** in C++ is a user-defined data type that groups together different variables (or data members) under one name. It is typically used to represent a record or an object with multiple related attributes.

// Unlike classes, members of a structure are **public** by default, and structures do not have member functions in their basic form (though modern C++ allows member functions).


// ### **Basic Syntax**

// struct StructureName {
//     dataType member1;
//     dataType member2;
//     // Other members
// };


// You can create variables of this structure type and access their members using the dot operator (`.`).


// ### **Example Code**

// Here’s an example of a structure to represent a student:

#include <iostream>
#include <string>
using namespace std;

// Define the structure
typedef struct Student {
    string name;     // Name of the student
    int age;         // Age of the student
    float marks;     // Marks scored by the student
}std;

int main() {
    // Create a structure variable
    std student1;

    // Assign values to the members
    student1.name = "John Doe";
    student1.age = 20;
    student1.marks = 85.5;

    // Display the values
    cout << "Student Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}


// ### **Output**
// ```plaintext
// Student Details:
// Name: John Doe
// Age: 20
// Marks: 85.5
// ```

// ---

// ### **Key Points**:
// 1. **Definition**: The structure is defined using the `struct` keyword.
// 2. **Members**: Structures can hold multiple types of data (e.g., `string`, `int`, `float`).
// 3. **Access**: Members are accessed using the **dot operator** (`.`).
// 4. **Default Access Modifier**: In a structure, members are `public` by default.

// ---

// ### **Advanced Features**
// - Structures in C++ can also include **member functions** like a class. This allows a structure to behave more like a class if needed.
// - Example with a member function:

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;

    // Member function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1 = {"Alice", 19, 92.5};
    student1.display(); // Call the member function
    return 0;
}


// Output:
// plaintext
// Name: Alice
// Age: 19
// Marks: 92.5
