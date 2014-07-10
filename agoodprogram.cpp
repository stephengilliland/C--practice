#include <iostream>
using namespace std;

void printfibs(int);

int main(){
    printfibs(8);
    return 0;
}
void printfibs(int N){
    int current = 1, next = 1;
    for(int num = 1; num < N+1; num +=1){
        cout << current << "\n";
        int old = current;
        current = next;
        next = old + next;
}
}

