#include <iostream>
using namespace std ;

// base class
class shape
{
    public :
    int width ; int height ;
    void setWidth (int w)
    { width = w ;}
    void setHeight (int h)
    { height = h ;}
} ;

//derived class
    class Rectangle : public shape
{
    public :
    int getArea ()
    {return (width * height) ;}
 }; 
 
 int main ()
 {
    Rectangle Rect ;             // creating object of derived class
    Rect. setWidth (5) ;         // function call of base class
    Rect. setHeight (7) ;

//print the area of the object
    cout << "Total area :" << Rect.getArea () << endl ;
    
    return 0 ;

 }
