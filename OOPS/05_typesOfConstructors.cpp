#include <iostream>
#include <string>
using namespace std;

class User{
    public:
    string name;
    int age;
    string mail;
    
    // Non-Parameterized constructor
    User(){
        cout << "Object has been created Successfully" << endl;
    }

    // Parameterized constructor
    User(string uName, int uAge, string uMail){
        name = uName;
        age = uAge;
        mail = uMail;
    }


    // Copy constructor
    User(User &u){
        name = u.name;
        age = u.age;
        mail = u.mail;
        cout << "Copy constructor called." << endl;
    }


    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Mail: " << mail << endl << endl;
    }
};

int main(){
    User u1; // Non-Parameterized constructor called
    
    User u2("Afnan", 25,"hey@gmail.com"); // Parameterized constructor called
    u2.display();

    User u3(u2);// Copy constructor called
    u3.display();

    return 0;
}