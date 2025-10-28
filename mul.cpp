#include<iostream>
using namespace std;
class Youtuber{
public: 
int subscriber;
string channel_name;
};
class specilization{
    public:
    string specilizations;
    
};
class Student: public Youtuber, public specilization {
   int roll_num;
   string std;
public:
  Student(int subscriber,string channel_name, string specilizations,int roll_num,string std){
    this->subscriber = subscriber;
    this->channel_name = channel_name;
    this->specilizations = specilizations;
    this->roll_num = roll_num;
    this->std = std;

  }
void display()
{
    cout<<subscriber<<" "<<channel_name<<" "<<specilizations<<" "<<roll_num<<" "<<std<<endl;
}

};
int main(){
    Student s(27,"Nil_animation","CS",12,"MCA");
    s.display();
    return 0;


}