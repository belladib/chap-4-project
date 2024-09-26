// chap 4 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight, rate, miles, total;

    cout << "What is the weight of your package, must range from .1 to 20kg max\n";
    cin >> weight;

    if (weight >= .1 && weight <= 20)
    {
        cout << "\nHow many miles need to be shipped, must be at least 10 and no more than 3,000\n";
        cin >> miles;
        if (miles >= 10 && miles <= 3000)
        {
            if (weight >= .1 && weight <= 2)
            {
                rate = 1.1 / 500;
                total = rate * miles;
                cout << showpoint << fixed << setprecision(2);
                cout << "\nyour total is " << total;
            }
            else if (weight > 2 && weight <= 6)
            {
                rate = 2.2 / 500;
                total = rate * miles;
                cout << showpoint << fixed << setprecision(2);
                cout << "\nyour total is " << total;
            }
            else if (weight > 6 && weight <= 10)
            {
                rate = 3.7 / 500 ;
                total = rate * miles;
                cout << showpoint << fixed << setprecision(2);
                cout << "\nyour total is " << total;
            }
            else if (weight > 10 && weight <= 20)
            {
                rate = 4.8 / 500;
                total = rate * miles;
                cout << showpoint << fixed << setprecision(2);
                cout << "your total is " << total;
            }
            else
                cout << "Not valid, try again.";
        }
        else
            cout << "Not valid, try again";

    }
    else
        cout << "not valid try again";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
