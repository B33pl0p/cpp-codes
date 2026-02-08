// random_numbers.cpp
// This program fills an array with 20 random integers (1–1000),
// then finds and displays the maximum and minimum numbers.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
int maxInteger(int a[], int size);
int minInteger(int a[], int size);

int main() {
    const int size = 20;
    int randomNumbers[size];
    char again = 'y';

    srand(time(0)); // seed random number generator

    while (again == 'y' || again == 'Y') {
        // Populate the array with random integers from 1–1000
        for (int i = 0; i < size; i++) {
            randomNumbers[i] = rand() % 1000 + 1;
        }

        // Display all 20 numbers
        cout << "\nRandom Numbers:\n";
        for (int i = 0; i < size; i++) {
            cout << randomNumbers[i] << " ";
        }
        cout << endl;

        // Display max and min using functions
        cout << "\nMaximum number: " << maxInteger(randomNumbers, size) << endl;
        cout << "Minimum number: " << minInteger(randomNumbers, size) << endl;

        // Ask if user wants to play again
        cout << "\nWould you like to play again? (y/n): ";
        cin >> again;
    }

    cout << "\nThanks for playing!\n";
    return 0;
}

// Function that returns maximum integer (linear search)
int maxInteger(int a[], int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

// Function that returns minimum integer (linear search)
int minInteger(int a[], int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}