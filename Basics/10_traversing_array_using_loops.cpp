#include <iostream>
using namespace std;

int main(){
    // declaring array of char type without specifying size. Compiler will automatically set size of the array.
    char name[] = {'A','F','N','A','N'};

    // looping through the array
    for(int i = 0; i < 5; i++){
        cout << name[i];
    }
    return 0;
}