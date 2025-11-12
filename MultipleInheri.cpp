#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    
};
class Teacher : protected Human{
    int TeacherId;
    float salary;
    string classRoom;
    public:
            Teacher(string name, int age, int TeacherId, float salary, string classRoom){
                this->name = name;
                this->age = age;
                this->TeacherId = TeacherId;
                this->salary = salary;
                this->classRoom = classRoom;
            }
            void Display(){
                cout<<"Name of the Teacher: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
                cout<<"Teacher Id: "<<TeacherId<<endl;
                cout<<"Salary: "<<salary<<endl;
                cout<<"Class Room: "<<classRoom<<endl;

            }
};
class Student : protected Human{
    int Roll_num;
    int PRN_num;
    public:
            Student(string name, int age, int Roll_num, int PRN_num){
                 this->name = name;
                 this->age = age;
                 this->Roll_num = Roll_num;
                 this->PRN_num  = PRN_num;
            }
            void Display(){
                cout<<"Name of the student: "<<name<<endl;
                cout<<"Age of the Student: "<<age<<endl;
                cout<<"Roll Number: "<<Roll_num<<endl;
                cout<<"PRN Number: "<<PRN_num;
            }

};
int main(){
    Teacher T1("Shivay",25, 7, 45000.57, "FYMCA");
    T1.Display();
    cout<<"_____________________________________________"<<endl;
    Student S1("Nilesh",22,12,2412);
    S1.Display();
    return 0;

} 