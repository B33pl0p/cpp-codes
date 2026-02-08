// Rohit Tiwari
// Array test to count chosen letters

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showArray(char arr[], int size);
int countLetter(char arr[], int size, char pick);



int main() {
    srand(time(0));
    const int SIZE = 50;
    char letters[SIZE];

    for (int i = 0; i < SIZE; i++) {
        letters[i] = 'a' + rand() % 26;
    }

    cout << "Random 50 letters:\n";
    showArray(letters, SIZE);

    char again = 'y';
    while (again == 'y' || again == 'Y') {
        char letter;
        cout << "\nType a letter to count: ";
        cin >> letter;

        int found = countLetter(letters, SIZE, letter);
        cout << "'" << letter << "' appears " << found << " times.\n";

        cout << "Count another? (y/n): ";
        cin >> again;
    }

    cout << "\nDone. Bye!\n";
    return 0;
}


void showArray(char arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        cout << i << " -> " << arr[i] << '\n';
    }
}


int countLetter(char arr[], int size, char pick) {
    
    int num = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == pick)
            num++;
    
    
    
    
        }
    return num;
}


