// Day 1 - Exercise 3: Circle Calculator
// Calculate diameter, circumference, and area from radius
// Formulas:
//   Diameter = radius * 2
//   Circumference = 2 * π * radius
//   Area = π * radius * radius
// TODO: Complete this program

#include <iostream>
using namespace std;

int main() {
    // Constant for PI
    const double PI = 3.14159;
    

    // TODO: Declare variables for radius, diameter, circumference, area
    float radius, diameter, circumference, Area ;
    
    // TODO: Ask user for the radius
    cout << "Enter the radius of the Circle : " << endl;
    cin  >> radius ;

    
    // TODO: Calculate diameter, circumference, and area
    
    diameter = 2 * radius ;
    circumference = 2 * PI * radius ;
    Area = PI * radius * radius ;
   
    // TODO: Display all results with labels
    cout << "Diameter of the circle is : " << diameter ;
    cout << "circumference of the circle is : "<< circumference ;
    cout << " Area of the circle is : " << Area ;
    
    return 0;
}
