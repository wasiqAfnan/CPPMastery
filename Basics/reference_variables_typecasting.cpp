#include<iostream>

using namespace std;

int main(){
    // Data Types
    // int a=5;
    // float b=2.5;
    // char c='a';
    // bool t=true;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;
    // cout<<t<<endl;

    // ***** Type casting *****

    float a=25.25;
    cout<<a<<endl;
    cout<<int(a)<<endl;

    // ***** Reference Variable *****

    // reference variables is use to just change the name of any variable or to assign an alternate name to a variable

    int c=2;
    int &d=c;
    
    // Now we can get the vbalue of c by using c or d variable

    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
