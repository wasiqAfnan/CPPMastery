#include <iostream>
using namespace std;

// function declartion
// syntax: returnDataType functionName(parameters){//function body/defination}
int sum(int a, int b){
    // fucntion defination
    int c = a + b;
    return c;
}
int main(){
    // Functions are re-usable component. We can call the function again again with new data. Function helps us
    // to follow the DRY ( Do not Repeat Yourself ) principle.

    /*
    There are 3 major concept in function
    1) Function Declaration: declaring a function
    2) Function Defination: defining what function does
    3) Function Call: calling the function and getting desired output
    */

   int num1 = 5, num2 = 10;
   int res = sum(num1,num2);
   cout << res;

    return 0;
}