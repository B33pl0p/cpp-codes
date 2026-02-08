#include <iostream>
using namespace std;

// function to find discriminant
double getDiscriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

int main() {
    cout << "Quadratic Equation Checker" << endl;
    cout << "Equation form: ax^2 + bx + c = 0" << endl;

    // ask user for a, b, and c
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // calculate discriminant
    double d = getDiscriminant(a, b, c);

    // check type of solutions
    if (d > 0) {
        cout << "Discriminant = " << d << endl;
        cout << "This equation has TWO real solutions." << endl;
    }
    else if (d == 0) {
        cout << "Discriminant = " << d << endl;
        cout << "This equation has ONE real solution." << endl;
    }
    else {
        cout << "Discriminant = " << d << endl;
        cout << "This equation has TWO complex solutions." << endl;
    }

    return 0;
}