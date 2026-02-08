#include <iostream>
using namespace std;

bool checkForA(int x) {
    if (x > 89 && x <= 100) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << "This program checks if your grade is an A." << endl;

    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (checkForA(grade)) {
        cout << "You have earned an A." << endl;
    }
    else {
        cout << "You have not earned an A." << endl;
    }

    return 0;
}