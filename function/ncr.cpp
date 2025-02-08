// WAF to find the binomial coefficient for the given n & r.
#include <iostream>
using namespace std;

int facto(int n){
    int fact = 1;
    for (int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact; 

}

int bincoff(int n, int r){
    int val1 = facto(n);
    int val2 = facto(r);
    int val3 = facto(n-r);

    int result = val1/(val2*val3);
    return result; 
}

int main(){

    cout << bincoff(4,2) << endl; 

    return 0;
}