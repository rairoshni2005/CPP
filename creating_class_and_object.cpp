#include <iostream>
using namespace std ;

class Student
{
    private :
    int roll ;
    string name ;

    public :
    void setData (int r , string n = "Hanshika")
    {
        roll = r ;
        name = n ;
    }



void getData ()
{
    cout << roll << endl ;
    cout << name << endl ;
}
};

int main ()
{
    Student s1, s2 ;
    s1. setData (1) ;
    s1. getData () ;
    s2. setData (2, "Roshni Rai") ;
    s2. getData () ;    

 return 0 ;

}
