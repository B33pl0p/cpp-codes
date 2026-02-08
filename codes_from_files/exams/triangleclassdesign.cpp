#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Triangle {
public:
    double sideA;
    double sideB;
    double sideC;
    string color;

    Triangle() {
        sideA = 0;
        sideB = 0;
        sideC = 0;
        color = "none";
    }

    Triangle(double a, double b, double c, string col) {
        sideA = a;
        sideB = b;
        sideC = c;
        color = col;
    }

    void print() const {
        cout << "Triangle - sides: "
             << sideA << ", "
             << sideB << ", "
             << sideC << " | color: "
             << color << endl;
    }
};

// Regular C-type function to check triangle inequality
bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    srand(time(0));

    const int SIZE = 50;
    Triangle triangles[SIZE];

    const int NUM_COLORS = 5;
    string colors[NUM_COLORS] = {"red", "blue", "green", "yellow", "purple"};

    // Populate array with random valid triangles and random colors
    for (int i = 0; i < SIZE; i++) {
        double a, b, c;

        // Generate random sides until we get a valid triangle
        do {
            a = rand() % 20 + 1;  // 1 to 20
            b = rand() % 20 + 1;
            c = rand() % 20 + 1;
        } while (!isTriangle(a, b, c));

        string col = colors[rand() % NUM_COLORS];

        triangles[i] = Triangle(a, b, c, col);
    }

    // Print all triangles
    for (int i = 0; i < SIZE; i++) {
        triangles[i].print();
    }

    return 0;
}