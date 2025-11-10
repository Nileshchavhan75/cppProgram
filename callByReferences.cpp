#include <iostream>
using namespace std;

// Function to calculate the factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if the number is a strong number
bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    // Calculate the sum of factorials of digits
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // If sum equals the original number, it's a strong number
    return (sum == originalNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrongNumber(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}
