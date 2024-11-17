

#include <iostream>
#include <iomanip>

using namespace std;

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

// Function to print the calendar
void printCalendar(int year, int month) {
    // Validate month
    if (month < 1 || month > 12) {
        cout << "Invalid month." << endl;
        return;
    }

    // Get the first day of the month
    tm firstDay = {0, 0, 0, 1, month - 1, year - 1900};
    mktime(&firstDay);

    // Print the header
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

    // Print leading spaces
    for (int i = 0; i < firstDay.tm_wday; ++i) {
        cout << "    ";
    }

    // Print the days of the month
    int daysInMonth = getDaysInMonth(year, month);
    for (int day = 1; day <= daysInMonth; ++day) {
        cout << setw(4) << day;
        if ((firstDay.tm_wday + day) % 7 == 0 || day == daysInMonth) {
            cout << endl;
        }
    }
}

int main() {
    int year, month;

    // Get input from user
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;

    // Print the calendar
    printCalendar(year, month);

    return 0;
}