#include <iostream>
#include <string>
using namespace std;

// function to calculate commission
double getCommission(double price, string role) {
    double rate = 0.0;

    if (price <= 12000) {
        if (role == "salesperson") {
            rate = 0.021;
        } else if (role == "loan officer") {
            rate = 0.005;
        }
    }
    else if (price <= 22000) {
        if (role == "salesperson") {
            rate = 0.029;
        } else if (role == "loan officer") {
            rate = 0.007;
        }
    }
    else { // greater than 22000
        if (role == "salesperson") {
            rate = 0.032;
        } else if (role == "loan officer") {
            rate = 0.01;
        }
    }

    return price * rate;
}

int main() {
    cout << "Car Sales Commission Calculator" << endl;

    double price;
    string role;

    cout << "Enter the sales price of the car: ";
    cin >> price;

    cout << "Enter your role (salesperson or loan officer): ";
    cin >> role;

    double commission = getCommission(price, role);

    cout << "Your commission is: $" << commission << endl;

    return 0;
}