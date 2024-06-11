#include<iostream>
using namespace std;

class easy{
    private:
        int real,imagi;
    public:
        // declare add function as friend of class easy.
        // that is why add can now access the private data of easy class

        friend void add(easy &o1, easy &o2,easy &o3);

        easy(){}
        easy(int x,int y){
            real = x;
            imagi = y;
        }
        void display(){
            cout<<real<<" + "<<imagi<<"i"<<endl;
        }
};

void add(easy &o1, easy &o2, easy &o3){
    o3.real = o1.real + o2.real;
    o3.imagi = o1.imagi + o2.imagi;
}

int main(){
    easy obj1(5,6);
    easy obj2(6,7);
    easy obj3;
    add(obj1,obj2,obj3);
    obj3.display();
}