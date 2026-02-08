//Rohit Tiwari
//08/18/2025

#include<iostream>
using namespace std;

int main(void)

{
    int x, y, z, u, v;

    cout << "Average of 5 integers Calculator.\n" <<endl;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter an integer: ";
    cin >> y;

    cout << "Enter an integer: ";
    cin >> z;

    cout << "Enter an integer: ";
    cin >> u;

    cout << "Enter an integer: ";
    cin >> v;

    cout << "\n";

    cout << "You typed in "<<x<<","<< y <<","<< z <<","<< u <<","<< v <<"."<< endl;
    
    cout << "\n";

    cout << "The average is: " << (x + y + z + u + v) / 5 << endl;

    cout << "\n";
   

    return 0;

}