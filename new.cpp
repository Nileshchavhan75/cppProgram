#include<iostream>
using namespace std;

class BankAccount {
    string name;
    int account_number;
    string Type_of_Account;
    float balance;

public:
    void getdata(string name, int account_number, string Type_of_account, float balance) {
        this->name = name;
        this->account_number = account_number;
        this->Type_of_Account = Type_of_account;
        this->balance = balance;
    }

    void display() {
        cout << "Name of the Account holder: " << name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Type: " << Type_of_Account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of accounts to create: ";
    cin >> n;

    BankAccount accounts[n];

    string name, type;
    int acc_num;
    float balance;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for account " << i + 1 << endl;
        
        cout << "Enter Name: ";
        cin >> name;
        
        cout << "Enter Account Number: ";
        cin >> acc_num;
        
        cout << "Enter Type of Account: ";
        cin >> type;
        
        cout << "Enter Balance: ";
        cin >> balance;

        accounts[i].getdata(name, acc_num, type, balance);
    }
    for (int i = 0; i < n; i++) {
        cout << "\nDetails of account " << i + 1 << ":" << endl;
        accounts[i].display();
    }

    return 0;
}
