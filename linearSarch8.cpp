#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index if found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nChoose the search method:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice (1/2): ";
    int choice;
    cin >> choice;

    cout << "Enter the element to search: ";
    int key;
    cin >> key;

    if (choice == 1) {
        // Linear Search
        int result = linearSearch(arr, n, key);
        if (result != -1) {
            cout << "Element found at index " << result << " (Linear Search)." << endl;
        } else {
            cout << "Element not found (Linear Search)." << endl;
        }
    } else if (choice == 2) {
        // Binary Search
        sort(arr, arr + n); // Sort the array first
        cout << "Array sorted for Binary Search: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int result = binarySearch(arr, n, key);
        if (result != -1) {
            cout << "Element found at index " << result << " (Binary Search)." << endl;
        } else {
            cout << "Element not found (Binary Search)." << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
