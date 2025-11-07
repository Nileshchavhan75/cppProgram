#include<iostream>
using namespace std;
class Coustomer{
    string name;
    int balance;
    int account_num;

    public: 
    
    Coustomer(string name, int balance, int account_num):name(name), balance(balance),account_num(account_num){

    }

    void disposit(int amount){
        
        if(balance >0){
            balance += amount;
            cout<<amount<<"  rupees is Credited to successfully"<<endl;
        }
        else{
            cout<<" should be grater than 0"<<endl;
        }

    }
    void withdraw(int amount){
    
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<amount<<" debited successfully, Remaing balance: "<<balance<<endl;
        }
        else if(amount > balance){
            cout<<"your account is low: "<<balance<<endl;

        }else{
            cout<<"Must be greater than 0 "<<endl;
        }
    }
    
};
int main(){
    Coustomer c1("Nilesh", 4562, 750748);
    c1.disposit(5000);
    c1.withdraw(50);
}