#include<iostream>
using namespace std;
class Box{
    int lenght;
    int breadth;
    int height;

public:
    Box(int lenght, int breadth, int height){
        this -> lenght = lenght;
        this -> breadth = breadth;
        this -> height = height;

    }
    
    friend int calculateVolume(Box br);
};
int calculateVolume(Box br){
    int volume = br.lenght* br.breadth* br.height ;
    return volume;
}
int main(){
    Box B(5,6,7);
    cout<<"Box volume: "<<calculateVolume(B)<<endl;

}