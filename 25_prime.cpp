#include <iostream>
using namespace std ;

int main()
{
    int i,j,counter ;

    for( i=2 ; i < 10000 ; i++ ) {
     counter = 0 ;
    for(j=2 ; j<= i/2 ; j++){
    if(i%j == 0)
     {
            counter = counter + 1 ;

        }
    }
    if(counter == 0) 
    cout << i << endl ;
}
    return 0 ;
}