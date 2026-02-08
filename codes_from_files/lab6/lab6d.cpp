// Magic8Ball.cpp
// Created by Rohit Tiwari
// Simple Magic 8 Ball program using a bool runAgain() function\n

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype
bool runAgain(void);

int main() {
    // Array with possible answers\n
    string answers[20] = {
        "It is certain.",
        "It is decidedly so.",
        "Without a doubt.",
        "Yes, definitely.",
        "You may rely on it.",
        "As I see it, yes.",
        "Most likely.",
        "Outlook good.",
        "Yes.",
        "Signs point to yes.",
        "Reply hazy, try again.",
        "Ask again later.",
        "Better not tell you now.",
        "Cannot predict now.",
        "Concentrate and ask again.",
        "Don't count on it.",
        "My reply is no.",
        "My sources say no.",
        "Outlook not so good.",
        "Very doubtful."
    };

    // Random number setup\n
    srand(time(0));

    do {
        cout << "Ask a yes or no question:\n> ";
        string question;
        getline(cin, question);

        // Get random answer\n
        int index = rand() % 20;
        cout << "\nMagic 8 Ball says: " << answers[index] << "\n\n";

    } while (runAgain());  // calls our bool function

    cout << "Thanks for playing! Goodbye!\n";
    return 0;
}

// Function that asks user if they want to play again
bool runAgain(void) {
    char again;
    cout << "Would you like to ask another question? (y/n): ";
    cin >> again;
    cin.ignore(); // clear the input buffer
    cout << "\n";
    return (again == 'y' || again == 'Y');
}