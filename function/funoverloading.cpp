#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}
int main(){
    cout << sum(3,4) << endl;
    cout << sum(3,4,6) << endl;
    cout << sum(1.5,4.6) << endl;
    

    return 0;
}