#include<iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;  // Start character for the current row
        
        for (int j = 0; j <= i; j++) {
            cout << char(ch - j) << " ";  // Convert ASCII value back to character
        }
        
        cout << endl;  // Move to the next line after each row
    }
    
    return 0;
}
