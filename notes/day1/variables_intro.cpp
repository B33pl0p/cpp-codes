// Day 1 - Example 2: Variables and Data Types
// Demonstrates declaring and initializing variables

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer - whole numbers
    int age = 21;
    int year = 2026;
    
    // Double - decimal numbers
    double gpa = 3.75;
    double price = 49.99;
    
    // Character - single character
    char grade = 'A';
    char initial = 'R';
    
    // String - text
    string name = "Rohit";
    string course = "Computer Science";
    
    // Boolean - true or false
    bool isStudent = true;
    bool graduated = false;
    
    // Display all variables
    cout << "===== Student Information =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Initial: " << initial << endl;
    cout << "Course: " << course << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Year: " << year << endl;
    cout << "Price of textbook: $" << price << endl;
    cout << "Is a student: " << isStudent << endl;
    cout << "Has graduated: " << graduated << endl;
    
    return 0;
}
