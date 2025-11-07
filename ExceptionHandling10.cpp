#include<iostream>
#include<stdexcept>
using namespace std;
class AgeValidation:public exception{
    const char* what() const noexcept{
        return "valid age 0 - 150 ";
    }
};
int main(){
    try{
        int age;
        cout<<"Enter age: ";
        cin>>age;

        if(age < 0 || age > 150){
            throw AgeValidation();
        }
        cout<<"your age is "<<age;
    }catch(const exception& e){
        cout<<"Alert: "<< e.what();
    }
    return 0;
}