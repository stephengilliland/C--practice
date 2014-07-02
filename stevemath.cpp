/*

int abs(int);

abs(-42);  // => 42

*/
#include <iostream>
using namespace std;

int abs(int);

int main(){
    return 0;
}
int abs(int num){
    if (num > -1){
        return num;
    }
    return -num;
}
