// Day 1 - Example 3: User Input
// Getting input from the user with cin

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    double height;
    char favoriteGrade;
    
    // Get input from user
    cout << "What is your name? ";
    cin >> name;
    
    cout << "How old are you? ";
    cin >> age;
    
    cout << "What is your height in meters? ";
    cin >> height;
    
    cout << "What is your favorite letter grade (A-F)? ";
    cin >> favoriteGrade;
    
    // Display the information
    cout << "\n===== Your Information =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Favorite Grade: " << favoriteGrade << endl;
    
    cout << "\nThank you for sharing!" << endl;
    
    return 0;
}
