#include <iostream>
using namespace std;


double power(double base, int exp) {
    
    double result = 1;

    for(int i = 0; i < exp; i++)
        result *= base;

    return result;
}

int main() {
    
    double b;
    int e;

    cout << "Base: "; cin >> b;

    cout << "Exp: "; cin >> e;

    cout << "Result: " << power(b, e) << endl;

    return 0;  
}
