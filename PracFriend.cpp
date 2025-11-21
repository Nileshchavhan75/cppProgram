#include<iostream>
using namespace std;
class person{
string name;
int age;
float height;
public:
person(string name, int age, float height){
    this->name = name;
    this->age = age;
    this->height = height;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<height<<endl;
    }
   friend int MobileNum(person p);

};
int MobileNum(person p){
    int mobile = 750748;
    return mobile;
}
int main(){
    person p("NIlesh", 22, 5.75);
    p.display();
    //cout<<endl;
    cout<<MobileNum(p)<<endl;
    return 0;
}