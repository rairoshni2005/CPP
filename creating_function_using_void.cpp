#include <iostream>
using namespace std ;

void difference (int i, int j)           //void print(string m);  = forward declaration
{
    int difference = i - j ;
    cout << difference ;

}

int main ()
{ 

int a,b ;
cout << "Enter Two Numbers" ;
cin >> a >> b ;


difference (a,b) ;

return 0 ;

}