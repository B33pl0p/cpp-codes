#include <iostream>
#include <vector>
using namespace std;

struct Line {
    double m;
    double b;

    Line() {
        m = 1.0;
        b = 0.0;
    }

    Line(double slope, double intercept) {
        m = slope;
        b = intercept;
    }

    double evaluate(double x) const {
        return m * x + b;
    }
};

int main() {
    vector<Line> lines;

    lines.push_back(Line(1.0, 0.0));   // y = 1x + 0
    lines.push_back(Line(2.0, 1.0));   // y = 2x + 1
    lines.push_back(Line(-0.5, 4.0));  // y = -0.5x + 4
    lines.push_back(Line(3.0, -2.0));  // y = 3x - 2
    lines.push_back(Line(0.0, 5.0));   // y = 5

    double xValue = 5.0;

    for (int i = 0; i < lines.size(); i++) {
        cout << "Line " << i + 1 << ": y = "
             << lines[i].m << "x + " << lines[i].b << endl;

        cout << "  When x = " << xValue
             << ", y = " << lines[i].evaluate(xValue) << endl;
    }

    return 0;
}