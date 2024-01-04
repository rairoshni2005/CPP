#include <iostream>
using namespace std ;

// base class
class shape
{
    public :
    int base ; int height ;
    void setBase (int b)
    { base = b ;}
    void setHeight (int h)
    { height = h ;}
} ;

//derived class
    class Triangle : public shape
{
    public :
    int getArea ()
    {return (0.5 * base * height) ;}
 }; 

int main ()
 {
    Triangle Tri ;             // creating object of derived class
    Tri. setBase (2) ;         // function call of base class
    Tri. setHeight (2) ;

//print the area of the object
    cout << "Total area :" << Tri.getArea () << endl ;
    
    return 0 ;

 }
