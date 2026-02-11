/*
 * Classwork 5: BMI Calculator with Categories
 * 
 * Problem: Calculate Body Mass Index (BMI) and categorize it.
 * BMI Formula: BMI = weight (kg) / (height (m) * height (m))
 * 
 * Categories:
 * BMI < 18.5:        Underweight
 * BMI 18.5 - 24.9:   Normal weight
 * BMI 25.0 - 29.9:   Overweight
 * BMI >= 30:         Obese
 * 
 * Example:
 * Input:
 *   Enter weight in kg: 70
 *   Enter height in meters: 1.75
 * Output:
 *   Your BMI is: 22.86
 *   Category: Normal weight
 * 
 * Hints:
 * - Use double for weight and height
 * - BMI = weight / (height * height)
 * - Use else-if to categorize
 * - Start from lowest BMI range and go up
 */

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    
    cout << "Enter weight in kg: ";
    cin >> weight;
    
    cout << "Enter height in meters: ";
    cin >> height;
    
    // TODO: Calculate BMI using the formula
    // TODO: Display the BMI value with 2 decimal places
    // TODO: Use else-if to determine category
    // TODO: if bmi < 18.5 → Underweight
    // TODO: else if bmi < 25.0 → Normal weight
    // TODO: else if bmi < 30.0 → Overweight
    // TODO: else → Obese
    
    return 0;
}
