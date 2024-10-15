#include<iostream>
using namespace std;

int main(){
    // int div = 6,divisor = 0;
    // int output = div/divisor;
    // cout<<output;

    try{
        int div,divisor;
        cout<<"Enter two number";
        cin>>div>>divisor;

        if(divisor != 0){
            int output = div/divisor;
            cout<<output;
        }
        else{
            throw (divisor);
            //throw divisor; will also work
        }
    }

    catch(int d){
        cout<<"answer is undefined as divided by zero produces infinity\n";
    }

    return 0;
}