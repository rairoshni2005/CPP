#include <iostream>
using namespace std ;

int main()
{
    int a,b ;
    char operands ;

    cout << "Enter any two numbers" ;
    cin >> a >> b ;

    cout << "What do you want to perform (+,-,*,/ ) " ;
    cin >> operands ;

    if (operands  == '+') {
        cout << " addition is - " << a+b ;
    }

    else if (operands  == '-') {
        cout << " subtraction is - " << a-b ;
    }

    else if (operands  == '*') {
        cout << " multiplication is - " << a*b ;
    }

     else if (operands  == '/') {
        cout << " division is - " << a/b ;
    }

    else 
    {
        cout << "Invalid input" ;
    }



    return 0 ;
}