#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string brand;
    int maxSpeed;
 
    public:
    Vehicle(string brand, int maxSpeed){
        this->brand = brand;
        this->maxSpeed = maxSpeed;
    }
    
};
class car: public Vehicle{
    
};