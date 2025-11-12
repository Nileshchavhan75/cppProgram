#include <iostream>
using namespace std;

class Youtuber {
public:
    int subscriber;
    string channel_name;
};

class Specialization {
public:
    string specialization;
};

class Student : public Youtuber, public Specialization {
    int roll_num;
    string std;

public:
    // Regular constructor without initialization list
    Student(int subscriber, string channel_name, string specialization, int roll_num, string std) {
        this->subscriber = subscriber;        // Assign subscriber
        this->channel_name = channel_name;    // Assign channel name
        this->specialization = specialization; // Assign specialization
        this->roll_num = roll_num;            // Assign roll number
        this->std = std;                      // Assign standard
    }

    void display() {
        cout << subscriber << " " << channel_name << " " << specialization << " "
             << roll_num << " " << std << endl;
    }
};

int main() {
    Student s(27, "Nil_animation", "CS", 12, "MCA");
    s.display();
    return 0;
}
