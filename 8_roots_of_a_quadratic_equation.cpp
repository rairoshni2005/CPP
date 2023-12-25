#include <iostream>  // Include the header file for input-output stream operations.
#include <cmath>     // Include the header file for mathematical operations.

using namespace std;  // Allow using elements from the std namespace without prefixing them with "std::".

int main() {
    double a, b, c;  // Declare coefficients of the quadratic equation.

    // Prompt the user to input the coefficients.
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Calculate the discriminant using the formula b^2 - 4ac.
    double discriminant = b*b - 4*a*c;


    // Check if the equation is not quadratic (i.e., a = 0).
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
    } 
    // If discriminant is positive, the roots are real and distinct.
    else if (discriminant > 0) {
        // Calculate both roots using the quadratic formula.
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    // If discriminant is zero, the roots are real and the same.
    else if (discriminant == 0) {
        // Calculate the single (double) root.
        double root1 = -b / (2*a);

        cout << "Roots are real and the same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } 
    // If discriminant is negative, the roots are complex.
    else {
        // Calculate the real and imaginary parts of the roots.
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);

        cout << "Roots are complex and distinct." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;  // End of the program.
}
