//WAF to print the number is odd or even.

#include <iostream>
using namespace std;

void check(int a){
    if (a%2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
}

int main(){
    check (4);
    return 0;
}