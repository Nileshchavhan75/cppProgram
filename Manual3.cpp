#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - After swapping: a = " << a << ", b = " << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - After swapping: a = " << a << ", b = " << b << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapByValue(num1, num2);
    cout << "After swapByValue: num1 = " << num1 << ", num2 = " << num2 << " (No change)" << endl;
    swapByReference(num1, num2);
    cout << "After swapByReference: num1 = " << num1 << ", num2 = " << num2 << " (Values swapped)" << endl;
    
    return 0;
}
