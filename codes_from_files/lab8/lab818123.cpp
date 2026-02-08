#include <iostream>
using namespace std;

int main(void)
{

    int x, y;

    cout << "Multiplication App.\n" << endl;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter an integer: ";
    cin >> y;
    
    cout << "\nThe product is: " << x * y << endl;
    cout << "The sum: " << x + y << endl;
    cout << "The difference: "<< x - y << endl;
    cout << "The quotient: "<< 1.0*x / y << endl;
    cout << "The modulus: "<< x % y << endl;


    return 0;
}