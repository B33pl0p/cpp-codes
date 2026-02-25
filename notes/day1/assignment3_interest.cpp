// Day 1 - Assignment 3: Simple Interest Calculator
// Calculate simple interest
// Formula:
//   Simple Interest = (Principal * Rate * Time) / 100
//   Total Amount = Principal + Simple Interest
// TODO: Complete this program

#include <iostream>
using namespace std;

int main() {
    // TODO: Declare variables for principal, rate, time, interest, and total
    float principal, rate, time, interest ;
    
    // TODO: Ask user for principal amount, rate, and time period
    cout << "===== Simple Interest Calculator =====" << endl;
    
    cout << " Enter the Principal : " <<endl;
    cin >> principal ;
    cout << " Enter the rate : " <<endl;
    cin >> rate ;
    cout << " Enter the time : " <<endl;
    cin >> time ;
    
    // TODO: Calculate simple interest and total amount
    interest = (principal + rate + time) / 100 ;
    
    // TODO: Display the results
    cout << " Simple interest is : " << interest ;
    
    return 0;
}
