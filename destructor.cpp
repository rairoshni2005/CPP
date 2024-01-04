#include<iostream>
using namespace std;
class Employee
{
    public : 
    int salary ;
    //public: 
    //DEFAULT CONSTRUCTOR -------------------------
    Employee()
    {
        cout<<"Default constructor is called "<<endl;
        salary = 50000;
       // cout<<salary;
    }

    //PARAMETRIZED CONSTRUCTOR----------------------
    Employee(int s)
    {
        salary =s;
       // cout<<salary;
    }
    //Copy Constructor ------------------------------
    Employee(Employee &E2)       //We have refered value of E2 in 
    {                            //-copy constructor
        salary = E2.salary;
        
    }
   Employee()             // this is for destructor
   {
    cout<<"Destructor is called";
   }
    };
int main()
{
    Employee E1,E2(60000),E3=E2;
    cout<<E1.salary<<endl;
    cout<<E2.salary<<endl;
    cout<<E3.salary;
}