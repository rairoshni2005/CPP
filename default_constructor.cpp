
#include<iostream>
using namespace std;

class Employee
{
    private:

    int salary;

    public:

    Employee()
    {
        cout<<"Default constructor is called."<<endl; 
        salary=50000;
        cout<<salary<<endl;

    }

};

int main(){

    Employee E1;

}