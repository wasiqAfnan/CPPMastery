#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // ***** constant variable *****

    const int a=5;
    cout<<a<<endl;
    //a=7; this will give an error as a is constant var

    // ***** Manipulators *****
    // ex:- endl use to print new line,setw(include iomanip header) use to right justified content

    cout<<setw(4)<<a;
    return 0;
}