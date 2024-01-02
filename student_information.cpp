#include <iostream>
#include <string>
using namespace std ;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonalInfo(const string& n, int a) {
        name = n;
        age = a;
    }

    void displayPersonalInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person {
private:
    float marks;

public:
    void setStudentInfo(float m) {
        marks = m;
    }

    void displayStudentInfo() const {
        cout << "Marks: " << marks << "\n";
    }
};

int main() {
    Student student;

    // Read personal information
    string name;
    int age;
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    student.setPersonalInfo(name, age);

    // Read student information
    float marks;
    cout << "Enter student marks: ";
    cin >> marks;

    student.setStudentInfo(marks);

    // Print student information
    cout << "\nStudent Information:\n";
    student.displayPersonalInfo();
    student.displayStudentInfo();

    return 0;
}