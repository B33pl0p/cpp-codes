// source.cpp
// Function: f(x) = 5x^2 - x + 7

#include <iostream>
using namespace std;

// Function prototype
int f(int x);

int main() {
    int startX = -2;
    int endX = 3;
    char again;

    do {
        cout << "f(x) = 5x^2 - x + 7" << endl;
        cout << "x | y" << endl;
        cout << "------" << endl;

        // make the table
        for (int x = startX; x <= endX; x++) {
            int y = f(x);
            cout << x << " | " << y << endl;
        }

        // ask if user wants another one
        cout << "Do you want another table? (y/n): ";
        cin >> again;

        if (again == 'y' || again == 'Y') {
            cout << "Enter starting x: ";
            cin >> startX;
            cout << "Enter ending x: ";
            cin >> endX;
        }

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}

// Function definition
int f(int x) {
    return 5 * x * x - x + 7;
}