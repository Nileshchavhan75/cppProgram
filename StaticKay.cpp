#include<iostream>
using namespace std;
class test{
    string name;
    int balance;
    static int count;
    
    public:
    test(string a, int b){
        name = a;
        balance = b;
        count++;
    }
    void display(){
        cout<<name<<" "<<balance<<" "<<endl;
        cout<<"Total object = "<<count<<endl;
    }
    // static void AccesStatic(){
    //     cout<<count<<endl;
    // }

};
int test :: count = 0;

int main(){
    test t1("Nilesh", 5000);
    test t2("Rutuja", 5050);
    //test::AccesStatic();
    t2.display();
    return 0;

}