#include <iostream>
using namespace std;

double calcFee(int hours) {
    double fee;

    if (hours <= 2) {
        fee = 5.0;
    }
    else {
        fee = 5.0 + (hours - 2) * 1.5;
    }

    if (fee > 20.0) {
        fee = 20.0;
    }

    return fee;
}

int main() {
    cout << "Parking Garage Fee Calculator" << endl;

    int hours;
    cout << "Enter number of hours parked: ";
    cin >> hours;

    double total = calcFee(hours);

    cout << "Your parking fee is: $" << total << endl;

    return 0;
}