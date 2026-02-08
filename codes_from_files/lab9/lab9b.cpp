#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int searchVector(vector<string> vecArg, string target) {
    for (int i = 0; i < vecArg.size(); i++) {
        if (vecArg[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    srand(time(0));

    vector<string> names;
    vector<string> firstNames = {
        "Alex", "John", "Emily", "Sarah", "David",
        "Michael", "Daniel", "Lisa", "Kevin", "Maria"
    };

    for (int i = 0; i < 10; i++) {
        names.push_back(firstNames[rand() % firstNames.size()]);
    }

    cout << "Here are the 10 random names:\n";
    cout << "Here are the 10 random names:\n";
    for (int i = 0; i < names.size(); i++) {
        cout << i << ": " << names[i] << endl;
    }
    cout << endl;

    char again = 'y';

    while (again == 'y' || again == 'Y') {
        string target;
        cout << "Enter a name to search for (case sensitive): ";
        getline(cin, target);

        int index = searchVector(names, target);

        if (index == -1) {
            cout << "The name '" << target << "' was NOT found in the vector.\n\n";
        } else {
            cout << "The name '" << target << "' was found at index " << index << ".\n\n";
        }

        cout << "Search again? (y/n): ";
        cin >> again;
        cin.ignore();
        cout << endl;
    }

    return 0;
}