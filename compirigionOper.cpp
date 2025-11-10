#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
};
    class student : protected person{
        int roll_num;
        float mark;
        public:
        student(string name, int age, int roll_num,float mark){
            this->name = name;
            this->age = age;
            this->roll_num = roll_num;
            this->mark = mark;
        }
        void display(){
            cout<<"Name of the student: "<<name<<endl;
            cout<<"age of the student: "<<age<<endl;
            cout<<"roll_num: "<<roll_num<<endl;
            cout<<"marks : "<<mark<<endl;
        }
    };
int main(){
    student s1("Nillu", 22, 12, 90.5f);
    cout<<endl;
    student s2("Rutu", 21,14,94.56f);
    s1.display();
    s2.display();
    return 0;

}