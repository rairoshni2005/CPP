#include <iostream>
using namespace std ;


int main ()
{
    int n;

    cout << "Enter A Year " ;
    cin >> n ;

    if (n%400 == 0){
        cout << "It Is A Leap Year " ;
    } 
    
    else if  (n % 4 == 0 && n % 100 != 0) {
        cout << " It Is A Leap Year " ;
    }
    else {
        cout << "It Is Not A Leap Year " ;
    }

    return 0 ;


}