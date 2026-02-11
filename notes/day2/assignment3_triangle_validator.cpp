/*
 * Assignment 3: Triangle Validator & Classifier
 * 
 * Problem: Given three sides, determine if they form a valid triangle.
 * If valid, classify the triangle type.
 * 
 * Triangle Validity Rule:
 * Sum of any two sides must be greater than the third side
 * - side1 + side2 > side3
 * - side2 + side3 > side1
 * - side1 + side3 > side2
 * 
 * Triangle Types:
 * - Equilateral: All three sides are equal
 * - Isosceles: Two sides are equal
 * - Scalene: All sides are different
 * 
 * Example:
 * Input: 3, 4, 5
 * Output: 
 *   Valid triangle
 *   Type: Scalene
 * 
 * Input: 5, 5, 5
 * Output:
 *   Valid triangle
 *   Type: Equilateral
 * 
 * Hints:
 * - First check if triangle is valid
 * - Use logical AND (&&) to check all three conditions
 * - If valid, then classify:
 *   - Check if all three sides equal → Equilateral
 *   - Check if any two sides equal → Isosceles
 *   - Otherwise → Scalene
 */

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    
    // TODO: First validate if it forms a valid triangle
    // TODO: Check if (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)
    
    // TODO: If valid, classify the triangle:
    // TODO: - If all three sides equal → Equilateral
    // TODO: - Else if any two sides equal → Isosceles
    // TODO: - Else → Scalene
    
    // TODO: If not valid, print "Not a valid triangle"
    
    return 0;
}
