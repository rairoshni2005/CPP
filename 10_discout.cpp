#include <iostream>
using namespace std ;

int main()
{
    double price, discount ;

    cout << "Enter The Amount" ;
    cin >> price ;

    if (price <= 10000) {
        cout << " Your discout is 5% " ;
        cout << " Your price after discout " << price - price * 5/100 ;
    }  
    else if (price <= 25000) {
        cout << " Your discout is 14% " ;
        cout << " Your price after discout " << price - price * 14/100 ;
    }
     else if (price <= 50000) {
        cout << " Your discout is 16% " ;
        cout << " Your price after discout " << price - price * 16/100 ;
    }
     else if (price <= 100000) {
        cout << " Your discout is 20% " ;
        cout << " Your price after discout " << price - price * 20/100 ;
    }


    return 0 ;


}