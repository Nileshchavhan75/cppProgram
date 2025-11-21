#include<iostream>
using namespace std;
class Employee{
    string name;
    int id;
    int salary;
    public:
    Employee(string name, int id, int salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
    }

};
int main(){
    Employee e1 ("Nilesh", 12, 10000);
    Employee e2("Shivay", 10, 15000);
    e1.display();
    e2.display();
    return 0;


}