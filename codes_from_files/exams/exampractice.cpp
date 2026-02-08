// source.cpp
// Program: Show 12 multiples of any integer

#include <iostream>
using namespace std;

int main() {
    int a;
    char again;

    do {
        cout << "Enter an integer: ";
        cin >> a;

        cout << "For a = " << a << endl;
        cout << "The multiples are: ";

        // loop to print 12 multiples
        for (int i = 1; i <= 12; i++) {
            cout << a * i;
            if (i < 12) {
                cout << ", ";  // commas between numbers
            }
        }
        cout << endl;

        // ask if user wants to try again
        cout << "Do you want to try another number? (y/n): ";
        cin >> again;
        cout << endl;

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}