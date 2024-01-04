#include <iostream>
using namespace std ;

class Employee
{

   

    public :
    
    int salary ;

    Employee ()
    {
        cout << "Defalut constructor is called :" << endl ;
        salary = 50000 ;

        cout << salary << endl ;
    }

    Employee (int s)
    {
        salary = s ;

        cout << salary << endl ;
    }
};



int main ()
{
    Employee E1, E2 (60000) ;
    
    
}
