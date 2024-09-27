// chap 4 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int choice;
    const double PI(3.14159);
    double radius, area, length, width, height, base;

    cout << "please enter the number of what you would like to do (1-4)\n"
        << "1. Calculate the Area of a Circle\n"
        << "2. Calculate the Area of a Rectangle\n"
        << "3. Calculate the Area of a Triangle\n"
        << "4. Quit\n";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            switch (choice)
            {
            case 1: 
                cout << "what is the radius of the circle?\n";
                cin >> radius;
                area = PI * pow(radius, 2);
                cout << fixed << showpoint << setprecision(2);
                radius <= 0 ? cout << "Invalid, must be values more than 0" : cout << "\nThe area is " << area;
                break;
            case 2:
                cout << "To calculate the area of the rectangle, please enter length, hit enter, and then enter width\n";
                cin >> length;
                cin >> width;
                area = length * width;
                cout << fixed << showpoint << setprecision(2);
                length <= 0 || width <= 0 ? cout << "Invalid, must be values more than 0" : cout << "\nThe area is " << area;
                break;
            case 3: 
                cout << "Please enter the triangle's base height, press enter, and then enter the height\n";
                cin >> height;
                cin >> base;
                area = base * height * .5;
                cout << fixed << showpoint << setprecision(2);
                height <= 0 || base <= 0 ? cout << "Invalid, must be values more than 0" : cout << "\nThe area is " << area;
                break;
            case 4: cout << "ending program";
                break;
            default: cout << "Error, try again";
            }
        }
        else
            cout << "try again, must be 1, 2, 3, or 4";







        return 0;
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
