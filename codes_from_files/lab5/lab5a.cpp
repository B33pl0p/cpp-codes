// source.cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    // 1. for loop
    for (int i = 0; i <= 9; i++) {
        sum += i;
    }
    cout << sum << endl;

    // 2. do while loop
    sum = 0;
    int j = 0;
    do {
        sum += j;
        j++;
    } while (j <= 9);
    cout << sum << endl;

    // 3. while loop
    sum = 0;
    int k = 0;
    while (k <= 9) {
        sum += k;
        k++;
    }
    cout << sum << endl;

    return 0;
}

/*
I like the for loop best because it’s the simplest.
You can see the start, stop, and count all in one line.
*/