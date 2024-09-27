
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int month, days, year, leap;

    cout << "Enter a month in a number format\n";
    cin >> month;
    month >= 1 && month <= 12 ? cout << "Thank you, press enter to continue\n" : cout << "TRY AGAIN\n";
    cin.ignore(20, '\n');
    cin.get();

    month >= 1 && month <= 12 ? cout << "Enter a year after 1775\n" : cout << "try again";
    cin >> year;
    
    if (year <= 1775)
    {
        cout << "Please retry the program, not valid\n";
    }
    else
    {
        cout << "thank you\n\n";

        year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? leap = year, cout << "This is a leap year\n"
            : cout << "This is not a leap year\n";


        switch (month)
        {
        case 1: leap == true ? cout << "It is january, there are 31 days\n" : cout << "It is januaray, there are 30 days\n";
            break;
        case 2: leap == true ? cout << "It is february, there are 29 days\n" : cout << "It is february, there are 28 days\n";
            break;
        case 3: leap == true ? cout << "It is march, there are 31 days\n" : cout << "It is march, there are 30 days\n";
            break;
        case 4: leap == true ? cout << "It is april, there are 30 days\n" : cout << "It is april, there are 31 days\n";
            break;
        case 5: leap == true ? cout << "It is may, there are 31 days\n" : cout << "It is may, there are 30 days\n";
            break;
        case 6: leap == true ? cout << "It is june, there are 30 days\n" : cout << "It is june, there are 31 days\n";
            break;
        case 7: leap == true ? cout << "It is july, there are 31 days\n" : cout << "It is july, there are 30 days\n";
            break;
        case 8: leap == true ? cout << "It is august, there are 30 days\n" : cout << "It is august, there are 31 days\n";
            break;
        case 9: leap == true ? cout << "It is september, there are 31 days\n" : cout << "It is september, there are 30 days\n";
            break;
        case 10: leap == true ? cout << "It is october, there are 30 days\n" : cout << "It is october, there are 31 days\n";
            break;
        case 11: leap == true ? cout << "It is november, there are 31 days\n" : cout << "It is november, there are 30 days\n";
            break;
        case 12: leap == true ? cout << "It is december, there are 30 days\n" : cout << "It is december, there are 31 days\n";
            break;
        default: cout << "Not valid\n";
        }
    }
    return 0;
}
