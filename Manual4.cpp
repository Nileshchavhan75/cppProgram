#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int rollNo;
    
    public:
        void setDetails(string studentName, int studentRollNo) {
            name = studentName;
            rollNo = studentRollNo;
        }
        void displayDetails() {
            cout << "Name: " << name << ", Roll No: " << rollNo << endl;
        }
};

int main() {
    int numStudents;

    cout << "Enter the number of students Details you want enter : ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        string name;
        int rollNo;
        
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name;
        
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> rollNo;
        
        students[i].setDetails(name, rollNo);
    }

    cout << "\nDetails of students:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayDetails();
    }

    return 0;
}
