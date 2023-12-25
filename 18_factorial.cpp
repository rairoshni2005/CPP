#include <iostream>
using namespace std ;
int main ()
{
    int num,fact ;
    cout << " Enter number " ;
    cin >> num ;


    for (int i=1 ; i <= num ; i++)
    {
        fact = fact * i ;
    }

    cout << fact ;




}