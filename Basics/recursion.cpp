#include<iostream>
using namespace std;

// int fib(int num){
//     if(num<2){
//         return 1;
//     }
//     return fib(num-1)+fib(num-2);
// }

int fact(int num){
    if(num==1){
        return 1;
    }
    return fact(num-1) * num;
} 

int main(){
    // int terms;
    // cout<<"how many terms : ";
    // cin>>terms;

    // for(int i=0;i<terms;i++){
    //     int res=fib(i);
    //     printf("%d\t",res);
    // }
    // printf("\n");

    int factor=fact(5);
    printf("%d\t",factor);

}