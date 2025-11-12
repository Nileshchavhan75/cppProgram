#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;

    public: 
        Human(string name, int age): name(name),age(age){
        }
};
class Employee{
    protected:
    int EmployeeID;
    float salary;

    public:
    Employee(int EmployeeID, float salary) : EmployeeID(EmployeeID), salary(salary){
        }
};
class Manager : public Human, public Employee{
    protected:
    string team;
    string company_name;

    public:
    Manager(string name, int age, int EmployeeID, float salary, string team, string company_name): Human(name,age),Employee(EmployeeID,salary){
        this->team = team;
        this->company_name = company_name;
    }
    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Employee Id: "<<EmployeeID<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"Team: "<<team<<endl;
        cout<<"Company Name: "<<company_name;
    }
    
};
int main(){
    Manager M1("Shivay", 25, 12, 35000.25, "Development", "Google");
    M1.Display();

    return 0;
}