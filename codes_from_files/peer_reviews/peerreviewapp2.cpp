// source.cpp
// A simple C++ program that converts Celsius to Fahrenheit.

#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    double c;
    cout << "Enter Celsius: ";
    cin >> c;

    double f = celsiusToFahrenheit(c);

    cout << fixed << setprecision(2);
    cout << "Fahrenheit: " << f << endl;

    return 0;
}