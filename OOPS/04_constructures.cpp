#include <iostream>
#include <string>
using namespace std;

class User{
    public:
    string name;
    int age;
    string mail;

    User(){
        cout << "Object has been created Successfully" << endl;
    }
};

int main(){
    User u1;
    User u2;
    return 0;
}