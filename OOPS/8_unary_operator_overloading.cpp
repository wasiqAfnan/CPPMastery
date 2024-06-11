#include<iostream>
using namespace std;

/*class Weight{
    int kg;
    public:
        Weight(){
            kg = 0;
        }

        Weight(int x){
            kg = x;
        }

        void print(){
            cout<<"Weight in kg = "<<kg<<endl;
        }
        
        // operator overloading of pre increament
        void operator ++(){
            ++kg;
        }

        // operator overloading of pre increament=
        void operator ++(int){
            kg++;
        }
};

int main(){
    Weight obj;
    obj.print();
    ++obj; // compiler will se this like --> obj.operator ++()
    obj.print();
    obj++; // compiler will se this like --> obj.operator ++(int)
    obj.print();
}*/

// unary operator overloading using friend function

class Weight{
    int kg;
    public:
        friend void operator ++(Weight &w);
        friend void operator ++(Weight &w,int);
        Weight(){
            kg = 0;
        }

        Weight(int x){
            kg = x;
        }

        void print(){
            cout<<"Weight in kg = "<<kg<<endl;
        }
};

void operator ++(Weight &w){
    w.kg = w.kg + 1;
}
void operator ++(Weight &w,int){
    w.kg = w.kg + 1;
}
int main(){
    Weight obj;
    obj.print();
    ++obj; // compiler will se this like --> obj.operator ++()
    obj.print();
    obj++;
    obj.print();
}