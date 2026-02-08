#include <iostream>
#include <string>

using namespace std;

int main() {
    string Name;
    string Major;
    string LastMath;
    string FavApp;
    string Computer;

    cout << "Name: ";
    getline(cin, Name);

    cout << "Major: ";
    getline(cin, Major);k

    cout << "Last math class: ";
    getline(cin, LastMath);

    cout << "Favorite app: ";
    getline(cin, FavApp);

    cout << "Home computer: ";
    getline(cin, Computer);

    cout << "\nMy name is " << Name
         << " and my major is " << Major
         << " with last math class " << LastMath << ".\n";

    cout << "I like to use the app " << FavApp
         << " on a " << Computer << ".\n";

    return 0;
}
