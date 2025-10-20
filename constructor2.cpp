#include<iostream>
using namespace std;
class Rectangel{
    int lenght;
    int breadth;
    public:
        Rectangel(int lenght, int breadth):lenght(lenght), breadth(breadth){

        }
        int area(){
            return lenght * breadth;
        }
};
int main(){
    Rectangel R1(5,10);
    cout<< R1.area();
    return 0;
    
}