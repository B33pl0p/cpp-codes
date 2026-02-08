// Rohit Tiwari
// Multiplication Table (10x10)
// Uses nested loops to fill and print the table

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 10;
    int multiplicationTable[SIZE][SIZE];

    // populate the table
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

    // print the table nicely
    cout << "10 x 10 Multiplication Table\n\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << setw(4) << multiplicationTable[i][j];
        }
        cout << endl;
    }

    return 0;
}