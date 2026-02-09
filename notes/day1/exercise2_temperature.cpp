// Day 1 - Exercise 2: Temperature Converter
// Convert Fahrenheit to Celsius
// Formula: C = (F - 32) * 5/9
// TODO: Complete this program

#include <iostream>
using namespace std;

int main() {
    // TODO: Declare variable for Fahrenheit temperature
    float temperatureInCelsius, temperatureInFahrenheit;

    
    // TODO: Ask user for temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit" << endl;
    
    cin >> temperatureInFahrenheit ;

    // TODO: Calculate Celsius using the formula: C = (F - 32) * 5/9
    temperatureInCelsius = ( temperatureInFahrenheit - 32 ) * 5/9;
    
    // TODO: Display both temperatures
    cout << " Temperature in Celsius is : " << temperatureInCelsius ;
   
    
    return 0;
}
