#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    double GPA;
};

void printStudent(Student arg);

int main() {
    Student s;

    cout << "Enter first name: ";
    getline(cin, s.firstName);

    cout << "Enter last name: ";
    getline(cin, s.lastName);

    cout << "Enter school: ";
    getline(cin, s.school);

    cout << "Enter GPA: ";
    cin >> s.GPA;

    cout << endl;

    printStudent(s);

    return 0;
}

void printStudent(Student arg) {
    cout << "Student Information:\n";
    cout << "First Name: " << arg.firstName << endl;
    cout << "Last Name:  " << arg.lastName << endl;
    cout << "School:     " << arg.school << endl;
    cout << "GPA:        " << arg.GPA << endl;
}