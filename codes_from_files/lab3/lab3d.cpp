#include <iostream>
using namespace std;

// function prototype
double celsiusToFahrenheit(double c);

int main() {
    cout << "This program changes Celsius to Fahrenheit." << endl;

    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);

    cout << "That equals " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}

// function definition
double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}