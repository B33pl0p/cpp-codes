// Day 1 - Assignment 1: Rectangle Calculator
// Calculate area and perimeter of a rectangle
// Formulas:
//   Area = length * width
//   Perimeter = 2 * (length + width)
// TODO: Complete this program

#include <iostream>
using namespace std;

int main() {
    // TODO: Declare variables for length, width, area, and perimeter
    float length, width, area, perimeter , breadth ;
    
    // TODO: Ask user for the length and width
    cout << "===== Rectangle Calculator =====" << endl;
    
    cout << "Enter the length of the rectangle : "<< endl;
    cin >> length ;
    cout << "Enter the breadth of the rectangle : " <<endl;
    cin >> breadth ;
    cout << "Enter the width of the rectangle : " <<endl;
    cin >> width ;

    // TODO: Calculate area and perimeter
    area = length * breadth ;
    perimeter = 2 * (length + breadth) ;
    
    // TODO: Display the results
    
    cout << " The Area of the rectangle is : " << area ;
    cout << " Perimeter of the rectangle is : " <<perimeter ;
    return 0;
}
