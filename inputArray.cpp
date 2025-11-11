#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n]; // Declare an array of size n

    // Taking input for the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i]; // Read each element
    }

    // Displaying the array elements
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " "; // Print each element
    }
    cout << endl;

    return 0;
}
