#include<iostream>
using namespace std;

class shop{
    // private variables
    int prc1,prc2,prc3;
    public:
    // public function
    void setPrice(int price1,int price2,int price3){
        // set values of private variables using this function
        prc1=price1;
        prc2=price2;
        prc3=price3;
    }
    void displayPrice(void);
};

// defination of function using scope resolution operatlor ( :: )
void shop::displayPrice(void){
    // displaying values of private variables using this function
    cout<<"price of prod1 is: "<<prc1<<endl;
    cout<<"price of prod2 is: "<<prc2<<endl;
    cout<<"price of prod3 is: "<<prc3<<endl;
}


int main(){
    shop s1; // created object as s1
    s1.setPrice(20,25,50);
    s1.displayPrice();
}