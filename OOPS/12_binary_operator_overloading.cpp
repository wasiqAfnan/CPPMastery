#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
    friend Complex operator +(Complex obj1, Complex obj2);
        Complex(){
            real = 0;
            imaginary = 0;
        }

        Complex(int x, int y){
            real = x;
            imaginary = y;
        }

        void display(){
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }

        // operator overloading 

        /*Complex operator +(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.imaginary = imaginary + x.imaginary;
            return temp;
        }*/
};

// operator overloading using friend function

Complex operator +(Complex obj1, Complex obj2){
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imaginary = obj1.imaginary + obj2.imaginary;
    return temp;
}

int main(){
    Complex c1(7,6);
    Complex c2(5,6);
    Complex c3 = c1+c2;
    c3.display();
}   