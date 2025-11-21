#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    if (num <= 3) return true;  // 2 and 3 are prime numbers

    // Eliminate even numbers and multiples of 3
    if (num % 2 == 0 || num % 3 == 0) return false;

    // Check for factors from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
