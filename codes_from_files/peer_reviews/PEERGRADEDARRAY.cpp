// Rohit Tiwari
// Favorite Artists Counter

#include <iostream>
#include <string>
using namespace std;

// function prototype
int countAArtists(string artists[], int size);

int main() {
    const int SIZE = 5;
    string artists[SIZE];
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        cout << "Favorite Artists Tracker\n";

        // input artists
        for (int i = 0; i < SIZE; i++) {
            cout << "Enter artist " << (i + 1) << ": ";
            getline(cin, artists[i]);
        }

        // show all artists
        cout << "\nYour favorite artists are:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << (i + 1) << ". " << artists[i] << endl;
        }

        // count artists starting with A or a
        int total = countAArtists(artists, SIZE);
        cout << "\nNumber of artists that start with 'A': " << total << endl;

        cout << "\nTry again? (y/n): ";
        cin >> again;
        cin.ignore();
        cout << "\n";
    }

    cout << "Goodbye!\n";
    return 0;
}

// function counts how many names start with A or a
int countAArtists(string artists[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (artists[i].length() > 0) {
            char first = artists[i][0];
            if (first == 'A' || first == 'a') {
                count++;
            }
        }
    }
    return count;
}