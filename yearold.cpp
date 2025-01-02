#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear, age;

    // Ask the user to input their birth year
    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Validate the input
    while (cin.fail() || birthYear < 0) {
        cin.clear(); // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        cout << "Invalid input. Please enter a valid birth year: ";
        cin >> birthYear;
    }

    // Ask the user to input the current year
    cout << "Enter the current year: ";
    cin >> currentYear;

    // Validate the input
    while (cin.fail() || currentYear < birthYear) {
        cin.clear(); // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        cout << "Invalid input. Please enter a valid current year: ";
        cin >> currentYear;
    }

    // Calculate the age
    age = currentYear - birthYear;

    // Display the result
    cout << "You are " << age << " years old." << endl;

    return 0;
}