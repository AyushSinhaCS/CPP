//WAF to find the product of 2 numbers -a & b.

#include <iostream>
using namespace std;

int prod(int a, int b){
    return a * b;
}

void check(int a){
    if (a%2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
}
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++) {
         fact = fact*i;
    }
    cout << "factorial(" << n << ") = " << fact << endl;
    return fact;
}



int main(){
    factorial(0);
    factorial(1);
    factorial(5);
    
    return 0;
}