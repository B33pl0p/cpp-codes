/*
 * Classwork 3: Grade Letter from Score
 * 
 * Problem: Write a program that converts a numerical score (0-100) 
 * into a letter grade.
 * 
 * Grading Scale:
 * 90-100: A
 * 80-89:  B
 * 70-79:  C
 * 60-69:  D
 * 0-59:   F
 * 
 * Example:
 * Input: 85
 * Output: Your grade is: B
 * 
 * Hints:
 * - Use else-if statements
 * - Start checking from highest grade (A) to lowest (F)
 * - Don't forget to validate input (0-100 range)
 */

#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your score (0-100): ";
    cin >> score;
    
    // TODO: First validate if score is between 0 and 100
    // TODO: Use else-if chain to determine grade
    // TODO: Start from score >= 90 for A, then >= 80 for B, etc.
    // TODO: Print the letter grade
    
    return 0;
}
