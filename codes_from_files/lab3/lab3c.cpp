#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// function prototype
double calcAmount(double principal, double rate, int years);

int main() {
    cout << "This program calculates compound interest monthly.\n";

    double principal, rate;
    int years;

    cout << "Enter the principal: ";
    cin >> principal;

    cout << "Enter the annual interest rate (like 3.5 for 3.5%): ";
    cin >> rate;

    cout << "Enter the number of years: ";
    cin >> years;

    double amount = calcAmount(principal, rate, years);

    cout << fixed << setprecision(2);
    cout << "Final amount is $" << amount << endl;

    return 0;
}

// function definition
double calcAmount(double principal, double rate, int years) {
    int n = 12; // monthly
    double r = rate / 100.0;
    return principal * pow(1 + r / n, n * years);
}