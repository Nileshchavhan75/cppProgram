#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("NewData.txt"); 

    if (!fout.is_open()) {
        cout << "File opening error...." << endl;
        return 1; 
    }
    string name;
    int n;

    cout << "Enter the number of records you want to ADD: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin.ignore(); // Clear the input buffer
        cout << "Entering record " << i << ":\n";

    
        cout << "Enter name: ";
        getline(cin, name);
        fout << "Student Name: " << name <<endl;

        int Roll_no;
        while (true) {
            cout << "Enter Roll_no: ";
            cin >> Roll_no;

            if (Roll_no > 0) {
                fout << "Roll_no: " << Roll_no << endl;
                break;
            } else {
                cout << "Please enter a valid Roll_no.\n";
            }
        }
    }

    fout.close();
    cout << "Data Inserted Successfully." << endl;

    ifstream inf("NewData.txt");
    if (!inf.is_open()) {
        cout << "Error opening the file for reading!" << endl;
        return 1;
    }

    cout << "Reading all student records from the file:\n" << endl;

    string line;
    while (getline(inf, line)) {
        cout << line << endl;
    }
    inf.close();
    return 0;
    
}
