#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverseString(string str) {
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    string str = "Hello";
    cout << "Original string: " << str << "\n";
    reverseString(str);
    return 0;
}
