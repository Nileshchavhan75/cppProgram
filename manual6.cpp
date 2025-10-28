#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int rollNo;
        
        // Static data member
        static int count;  

    public:
        Student() {
            name = "Unknown";
            rollNo = 0;
            count++;  // Increment the static member count
        }
        Student(string n, int r) {
            name = n;
            rollNo = r;
            count++;  // Increment the static member count
        }


        Student(const Student &s) {
            name = s.name;
            rollNo = s.rollNo;
            count++;  // Increment the static member count
        }

        // Static member function to access the static data member
        static int getCount() {
            return count;
        }

        // Function to display student details
        void display() const {
            cout << "Name: " << name << ", Roll No: " << rollNo << endl;
        }
};

// Initialize the static data member
int Student::count = 0;

int main() {
    // Creating objects using different constructors
    Student s1;  // Default constructor
    Student s2("Shivay", 07);  // Parameterized constructor
    Student s3 = s2;  // Copy constructor

    // Display details of students
    cout << "Student 1: ";
    s1.display();
    
    cout << "Student 2: ";
    s2.display();
    
    cout << "Student 3 (Copy of Student 2): ";
    s3.display();

    // Display total number of student objects created using the static member function
    cout << "Total students created: " << Student::getCount() << endl;

    return 0;
}
