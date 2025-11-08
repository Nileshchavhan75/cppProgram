#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ina;
    ina.open("hello.txt");
    char c;
    //c = ina.get();
    while(ina.get(c)){
        cout<< c;
        //c = ina.get();
    }
    ina.close();
}