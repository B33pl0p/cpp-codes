// what_if_grade_calculator.cpp
// Canvas "What If" Grade Calculator
// Computes weighted average and course letter using two functions, with a run-again loop.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Function prototypes
double courseAvg(int hw, int testAvg, int finalExam);
char letterGrade(double avg);

int main() {
    cout << "---------------------------------------------\n";
    cout << " Canvas \"What If\" Grade Calculator (Unit 3) \n";
    cout << " We are building a simple tool for students. \n";
    cout << " Weights: HW 10%, Tests 60%, Final 30%.      \n";
    cout << "---------------------------------------------\n\n";

    char again = 'y';
    while (again == 'y' || again == 'Y') {
        string name;
        int hw, tests, fin;

        cout << "Enter your NAME: ";
        getline(cin, name);

        cout << "Enter homework score (0-100): ";
        cin >> hw;
        cout << "Enter test average (0-100): ";
        cin >> tests;
        cout << "Enter final exam score (0-100): ";
        cin >> fin;

        double avg = courseAvg(hw, tests, fin);
        char letter = letterGrade(avg);

        cout << "\nRESULTS for: " << name << "\n";
        cout << "Weighted Average: " << fixed << setprecision(0) << avg << "\n";
        cout << "Course Letter: " << letter << "\n\n";

        cout << "Would you like to run again (y or n)? ";
        cin >> again;
        cin.ignore(10000, '\n'); // clear leftover newline
        cout << "\n";
    }

    cout << "Goodbye!\n";
    return 0;
}

// Function implementations
double courseAvg(int hw, int testAvg, int finalExam) {
    // Weights: 10% HW, 60% Tests, 30% Final
    double avg = 0.10 * hw + 0.60 * testAvg + 0.30 * finalExam;
    return avg;
}

char letterGrade(double avg) {
    if (avg >= 90.0) return 'A';
    else if (avg >= 80.0) return 'B';
    else if (avg >= 70.0) return 'C';
    else if (avg >= 60.0) return 'D';
    else return 'F';
}