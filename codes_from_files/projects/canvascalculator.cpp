//canvas calculator app
//Grade = 0.10(HW) + 0.60(EXAM) + 0.30(FINAL)

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int hw , exams , final, Grade;
    string name;
    double grade;

    cout << "\nWelcome to\"What if\"Grade Calculator" << endl;
   
    cout << "\nWhat is your Homework Grade?" <<endl;
    cin >> hw;
   
    cout << "\nWhat is your Exam Average?" <<endl;
    cin >> exams;
   
    cout << "\nWhat is your Final Score?" <<endl;
    cin >> final;
    cin.ignore();

    cout << "\nWhat is your name?" <<endl;
    getline(cin,  name);
    

    Grade = 0.10*(hw) + 0.60*(exams) + 0.30*(final);

    cout << "\nGrade = 0.10(" << hw << ") + 0.60(" << exams <<") + 0.30(" << final << ")" << endl;
    cout <<"\nThank you " << name << "Your grade is : " << Grade << endl;

    
return 0;
}