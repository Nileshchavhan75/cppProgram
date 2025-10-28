#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;
};
class student : public Human{
    int roll_num;
    string std;
public:
   student(string name, int age, int roll_num, string std){
    this->name = name;
    this->age = age;
    this->roll_num = roll_num;
    this->std = std;
   }
void display(){
    cout<<name<<" "<<age<<" "<<roll_num<<" "<<std<<endl;
}

};
int main(){
    student s1("Shivay", 20,07,"MCA");
    s1.display();
    return 0;

}