#include <iostream>
#include <string>
using namespace std;

int main() {
    int month, year;
    bool isLeapYear;

    cout << "Enter a month in number format (1-12): ";
    cin >> month;

    // Check month validity
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please try again.\n";
        return 1; // Exit the program if the month is invalid
    }

    cout << "Enter a year after 1775: ";
    cin >> year;

    // Check year validity
    if (year <= 1775) {
        cout << "Invalid year. Please try again.\n";
        return 1; // Exit the program if the year is invalid
    }

    // Determine if the year is a leap year
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Output the results based on the month
    switch (month) {
    case 1:
        cout << "January has 31 days.\n";
        break;
    case 2:
        cout << "February has " << (isLeapYear ? "29" : "28") << " days.\n";
        break;
    case 3:
        cout << "March has 31 days.\n";
        break;
    case 4:
        cout << "April has 30 days.\n";
        break;
    case 5:
        cout << "May has 31 days.\n";
        break;
    case 6:
        cout << "June has 30 days.\n";
        break;
    case 7:
        cout << "July has 31 days.\n";
        break;
    case 8:
        cout << "August has 31 days.\n";
        break;
    case 9:
        cout << "September has 30 days.\n";
        break;
    case 10:
        cout << "October has 31 days.\n";
        break;
    case 11:
        cout << "November has 30 days.\n";
        break;
    case 12:
        cout << "December has 31 days.\n";
        break;
    default:
        cout << "Not a valid month.\n"; // This will never be reached due to earlier validation
        break;
    }
    isLeapYear ? cout << "It's a leap year" : cout << "It's not a leap year";
    return 0;
}
