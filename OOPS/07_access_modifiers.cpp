#include <iostream>
#include <string.h>
using namespace std;

class Account{
    private:
        int acNo;
        float balance;
    protected:
        string bankName;
    public:
        string type;
        string name; 

        void setDetails(int uacNo, float bal){
            acNo = uacNo;
            balance = bal;
        }

        void display();
};
// :: scope resolution operator
void Account :: display(){
    cout << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Account No: " << acNo << endl;
    cout << "Balance: " << balance << endl;
}

int main(){
    Account u1;
    // u1.acNo = 125; This will give error as acNo is a private member
    u1.setDetails(123,1000.00F);

    u1.type = "Savings";
    u1.name = "Wasiq";
    // u1.bankName = "SBI"; This will give error as bankName is a protected member

    u1.display();
}
