#include<iostream>
using namespace std;
class person{
    protected:
        string name;
        int age;
        string address;

public:
    person(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    virtual void DisplayInfo(){
        cout<<" Name: "<<name<<endl;
        cout<<" Age: "<<age<<endl;
        cout<<" address: "<<address<<endl;
    }

};
class Student : public person{
    protected:
    int rollNum;
    string course;
    public:
    Student(int rollnum, string course, string name, int age, string address):person(name, age,address){
        this->rollNum = rollNum;
        this->course = course; 
    }
    void DisplayInfo(){
        person::DisplayInfo();
        cout<<"ROll number: "<<rollNum<<endl;
        cout<<"course: "<<course<<endl;
    }

};
class Graduate : public Student{
    int graduateYear;
    public:
        Graduate(int rollnum, string course, string name, int age, string address,int graduateYear):Student(rollNum,course,name,age,address){
            this->graduateYear = graduateYear;
        }
        void DisplayInfo(){
        Student::DisplayInfo();
        cout<<"graduate year: "<<graduateYear<<endl;
    }

};
int main(){
 Graduate g(12,"BCA","Nilesh",21, "Kurha kakoda",2024);
 g.DisplayInfo();
}
