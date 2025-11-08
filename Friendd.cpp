#include<iostream>
using namespace std;
class circle{
    float redius;
public:
   circle(float a){
     redius = a;
   }
   friend float calculateCircumference(circle c);
    

};
float calculateCircumference(circle c){
   return 2 * 3.14 * c.redius;
}
int main(){
  circle cr(5.5);
  cout<<"Circumference: "<<calculateCircumference(cr)<<endl;
}