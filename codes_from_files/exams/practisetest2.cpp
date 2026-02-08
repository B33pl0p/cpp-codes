#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        int t;
        int n;
        double result = 0.0;

        cout << "Enter value for t: ";
        cin >> t;

        cout << "Enter number of terms (n): ";
        cin >> n;

        for (int k = 0; k <= n; k++) {
            double power = 1.0;
            for (int i = 0; i < k; i++) {
                power = power * t;   // calculate t^k
            }
            result = result + (power / factorial(k));
        }

        cout << fixed << setprecision(3);
        cout << "e^" << t << " = " << result << endl;

        cout << "Would you like to run again? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Goodbye!" << endl;
    return 0;
}