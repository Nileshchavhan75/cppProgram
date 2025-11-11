#include<iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    float salary;
};

class Manager : public Employee {
    string department;

public:
    // Constructor to get input from the user
    Manager() {
        cout << "Enter name: ";
        getline(cin, name);
        
        cout << "Enter ID: ";
        cin >> id;
        
        cout << "Enter salary: ";
        cin >> salary;
        
        cout << "Enter department: ";
        cin.ignore(); // To ignore the newline left by cin
        getline(cin, department);
    }

    void display() {
        cout << "\n--- Manager Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m; // Getting input during object creation
    m.display(); // Displaying the details
    return 0;
}
