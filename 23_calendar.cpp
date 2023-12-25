#include <iostream>
using namespace std;

int getMonthDays(int month) {
    if (month == 2)
        return 28;  
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int main() {
    int month, startDay;

    cout << "Enter the month (1-12): ";
    cin >> month;
    
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        return 1;
    }

    cout << "Enter the starting day of the month (0=Sunday, 1=Monday, ... 6=Saturday): ";
    cin >> startDay;
    
    if (startDay < 0 || startDay > 6) {
        cout << "Invalid day. Please enter a number between 0 and 6." << endl;
        return 1;
    }

    cout << "\nSun Mon Tue Wed Thu Fri Sat\n";
    cout << "-----------------------------\n";
    
    
    for (int i = 0; i < startDay; i++) {
        cout << "    ";
    }

    
    int totalDays = getMonthDays(month);
    for (int day = 1; day <= totalDays; day++) {
        cout.width(3);   
        cout << right << day << " ";
        
        if ((day + startDay) % 7 == 0) {
            cout << endl;  
        }
    }

    return 0;
}
