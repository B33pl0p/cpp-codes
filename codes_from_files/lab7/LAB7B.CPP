#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 1. Populate array with random ints from 1 to 100
void populateIntArray(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100 + 1;   // 1–100
    }
}

// 2. Print the contents of the array
void printArrayContents(int a[], const int size) {
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// 3. Print the address of each element
void printArrayAddresses(int a[], const int size) {
    cout << "Array element addresses:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] is at address: " << &a[i] << endl;
    }
}

int main() {
    srand(time(0));

    const int SIZE = 10;
    int myArray[SIZE];

    // Populate the array with random integers
    populateIntArray(myArray, SIZE);

    // Print the contents of the array
    printArrayContents(myArray, SIZE);

    // Print the addresses of each element
    printArrayAddresses(myArray, SIZE);

    return 0;
}