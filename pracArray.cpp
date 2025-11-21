#include<iostream>
#include<climits>
using namespace std;

int main() {
    int array[] = {1, 23, 4, 56, 45, 34};
    int size = 6;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (array[i] > secondLargest && array[i] < largest) {
            secondLargest = array[i];
        }
    }

    cout << "Largest value is: " << largest << endl;
    cout << "Second largest value is: " << secondLargest << endl;

    return 0;
}
