#include<iostream>
using namespace std;
class Employee{
    string name;
    int emp_id;
    float salary;
                public:
                        Employee(string name, int emp_id, float salary){
                            this ->name = name;
                            this->emp_id = emp_id;
                            this->salary = salary;
                        }
                        Employee(Employee &e3){
                            name = e3.name;
                            emp_id = e3.emp_id;
                            salary = e3.salary;
                        }
                        void display(){
                            cout<<name<<" "<<emp_id<<" "<<salary<<endl;
                        }

                    
};
int main(){
    Employee e1("Nilesh",07, 5000.67);
    Employee e2 =  e1;
    e2.display();
    //e1.display();
    return 0;
}