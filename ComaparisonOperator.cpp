#include<iostream>
using namespace std;
class Compair{
    int x;
    int y;
    public:
    Compair(int a, int b){
        x = a;
        y = b;
    }
    
    bool operator==(const Compair &a){
        return(x == a.x && y == a.y);
    }

};
int main(){
    Compair c(10,20);
    Compair c2(10,20);

    if(c == c2){
        cout<<"c and c2 are equal "<<endl;
    }else{
        cout<<"c and c3 are not equal "<<endl;
    }
   
}
    
