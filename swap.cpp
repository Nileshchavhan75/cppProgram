#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped values inside the function: " << a << " and " << b << endl;
}

int main(){
    int a, b;
    cout << "Enter your 1st value: ";
    cin >> a;
    cout << "Enter the 2nd value: ";
    cin >> b;
    
    swap(a, b);  // Call by value
    cout << "Values in main after swap (call by value): " << a << " and " << b << endl;
    return 0;
}
