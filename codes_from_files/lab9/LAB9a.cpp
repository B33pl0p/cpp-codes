#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 2. Function that prints all strings
void printStrings(vector<string> arg) {
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << endl;
    }
}

// 3. Function that returns a random string
string randomString(vector<string> arg) {
    int index = rand() % arg.size();  
    return arg[index];
}

int main() {
    srand(time(0));

    vector<string> userStrings;
    string input;
    char again = 'y';

    // 1. Populate vector at run time using push_back
    while (again == 'y' || again == 'Y') {
        cout << "Enter a string: ";
        getline(cin, input);
        userStrings.push_back(input);

        cout << "Add another? (y/n): ";
        cin >> again;
        cin.ignore();  
    }

    cout << "\nYou entered:\n";
    printStrings(userStrings);

    cout << "\nRandom string from the vector: " 
         << randomString(userStrings) << endl;

    return 0;
}