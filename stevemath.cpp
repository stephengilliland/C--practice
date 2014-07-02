/*

int abs(int);
int pow(int, int);

abs(-42);  // => 42
pow(5, 3); // => 125

*/
#include <iostream>
using namespace std;

int abs(int);
int pow(int base, int exp);
int main(){
    return 0;
}
int pow(int base, int exp){
    int num = base;
    if (exp == 0){
        return 1;
    }
    for (int wee = 1; wee < exp; wee++){
        num = num*base;
    }
    return num;
}
int abs(int num){
    if (num > -1){
        return num;
    }
    return -num;
}


