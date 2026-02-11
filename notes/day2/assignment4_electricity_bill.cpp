/*
 * Assignment 4: Electricity Bill Calculator
 * 
 * Problem: Calculate electricity bill based on units consumed with tiered pricing.
 * 
 * Pricing Tiers:
 * 0-100 units:      $0.50 per unit
 * 101-300 units:    $0.75 per unit
 * 301-500 units:    $1.00 per unit
 * Above 500 units:  $1.50 per unit
 * 
 * Additional:
 * - Fixed monthly charge: $10
 * - If bill exceeds $200, apply 5% surcharge
 * 
 * Example:
 * Input: 350 units
 * Calculation:
 * - First 100 units: 100 × $0.50 = $50
 * - Next 200 units: 200 × $0.75 = $150
 * - Remaining 50 units: 50 × $1.00 = $50
 * - Subtotal: $250
 * - Fixed charge: $10
 * - Total before surcharge: $260
 * - Surcharge (5%): $13
 * - Final bill: $273
 * 
 * Hints:
 * - Calculate cost for each tier separately
 * - Use if-else to determine which tiers apply
 * - Add fixed charge to total
 * - Check if total > $200, then add 5% surcharge
 * - Display detailed breakdown
 */

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;
    const double FIXED_CHARGE = 10.0;
    
    cout << "Enter units consumed: ";
    cin >> units;
    
    // TODO: Calculate bill based on tiered pricing
    // TODO: if units <= 100: bill = units × 0.50
    // TODO: else if units <= 300: calculate first 100 + remaining × 0.75
    // TODO: else if units <= 500: calculate first 100 + next 200 + remaining × 1.00
    // TODO: else: calculate all tiers + excess × 1.50
    
    // TODO: Add fixed monthly charge
    
    // TODO: Check if bill > 200, add 5% surcharge
    
    // TODO: Display:
    // TODO: - Units consumed
    // TODO: - Bill before fixed charge
    // TODO: - Fixed charge
    // TODO: - Surcharge (if applicable)
    // TODO: - Final total bill
    
    return 0;
}
