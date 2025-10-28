#include<iostream>
using namespace std;
class BankAccount{
  string name;
  int account_number;
  string Type_of_Account;
  float balance;

public:
BankAccount(string name, int account_number, string Type_of_account, float balance){
    this->name = name;
    this->account_number = account_number;
    this->Type_of_Account = Type_of_Account;
    this->balance = balance;

}
 void Display(){
    cout<<"Name of the Account holder: "<<name<<endl;
    cout<<"Account number: "<<account_number<<endl;
    cout<<"Type: "<<Type_of_Account<<endl;
    cout<<"blance: "<<balance<<endl;

}
    
};
int main(){
    BankAccount Ba("Shivay", 75075,"Saving", 75074.5);
    Ba.Display();
    return 0;

}

