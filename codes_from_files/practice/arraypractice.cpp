#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// function to print int array
void printArrayInt(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// function to print double array
void printArrayDouble(double b[], int n) {
    cout << fixed << setprecision(3);
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(0));

    const int size = 10;
    int a[size];

    // 1. set all elements to 3
    for (int i = 0; i < size; i++) {
        a[i] = 3;
    }
    cout << "Array a - all 3s: ";
    printArrayInt(a, size);

    // 2. random numbers from 2 to 25
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 24 + 2; // 2–25
    }
    cout << "Array a - random 2 to 25: ";
    printArrayInt(a, size);

    // 3. sequential evens {2, 4, 6, 8, ...}
    for (int i = 0; i < size; i++) {
        a[i] = 2 * (i + 1);
    }
    cout << "Array a - sequential evens: ";
    printArrayInt(a, size);

    // new array of doubles
    const int n = 100;
    double b[n];

    // 4. random decimals 0–1
    for (int i = 0; i < n; i++) {
        b[i] = static_cast<double>(rand()) / RAND_MAX;
    }
    cout << "\nArray b - random decimals 0 to 1:\n";
    printArrayDouble(b, n);

    // 5. print b backwards
    cout << "Array b backwards:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << fixed << setprecision(3) << b[i] << " ";
        if ((n - i) % 10 == 0) cout << endl;
    }
    cout << endl;

    // 6. add all numbers in b
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }
    cout << "\nSum of all numbers in array b: " << fixed << setprecision(6) << sum << endl;

    return 0;
}