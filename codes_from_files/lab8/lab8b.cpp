#include <iostream>
#include <string>
using namespace std;

// Student structure (same as previous lab)
struct Student {
    string firstName;
    string lastName;
    string school;
    double GPA;
};

// Print function from previous lab
void printStudent(Student arg) {
    cout << "First Name: " << arg.firstName << endl;
    cout << "Last Name:  " << arg.lastName << endl;
    cout << "School:     " << arg.school << endl;
    cout << "GPA:        " << arg.GPA << endl;
    cout << endl;
}

// 2. Capitalize names
void capitalize(Student& arg) {
    // Q: Why do we need the & operator?
    // A: We need & so we can change the actual Student object in main,
    //    not just a copy. Without &, changes would not be saved.

    if (!arg.firstName.empty()) {
        arg.firstName[0] = toupper(arg.firstName[0]);
    }

    if (!arg.lastName.empty()) {
        arg.lastName[0] = toupper(arg.lastName[0]);
    }
}

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    // 1. Populate the array
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter first name for student " << i + 1 << ": ";
        getline(cin, students[i].firstName);

        cout << "Enter last name for student " << i + 1 << ": ";
        getline(cin, students[i].lastName);

        cout << "Enter school for student " << i + 1 << ": ";
        getline(cin, students[i].school);

        cout << "Enter GPA for student " << i + 1 << ": ";
        cin >> students[i].GPA;
        cin.ignore();

        cout << endl;
    }

    // 2. Capitalize each student's names
    for (int i = 0; i < SIZE; i++) {
        capitalize(students[i]);
    }

    // 3. Print each student
    cout << "Student Information (Capitalized):\n\n";
    for (int i = 0; i < SIZE; i++) {
        printStudent(students[i]);
    }

    return 0;
}