#include <iostream>
using namespace std;

int main() {
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        int start;
        int count;
        int sum = 0;

        cout << "Enter the starting number: ";
        cin >> start;

        cout << "How many numbers do you want to add? ";
        cin >> count;

        cout << "Adding: ";
        for (int i = 0; i < count; i++) {
            cout << (start + i);
            if (i < count - 1) {
                cout << " + ";
            }
            sum = sum + (start + i);
        }

        cout << " = " << sum << endl;

        cout << "Do you want to try again? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Goodbye!" << endl;

    return 0;
}