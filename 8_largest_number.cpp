#include <iostream>
using namespace std ;

int main ()
{
    double n1,n2,n3 ;


    cout << "Enter Three Numbers" ;
    cin >> n1 >> n2 >> n3 ;

    if( n1 >= n2 ){
        if(n1 >= n3) {

            cout << "The largest number is: " << n1 << endl;
        } else {
            cout << "The largest number is: " << n3 << endl;
        } 
    }

    else {
        if (n2 >= n3) {
            cout << "The largest number is: " << n2 << endl;
        } else {
            cout << "The largest number is: " << n3 << endl;
        }
    }

return 0 ;


}