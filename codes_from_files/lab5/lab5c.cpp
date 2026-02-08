// source.cpp
// Simple Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));   // seed random number generator
    char again;

    do {
        int secret = rand() % 100 + 1;  // number between 1 and 100
        int guess;
        int count = 0;  // counts guesses

        cout << "I am thinking of a number between 1 and 100." << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            count++;

            if (guess < secret) {
                cout << "Too low." << endl;
            } else if (guess > secret) {
                cout << "Too high." << endl;
            } else {
                cout << "You got it in " << count << " guesses!" << endl;
            }

        } while (guess != secret);

        cout << "Play again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Game over." << endl;
    return 0;
}