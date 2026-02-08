// average_array.cpp
// This program calculates the average of 5 numbers using an array and a function.

#include <iostream>
using namespace std;

// Function prototype
double average(double a[], const int size);

int main() {
    const int size = 5;
    double data[size];
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        cout << "This program calculates the average of 5 numbers.\n";

        // Prompt the user to enter 5 double values
        for (int i = 0; i < size; i++) {
            cout << "Enter value #" << (i + 1) << ": ";
            cin >> data[i];
        }

        // Call the function to compute the average
        double avg = average(data, size);

        // Display result
        cout << "The average of the 5 numbers is: " << avg << endl;

        // Ask if user wants to run again
        cout << "Would you like to run the program again? (y/n): ";
        cin >> again;
    }

    cout << "Thank you for using the program! Goodbye.\n";
    return 0;
}

// Function definition
double average(double a[], const int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum / size;
}