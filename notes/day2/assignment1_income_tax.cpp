/*
 * Assignment 1: Income Tax Calculator
 * 
 * Problem: Calculate income tax based on progressive tax brackets.
 * 
 * Tax Brackets:
 * $0 - $10,000:        0% tax
 * $10,001 - $30,000:   10% tax
 * $30,001 - $60,000:   20% tax
 * $60,001 - $100,000:  30% tax
 * Above $100,000:      40% tax
 * 
 * Example:
 * Input: Annual income: $45,000
 * Output: 
 *   Income: $45,000
 *   Tax: $7,000
 *   Net income: $38,000
 * 
 * Calculation for $45,000:
 * - First $10,000: 0% = $0
 * - Next $20,000 ($10k-$30k): 10% = $2,000
 * - Remaining $15,000 ($30k-$45k): 20% = $3,000
 * - Total tax: $0 + $2,000 + $3,000 = $5,000
 * 
 * Hints:
 * - Use else-if to determine which bracket
 * - Calculate tax for each portion separately
 * - For income above a bracket, calculate that bracket's full tax first
 * - Then calculate remaining income at higher rate
 * - Display income, tax, and net income (income - tax)
 */

#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;
    
    cout << "Enter annual income: $";
    cin >> income;
    
    // TODO: Validate that income is positive
    
    // TODO: Calculate tax based on brackets
    // TODO: Use else-if chain to determine bracket
    // TODO: Calculate tax amount
    
    // TODO: Calculate net income (income - tax)
    
    // TODO: Display results:
    // TODO: - Original income
    // TODO: - Tax amount
    // TODO: - Net income after tax
    
    return 0;
}
