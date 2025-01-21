#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int term1 = 0, term2 = 1, nextTerm;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << term1 << " ";  
        nextTerm = term1 + term2; 
        term1 = term2;
        term2 = nextTerm;      
    }

    return 0;
}
