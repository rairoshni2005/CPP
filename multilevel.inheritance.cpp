#include <iostream>
using namespace std ;
class base
{
    public :
    int x ;
    void getdata()
    {
        cout << "enter value of x=" ;
        cin >> x ;
    }
};

class derive1 : public base
{
public :
int y ;
};