// Simple Payroll App
#include <iostream>
using namespace std;

// function prototype
double calculatePay(double hours, double rate);

int main() {
    double hours, rate;

    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;

    double pay = calculatePay(hours, rate);

    cout << "Total weekly pay: $" << pay << endl;

    return 0;
}

// function definition
double calculatePay(double hours, double rate) {
    double total;
    if (hours <= 40) {
        total = hours * rate;
    } else {
        double overtime = hours - 40;
        total = (40 * rate) + (overtime * rate * 1.5);
    }
    return total;
}