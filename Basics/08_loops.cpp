#include <iostream>
using namespace std;

int main(){
    /* There are 3 types of loops in cpp 
    1) For Loop
    2) While Loop
    3) Do-While Loop
    */

    /* For Loop */ 
    // syntax: for(initialization; condition; increament / decreament){code segment}
    cout << "For Loop"<< endl;
    for(int i = 0 ; i < 10; i++){
        cout << i+1 << "\n";
    }

    /* While Loop */
    // syntax: while(condition){code segment}
    cout << "While Loop"<< endl;
    int j = 10;
    while(j > 0){
        cout << j << endl;
        j--;
    }

    /* Do-While Loop */
    // syntax: do{code segment}while(condition);
    cout << "Do-While Loop"<< endl;
    int k = 20;
    do{
        cout << k << endl;
        k--;
    } while(k >= 10);
    return 0;
}