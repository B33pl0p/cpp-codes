/*
 * Classwork 4: Simple Calculator
 * 
 * Problem: Create a calculator that performs basic arithmetic operations.
 * The user should input two numbers and an operator (+, -, *, /)
 * 
 * Example:
 * Input: 
 *   Enter first number: 10
 *   Enter operator (+, -, *, /): +
 *   Enter second number: 5
 * Output: Result: 15
 * 
 * Hints:
 * - Use char data type for the operator
 * - Use switch statement to handle different operators
 * - Remember to check for division by zero!
 * - Cast to double for division to get decimal results
 */

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // TODO: Use switch statement with op as the variable
    // TODO: case '+': add the numbers
    // TODO: case '-': subtract the numbers
    // TODO: case '*': multiply the numbers
    // TODO: case '/': divide (but check if num2 is not zero first!)
    // TODO: default: invalid operator message
    
    return 0;
}
