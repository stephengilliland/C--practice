/*

1 -> 100 (incl)

3 => Fizz
5 => Buzz
7 => 7
15 => FizzBuzz

*/

#include <iostream>
using namespace std;

int main()
{
    for (int num = 1; num < 101; num += 1){
        if (num % 15 == 0){   
            cout << "FizzBuzz";  
        }
        else if (num % 3 == 0){
            cout << "Fizz";
        }
        else if (num % 5 == 0){
            cout << "Buzz";
        }
        else {
            cout << num;
        }
        cout << "\n";
        
    }
    return 0;
}
