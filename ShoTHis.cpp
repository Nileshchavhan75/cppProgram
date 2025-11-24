#include<iostream>
using namespace std;
class RutujaThisKeyProblem{
    string name;
    int Roll_num;
    string city;
                public:
                        RutujaThisKeyProblem(string name, int Roll_num, string city){
                        //bagh me class madhe je variable name define kel ahe tech naw
                        //me constructor madhe pan dile ahe, aani jevha tu tyana assigh 
                        //karshil tevha compiler error din, tar to error nahi hou manun aapn 
                        //this keyword use karto,
                        this->name = name;
                        this->Roll_num = Roll_num;
                        this->city = city;
                        }
                        void display(){
                            cout<<name<<" "<<Roll_num<<" "<<city;

                        }
};
int main(){
    RutujaThisKeyProblem R1("Rutu", 14,"Sangali(Kunjgoan)");
    R1.display();
    return 0;

}
