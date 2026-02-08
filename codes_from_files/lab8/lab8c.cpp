#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    double GPA;
    int ID;

    void capitalize() {
        if (!firstName.empty()) {
            firstName[0] = toupper(firstName[0]);
        }
        if (!lastName.empty()) {
            lastName[0] = toupper(lastName[0]);
        }
    }

    void addToGPA(double arg) {
        GPA += arg;
    }

    void printStudent() const {
        cout << "ID:        " << ID << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name:  " << lastName << endl;
        cout << "School:     " << school << endl;
        cout << "GPA:        " << GPA << endl;
        cout << endl;
    }
};

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << endl;

        cout << "Enter first name: ";
        getline(cin, students[i].firstName);

        cout << "Enter last name: ";
        getline(cin, students[i].lastName);

        cout << "Enter school: ";
        getline(cin, students[i].school);

        cout << "Enter ID (5 digits, no leading zeros): ";
        cin >> students[i].ID;

        cout << "Enter GPA: ";
        cin >> students[i].GPA;
        cin.ignore();

        cout << endl;

        students[i].capitalize();
        // Example of using addToGPA (small bonus curve)
        // students[i].addToGPA(0.1);
    }

    cout << "Student Information:\n\n";
    for (int i = 0; i < SIZE; i++) {
        students[i].printStudent();
    }

    return 0;
}