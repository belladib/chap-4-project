// calculates the freight

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, rate, miles, total;

    // Prompt for package weight
    cout << "Enter the weight of your package (0.1 to 20 kg): ";
    cin >> weight;

    // Validate weight
    if (weight < 0.1 || weight > 20) {
        cout << "Invalid weight. Must be between 0.1 and 20 kg. Try again.\n";
        return 1; // Exit the program due to invalid input
    }

    // Prompt for shipping miles
    cout << "Enter the miles to be shipped (10 to 3000): ";
    cin >> miles;

    // Validate miles
    if (miles < 10 || miles > 3000) {
        cout << "Invalid miles. Must be between 10 and 3000. Try again.\n";
        return 1; // Exit the program due to invalid input
    }

    // Determine the rate based on weight
    if (weight <= 2) {
        rate = 1.1 / 500;
    }
    else if (weight <= 6) {
        rate = 2.2 / 500;
    }
    else if (weight <= 10) {
        rate = 3.7 / 500;
    }
    else { // weight > 10
        rate = 4.8 / 500;
    }

    // Calculate total shipping cost
    total = rate * miles;

    // Output the total cost formatted to two decimal places
    cout << showpoint << fixed << setprecision(2);
    cout << "Your total shipping cost is: $" << total << endl;

    return 0; // Successful termination
}
