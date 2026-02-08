#include <iostream>
#include <iomanip>
using namespace std;

// Function to show the steps to solve ax + b = c
void showSteps(double a, double b, double c) {
    cout << fixed << setprecision(2);

    cout << "\nYour equation: " << a << "x ";
    if (b < 0)
        cout << "- " << -b;
    else
        cout << "+ " << b;
    cout << " = " << c << endl;

    double firstStep = c - b;
    cout << "First step:  " << a << "x = " << firstStep << endl;

    double x = firstStep / a;
    cout << "Second step: x = " << x << endl;
}

int main() {
    double a, b, c;
    char again = 'y';

    cout << "Welcome to the Linear Equation Solver!" << endl;
    cout << "We are solving equations like ax + b = c" << endl << endl;

    while (again == 'y' || again == 'Y') {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;

        showSteps(a, b, c);

        cout << "\nWould you like to try another one? (y or n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Thanks for using my program! Goodbye!" << endl;
    return 0;
}