#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    double GPA;
    int ID;
    int age;

    Student() {
        setFirstName("Jane");
        setLastName("Doe");
        setSchool("Default School");
        setGPA(0.0);
        setID(0);
        setAge(18);
    }

    void setFirstName(const string& f) {
        firstName = f;
    }

    void setLastName(const string& l) {
        lastName = l;
    }

    void setSchool(const string& s) {
        school = s;
    }

    void setGPA(double g) {
        if (g < 0) g = 0;
        if (g > 4) g = 4;
        GPA = g;
    }

    void setID(int idVal) {
        ID = idVal;
    }

    void setAge(int a) {
        if (a < 0) {
            age = 0;
        } else {
            age = a;
        }
    }

    void printStudent() const {
        cout << "Name:   " << firstName << " " << lastName << endl;
        cout << "School: " << school << endl;
        cout << "GPA:    " << GPA << endl;
        cout << "ID:     " << ID << endl;
        cout << "Age:    " << age << endl;
        cout << endl;
    }
};

int main() {
    srand(time(0));

    const int SIZE = 10;
    vector<Student> students;
    students.reserve(SIZE);

    string firstNames[] = {"Alex", "Maria", "David", "Lisa", "John", "Emily"};
    string lastNames[]  = {"Smith", "Johnson", "Brown", "Garcia", "Davis", "Miller"};
    string schools[]    = {"COS", "Redwood High", "Sequoia High", "Tech Academy"};

    int numFirst = 6;
    int numLast  = 6;
    int numSchools = 4;

    for (int i = 0; i < SIZE; i++) {
        Student s;

        s.setFirstName(firstNames[rand() % numFirst]);
        s.setLastName(lastNames[rand() % numLast]);
        s.setSchool(schools[rand() % numSchools]);

        // GPA EXACTLY 0.0–4.0
        double gpa = (rand() % 401) / 100.0;  
        s.setGPA(gpa);

        int id = rand() % 90000 + 10000; 
        s.setID(id);

        int age = rand() % 10 + 18;  
        s.setAge(age);

        students.push_back(s);
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].printStudent();
    }

    return 0;
}