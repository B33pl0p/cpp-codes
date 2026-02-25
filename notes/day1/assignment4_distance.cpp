// Day 1 - Assignment 4: Distance Calculator
// Calculate distance traveled
// Formula:
//   Distance = Speed * Time
// TODO: Complete this program

#include <iostream>
using namespace std;

int main() {
    // TODO: Declare variables for speed, time, and distance
    float speed, time, distance ;
    
    // TODO: Ask user for speed (km/h or mph) and time (hours)
    cout << "===== Distance Calculator =====" << endl;
    
    cout << "Enter Speed : " <<endl;
    cin >> speed ;
    cout << "Enter Time : " <<endl;
    cin >> time;
    // TODO: Calculate distance
    distance = speed * time ;
    
    // TODO: Display the result
    
    cout << " The Distance is : " << distance ;
    return 0;
}
