#include <iostream>
using namespace std ;

int main ()
{
int speed ;

cout << "Enter the speed" ;
cin >> speed ;

if(speed == 120) {
    cout << " Dhire karle bhai thuk jayega " << " suggesting speed " << (speed-30) ;
    cout << "speed" ;

} 
else if (speed >=80 ) {
    cout << " Fine thik hai " << " suggesting speed " << (speed-20) ;
    cout << "speed" ;
}
else(speed<80) ;

{
    cout << " ok " ;
}


return 0 ;

}