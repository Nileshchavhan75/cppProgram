#include<iostream>
using namespace std;
int calculateArea(int redius){ //for circle
    return 3.14 * redius * redius;
}
int calculateArea(int lenght, int wedth){ //for rectangle
    return lenght * wedth;

}
int main(){
    int redius = 5;
    int lenght = 4, wedth = 6;
    cout<<calculateArea(redius);
    cout<<endl;
    cout<<calculateArea(lenght, wedth);
    return 0;

}