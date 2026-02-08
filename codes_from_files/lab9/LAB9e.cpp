#include <iostream>
#include <iomanip>
using namespace std;

class Point {
private:
    double x, y;

public:
    // Default point
    Point() {
        x = 0;
        y = 0;
    }

    // Point with given values
    Point(double X, double Y) {
        x = X;
        y = Y;
    }

    double getX() const { return x; }
    double getY() const { return y; }
};

class Line {
private:
    Point p1, p2;

public:
    // Default line
    Line() {
        p1 = Point(0, 0);
        p2 = Point(1, 1);
    }

    // Line created from two points
    Line(Point a, Point b) {
        p1 = a;
        p2 = b;
    }

    // 1. Calculate slope
    double getSlope() const {
        double rise = p2.getY() - p1.getY();
        double run  = p2.getX() - p1.getX();

        if (run == 0) {
            cout << "Vertical line. Slope undefined.\n";
            return 0; 
        }
        return rise / run;
    }

    // 2. Print y = mx + b
    void printLine() const {
        double m = getSlope();
        double b = p1.getY() - m * p1.getX();

        cout << fixed << setprecision(2);
        cout << "y = " << m << "x + " << b << endl;
    }

    // 3. Evaluate line for any x
    double evaluate(double x) const {
        double m = getSlope();
        double b = p1.getY() - m * p1.getX();
        return m * x + b;
    }
};

int main() {
    // Make two points
    Point A(2, 5);
    Point B(6, 13);

    // Create ONE Line from the two points
    Line myLine(A, B);

    // Show the functions work
    cout << "Slope: " << myLine.getSlope() << endl;
    myLine.printLine();
    cout << "Value at x = 10: y = " << myLine.evaluate(10) << endl;

    return 0;
}