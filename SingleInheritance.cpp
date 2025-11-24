#include<iostream> 
using namespace std;
class Vahicle{
    protected:
    string brand;
    int maxSpeed;

    public:
    Vahicle(string brand, int maxSpeed){
        this->brand = brand;
        this->maxSpeed = maxSpeed;

    }
};
class car: protected Vahicle{
    public:
    int numOfDoor;

    car(int numOfDoor,string brand, int maxSpeed): Vahicle(brand,maxSpeed){
        this->numOfDoor = numOfDoor;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
        cout<<"numOfDoor: "<<numOfDoor;
    }
};
int main(){
    car c (4,"Audi",200);
    c.display();

}