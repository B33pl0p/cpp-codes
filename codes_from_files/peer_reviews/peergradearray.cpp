// Rohit Tiwari
// Favorite Artists Counter (Array Example)

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int countAArtists(string artists[], int size);

int main() {
    const int SIZE = 5;
    string artists[SIZE];
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        cout << "=== Favorite Artists Tracker ===\n";

        // Input favorite artists
        for (int i = 0; i < SIZE; i++) {
            cout << "Enter artist " << (i + 1) << ": ";
            getline(cin, artists[i]);
        }

        // Show all artists
        cout << "\nYour favorite artists are w:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i + 1 << ". " << artists[i] << endl;
        }

        // Count how many start with 'A' or 'a'
        int count = countAArtists(artists, SIZE);
        cout << "\nArtists that start with 'A': " << count << endl;

        cout << "\nWould you like to enter another list? (y/n): ";
        cin >> again;
        cin.ignore();
        cout << "\n";
    }

    cout << "Goodbye!\n";
    return 0;
}

// Function to count how many artists start with 'A' or 'a'
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