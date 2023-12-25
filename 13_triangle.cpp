#include <iostream>
using namespace std ;

int main ()
{
    int a,b,c ;

    cout << "Enter length of side a" ;
    cin >> a ;

    cout << "Enter length of side b" ;
    cin >> b ;

    cout << "Enter length of side c" ;
    cin >> c ;


    if (a==b && a==c) 
    {
        cout << " The triangle is equilateral" ;
    }

    else if (a==b || a==c || b==c) 
    {
        cout << " The triangle is isosceles" ;
    }
    else {
        cout << "The traingle is scalene" ;
    }

    return 0 ;


}