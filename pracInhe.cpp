#include<iostream>
using namespace std;
class vahicle{
    protected:
  string car_name;
};
class Car : public vahicle{
    string brand;
    int model;
public:
  Car(string a, string b, int c){
    car_name = a;
    brand = b;
    model = c;
} 
void dispay(){
    cout<<"Car Name: "<<car_name<<endl;
    cout<<"Brand: "<<brand<<endl;
    cout<<"Model: "<<model;
}
   

};
int main(){
    Car cr("Audi Q7", "Audi", 2021 );
    cr.dispay();
    return 0;


}