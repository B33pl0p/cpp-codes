#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    string name;
    int age;

    cout << "Enter you name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    getline(cin, age);
    cin.ignore();

    cout<< "\n Your name is: " << name << endl;
   
    cout<< fixed << setprecision (2);
    cout<< " Your age is: " << age << endl;

    return 0;
}