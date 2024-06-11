#include<iostream>
using namespace std;

    void callByValue(int a,int b){
        int temp=a;
        a=b;
        b=temp;
    }
    void callByReference(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void callByReferenceVariable(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }

int main(){
    int x=5;
    int y=9;

    // Call by value
    cout<<"Call by value"<<endl;
    cout<<"before swap "<<x<<" and "<<y<<endl;
    callByValue(x,y);
    cout<<"after swap "<<x<<" and "<<y<<endl;
    cout<<"--------------------------------------------"<<endl;

    // Call by reference using pointer
    cout<<"Call by  reference using pointer"<<endl;
    cout<<"before swap "<<x<<" and "<<y<<endl;
    callByReference(&x,&y);
    cout<<"after swap "<<x<<" and "<<y<<endl;
    cout<<"--------------------------------------------"<<endl;

    // Call by reference variable
    cout<<"Call by reference variable"<<endl;
    cout<<"before swap "<<x<<" and "<<y<<endl;
    callByReferenceVariable(x,y);
    cout<<"after swap "<<x<<" and "<<y<<endl;
    cout<<"--------------------------------------------"<<endl;

}