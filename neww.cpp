#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two floats
float add(float a, float b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10, z = 15;
    float p = 5.5, q = 10.5;

    cout << "Sum of two integers: " << add(x, y) << endl;        // Calls the int version
    cout << "Sum of two floats: " << add(p, q) << endl;          // Calls the float version
    cout << "Sum of three integers: " << add(x, y, z) << endl;   // Calls the version with three arguments

    return 0;
}
