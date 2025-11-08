#include <iostream>
using namespace std;

class Test {
    int a;

public:
    void getdata() {
        cout << "Enter the number: ";
        cin >> a;
    }

    void putdata() {
        cout << "Value of a: " << a << endl;
    }
    friend Test operator++(Test& obj, int);
};
Test operator++(Test& obj, int) {
    Test temp = obj; // Create a copy of the current object
    obj.a = obj.a + 1; // Increment the value of 'a'
    return temp;
}

int main() {
    Test t1;
    t1.getdata();
    cout << "Original value: ";
    t1.putdata();
    
    cout << "After increment: " << endl;
    t1++;
    t1.putdata();

    return 0;
}
