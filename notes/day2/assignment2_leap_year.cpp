/*
 * Assignment 2: Leap Year Checker
 * 
 * Problem: Determine if a given year is a leap year.
 * 
 * Leap Year Rules:
 * 1. Year must be divisible by 4
 * 2. BUT if year is divisible by 100, it's NOT a leap year
 * 3. EXCEPT if year is also divisible by 400, then it IS a leap year
 * 
 * Examples:
 * 2024 → Leap year (divisible by 4, not by 100)
 * 2000 → Leap year (divisible by 400)
 * 1900 → Not a leap year (divisible by 100 but not by 400)
 * 2023 → Not a leap year (not divisible by 4)
 * 
 * Hints:
 * - Use modulo operator (%) to check divisibility
 * - Check conditions in order: 400 first, then 100, then 4
 * - Use nested if or logical operators (&&, ||)
 * - A number is divisible by X if: number % X == 0
 */

#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    // TODO: Check leap year conditions
    // TODO: If divisible by 400 → leap year
    // TODO: Else if divisible by 100 → not a leap year
    // TODO: Else if divisible by 4 → leap year
    // TODO: Else → not a leap year
    
    // Alternative approach using logical operators:
    // TODO: if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    
    return 0;
}
