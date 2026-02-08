// Day 1 - Example 4: Simple Calculator
// Basic arithmetic operations

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2;
    double sum, difference, product, quotient, remainder;
    
    // Get two numbers from user
    cout << "===== Simple Calculator =====" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    // Display results
    cout << "\n===== Results =====" << endl;
    cout << num1 << " + " << num2 << " = " << sum << endl;
    cout << num1 << " - " << num2 << " = " << difference << endl;
    cout << num1 << " * " << num2 << " = " << product << endl;
    cout << num1 << " / " << num2 << " = " << quotient << endl;
    
    // Demonstrate integer division
    int wholeNum1 = 17;
    int wholeNum2 = 5;
    cout << "\n===== Integer Division Demo =====" << endl;
    cout << wholeNum1 << " / " << wholeNum2 << " = " << (wholeNum1 / wholeNum2) << " (integer division)" << endl;
    cout << wholeNum1 << " % " << wholeNum2 << " = " << (wholeNum1 % wholeNum2) << " (remainder)" << endl;
    
    return 0;
}
