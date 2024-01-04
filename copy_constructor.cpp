#include <iostream>
using namespace std ;

class Employee
{
    public :

    int salary;

    Employee()
    {
        cout<<"Default constructor is called."<<endl; 
        salary=50000;
        

    }

    Employee (int s)
    {
        salary = s ;
    }


    Employee (Employee &E2)
    {
    salary = E2.salary ;
    }
};

int main(){

    Employee E1,E2(60000),E3=E2;
    cout<<E1.salary<<endl;
    cout<<E2.salary<<endl;
    cout<<E3.salary;

}