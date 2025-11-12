#include<iostream>
using namespace std;
class Human{
   protected:
   string name;
   int age;
   public: 
   Human(){
    cout<<"Ram Ram"<<endl;
   }
};
class Employee : public Human {
   protected:
   int salary;

   public:
   Employee(){
    cout<<"jay Hanuman"<<endl;
   }

};
class manager : public Employee{

    string deparatment;

    public: 
    manager(string name, int age,int salary, string deparatment){
    this->name = name;
    this->age = age;
    this->salary = salary;
    this->deparatment = deparatment;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<deparatment<<" "<<endl;
    }
};
int main(){
    manager m1("Nilesh", 22, 2345,"finace");
    m1.display();

    return 0;

}