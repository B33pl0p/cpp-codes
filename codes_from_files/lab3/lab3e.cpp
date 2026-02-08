#include <iostream>
#include <string>
using namespace std;

// function prototypes
double getPerimeter(double l, double w);
double getArea(double l, double w);

int main() {
    cout << "This program finds the perimeter and area of a rectangle." << endl;

    double length, width;
    string units;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter units (like cm or in): ";
    cin >> units;

    double p = getPerimeter(length, width);
    double a = getArea(length, width);

    cout << "\nPerimeter = " << p << " " << units << endl;
    cout << "Area = " << a << " " << units << "^2" << endl;

    return 0;
}

// function defs
double getPerimeter(double l, double w) {
    return 2 * (l + w);
}

double getArea(double l, double w) {
    return l * w;
}