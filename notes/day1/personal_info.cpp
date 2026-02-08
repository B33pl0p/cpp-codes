// Day 1 - Example 5: Personal Information Program
// Working with multiple data types

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables for different types of information
    string firstName, lastName;
    int birthYear, currentYear;
    double gpa;
    char building;
    bool hasScholarship;
    
    // Gather information
    cout << "===== Student Registration Form =====" << endl;
    cout << "\nEnter your first name: ";
    cin >> firstName;
    
    cout << "Enter your last name: ";
    cin >> lastName;
    
    cout << "Enter your birth year: ";
    cin >> birthYear;
    
    cout << "Enter current year: ";
    cin >> currentYear;
    
    cout << "Enter your GPA (0.0-4.0): ";
    cin >> gpa;
    
    cout << "Enter your building (single letter): ";
    cin >> building;
    
    cout << "Do you have a scholarship? (1 for yes, 0 for no): ";
    cin >> hasScholarship;
    
    // Calculate age
    int age = currentYear - birthYear;
    
    // Display formatted output
    cout << "\n========================================" << endl;
    cout << "       STUDENT INFORMATION CARD" << endl;
    cout << "========================================" << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Building: " << building << endl;
    cout << "Scholarship Status: " << (hasScholarship ? "Yes" : "No") << endl;
    cout << "========================================" << endl;
    
    return 0;
}
