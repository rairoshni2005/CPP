#include <iostream>
// #include <unordered_map>

using namespace std; 



long long factorial(int n) {
   
    if (n == 0) return 1;
    
    

   
    return memo[n] = n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: "; 
    cin >> n; 
    
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    
    return 0; 
}
