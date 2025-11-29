#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {5, 10, 15},
        {6, 11, 17},
        {7, 13, 19}
    };
    int maxSum = 0; 
    int rowIndex = -1; 

    for (int i = 0; i < 3; i++) {
        int colSum = 0;
        for (int j = 0; j < 3; j++) {
            colSum += arr[j][i];
            rowIndex = j;
        }
        if (colSum > maxSum) {
            maxSum = colSum;
        }
    }
    cout << "Row with the maximum sum is: " << rowIndex << " with sum: " << maxSum << endl;
    return 0;
}
