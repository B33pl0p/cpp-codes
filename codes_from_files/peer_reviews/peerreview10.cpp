#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to roll the dice
int rollDice() {
    return rand() % 6 + 1; // gives a number from 1 to 6
}

// Function to show results
void showResults(int counts[], int rolls) {
    cout << "\nResults after " << rolls << " rolls:\n";
    for (int i = 1; i <= 6; i++) {
        cout << "Number " << i << " rolled " << counts[i] << " times.\n";
    }
}

int main() {
    srand(time(0)); // seed the random number generator
    char again = 'y';

    cout << "Dice Roll Simulator\n";

    while (again == 'y' || again == 'Y') {
        int rolls;
        cout << "\nHow many times do you want to roll the dice? ";
        cin >> rolls;

        // simple validation
        if (rolls <= 0) {
            cout << "You must roll at least once! Setting rolls to 1.\n";
            rolls = 1;
        }

        int counts[7] = {0}; // index 1-6 used to count dice faces

        for (int i = 0; i < rolls; i++) {
            int result = rollDice();
            counts[result]++;
        }

        showResults(counts, rolls);

        cout << "\nWould you like to roll again (y or n)? ";
        cin >> again;
    }

    cout << "\nThanks for using the Dice Roll Simulator!\n";
    return 0;
}