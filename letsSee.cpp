#include<iostream>
using namespace std;
class Student{
    private :
    string name;
    int age;
    int roll_no;
    string grade;
    public:
    void setname(string n){
        name = n;
    }
    void getname(){
        cout<<name<<endl;
    }
    void setage(int i){
        age = i;
    }
    void getage(){
        cout<<age;
    }
};
int main(){
    Student S1;
    S1.setname("Nilesh");
    S1.getname();
    S1.setage(22);
    S1.getage();
    return 0;
}
