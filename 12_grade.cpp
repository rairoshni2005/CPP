#include <iostream>

using namespace std;

int main() {
    // Variables for storing marks of 5 subjects and their average
    double marks[5], average = 0.0;
    
    // Input marks for the 5 subjects
    cout << "Enter marks for 5 subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        average += marks[i];
    }
    
    // Calculate average marks
    average /= 5;
    
    // Determine and display grade based on average marks
    char grade;
    if(average >= 90) {
        grade = 'A';
    } else if(average >= 80) {
        grade = 'B';
    } else if(average >= 70) {
        grade = 'C';
    } else if(average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    cout << "Your grade is: " << grade << endl;
    
    return 0;
}
