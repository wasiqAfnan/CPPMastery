#include<iostream>

using namespace std;

int main(){
    // ***** Type casting *****
    // Type casting refers to changing the dtataype of a variable
    float a=25.25; // a declared as float
    cout<<a<<endl;
    cout<<int(a)<<endl; // changing datatype of a from float to int

    // ***** Reference Variable *****

    // reference variables is use to just change the name of any variable or to assign an alternate name to a variable

    int c=2;
    int &d=c;
    
    // Now we can get the vbalue of c by using c or d variable

    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
