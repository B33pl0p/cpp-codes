#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double f(double x);

int main() {
    cout << "This program works out f(x) = 3x^2 - 2x + 1." << endl;

    double x;
    cout << "Enter x value: ";
    cin >> x;

    double ans = f(x);

    cout << fixed << setprecision(2);
    cout << "For function: f(x) = 3x^2 - 2x + 1" << endl;
    cout << "Result: f(" << x << ") = 3(" << x << ")^2 - 2(" << x << ") + 1 = " << ans << endl;

    return 0;
}

// function def
double f(double x) {
    return 3 * x * x - 2 * x + 1;
}