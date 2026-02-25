// Day 1 - Assignment 2: Average Calculator
// Calculate the average of 5 numbers
// Formula:
//   Average = (num1 + num2 + num3 + num4 + num5) / 5
// TODO: Complete this program
//focus on the data type of average -> float ? int?
#include <iostream>
using namespace std;

int main() {
    // TODO: Declare variables for five numbers and their average
    float num1, num2, num3, num4, num5, average;
    
    // TODO: Ask user to enter five numbers
    cout << "===== Average Calculator =====" << endl;
    
    cout << "Enter first number : " <<endl;
    cin >> num1 ;
    cout << "Enter second number : " <<endl;
    cin >> num2 ;
    cout << "Enter third number : " <<endl;
    cin >> num3 ;
    cout << "Enter fourth number : " <<endl;
    cin >> num4 ;
    cout << "Enter fifth number : " <<endl;
    cin >> num5 ; 
    
    // TODO: Calculate the average
    average = (num1 + num2 + num3 + num4 + num5) / 5 ;
    
    // TODO: Display the average
    cout << "Average of the five number is : " << average ;
    
    return 0;
}
