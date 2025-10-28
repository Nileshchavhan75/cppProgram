#include <iostream>
#include <stdexcept> // For exception handling
using namespace std;

// User-defined exception class
class InvalidAgeException : public exception {
    string message;

public:
    // Constructor to initialize the exception message
    InvalidAgeException(const string& msg) : message(msg) {}

    // Overriding the what() method from std::exception
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    int age;

    try {
        cout << "Enter your age: ";
        cin >> age;

        // Check for invalid age
        if (age < 0) {
            throw InvalidAgeException("Age cannot be negative!");
        } else if (age > 150) {
            throw InvalidAgeException("Age cannot be greater than 150!");
        }

        cout << "Valid age entered: " << age << endl;

    } catch (const InvalidAgeException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
