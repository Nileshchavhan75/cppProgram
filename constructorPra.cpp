#include<iostream>
using namespace std;
class College{
    string teacher_name;
    int lecture_room;
    string subject;

public:
//  College(string teacher_name, int lecture_room, string subject){
//     this->teacher_name = teacher_name;
//     this->lecture_room = lecture_room;
//     this->subject = subject;
 inline College(string a, int b, string c): teacher_name(a), lecture_room(b), subject(c){

 }
 void display(){
    cout<<teacher_name<<" "<<lecture_room<<" "<<subject<<endl;
 }
};
int main(){
    College cl("Atish", 3, "CPP");
    cl.display();
    return 0;

}