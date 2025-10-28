#include<iostream>
using namespace std;
class Employee{
protected:
 string name;
 int id;
 float salary;
};
class manager : public Employee{
string department;
public:
manager(string name, int id, float salary, string department){
    this->name = name;
    this->id = id;
    this->salary = salary;
    this->department = department;
}
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"id: "<<id<<endl;
    cout<<"salary: "<<salary<<endl;
    cout<<"department: "<<department;
}

};
int main(){
    manager m("Shivay", 12, 25000.52, "Softwere developer");
    m.display();
    return 0;
}