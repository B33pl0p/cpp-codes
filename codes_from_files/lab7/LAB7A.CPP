#include <iostream>
#include <string>
using namespace std;

int main() {
    string userString;

    // Part I
    cout << "Enter a string: ";
    getline(cin, userString);

    // a) forward with dashes
    cout << "\nForward with dashes:\n";
    for (int i = 0; i < userString.length(); i++) {
        cout << userString[i];
        if (i < userString.length() - 1) {
            cout << "-";
        }
    }
    cout << endl;

    // b) backward with dashes
    cout << "\nBackward with dashes:\n";
    for (int i = userString.length() - 1; i >= 0; i--) {
        cout << userString[i];
        if (i > 0) {
            cout << "-";
        }
    }
    cout << endl << endl;

    // Part II
    const int n = 5;
    string userStrings[n];

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, userStrings[i]);
    }

    cout << "\nPrinting all strings with '*':\n";
    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        for (int j = 0; j < userStrings[i].length(); j++) {
            cout << userStrings[i][j];
            if (j < userStrings[i].length() - 1) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}