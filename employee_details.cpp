#include <iostream>
#include <string>
using namespace std;


class Employee {
public:
    int employeeNumber;
    double basicSalary;
    double da;
    double netSalary;
    string designation;

    Employee(int empNumber, double salary, string empDesignation) {
        employeeNumber = empNumber;
        basicSalary = salary;
        designation = empDesignation;
        da = 0.0;
        netSalary = 0.0;
    }

    void calculateDA() {
        if (designation == "principal") {
            da = 0.2 * basicSalary;
        } else if (designation == "hod") {
            da = 0.15 * basicSalary;
        } else if (designation == "professor") {
            da = 0.1 * basicSalary;
        } else if (designation == "lab assistant") {
            da = 0.05 * basicSalary;
        }
    }

    void calculateNetSalary() {
        calculateDA();
        netSalary = basicSalary + da;
    }

    void printData() {
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Designation: " << designation << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee employee1(1, 50000, "principal");
    employee1.calculateNetSalary();
    employee1.printData();

    Employee employee2(2, 40000, "professor");
    employee2.calculateNetSalary();
    employee2.printData();

    return 0;
}