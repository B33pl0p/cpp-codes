// Rohit Tiwari
// Password Generator
// Generates an 8-character password with specific rules

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string makePassword() {
    string specials = "*&#@$";
    string lowers = "abcdefghijklmnopqrstuvwxyz";
    string uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string digits = "0123456789";
    string pass = "";

    // first char must be special
    pass += specials[rand() % specials.size()];

    // one more special
    pass += specials[rand() % specials.size()];

    // one capital letter
    pass += uppers[rand() % uppers.size()];

    // two digits
    for (int i = 0; i < 2; i++) {
        pass += digits[rand() % digits.size()];
    }

    // fill the rest with lowercase letters
    while (pass.size() < 8) {
        pass += lowers[rand() % lowers.size()];
    }

    // shuffle except first character
    for (int i = 1; i < pass.size(); i++) {
        int j = 1 + rand() % (pass.size() - 1);
        swap(pass[i], pass[j]);
    }

    return pass;
}

int main() {
    srand(time(0));
    char again = 'y';

    cout << "Password Generator\n\n";

    while (again == 'y' || again == 'Y') {
        string pw = makePassword();
        cout << "Your password: " << pw << endl;
        cout << "Do you want another one? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Bye!" << endl;
    return 0;
}