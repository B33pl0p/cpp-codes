#include <iostream>
using namespace std;

// function prototypes
double circleArea(double radius);
double circleCircumference(double radius);

const double PI = 3.14159;

int main() {
    cout << "WELCOME TO CIRCLE ANALYZER" << endl;

    double diameter;
    cout << "\nEnter the diameter of a circle: ";
    cin >> diameter;

    double radius = diameter / 2.0;
    double area = circleArea(radius);
    double circumference = circleCircumference(radius);

    cout << "\nThe radius is: " << radius << " units" << endl;
    cout << "Circumference: " << circumference << " units" << endl;
    cout << "Area: " << area << " square units" << endl;

    return 0;
}

// function definitions
double circleArea(double radius) {
    return PI * radius * radius;
}

double circleCircumference(double radius) {
    return 2 * PI * radius;
}