#include<iostream> 
using namespace std;
class Vahicle{
    public:
    virtual void displayDetails() = 0;
};
class car: public Vahicle{
    string brand;
    int model;
    public:
    car(string s, int m){
        brand = s;
        model = m;
    }
    void displayDetails(){
        cout<<"Name of the car: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
    }
};
class Bike:public Vahicle{
    string type;
    string engine;
    public:
    Bike(string s, string r){
        type = s;
        engine = r;
    }
    void displayDetails(){
        cout<<"Type: "<<type<<endl;
        cout<<"Engine: "<<engine<<endl;
    }
};
int main(){
    Vahicle *v;
    car c("Audi", 07);
    v = &c;
    v->displayDetails();

    Bike b("two wheel", "150cc");
    v = &b;
    v->displayDetails();

    return 0;
}
