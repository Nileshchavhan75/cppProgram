#include<iostream>
using namespace std;
class Number{
    int n;

        public:
            Number(int a): n(a){

            }
        void display(){
            cout<<n<<endl;
              
        }
        Number operator++(){
        Number temp = *this;
            ++n;
            return temp;
        }
        Number operator--(int){
            Number temp = *this;
            n--;
            return temp;
        }
        
};
int main(){
    Number n1(5);
    cout<<"Number before increment: ";
    n1.display();

    //prefix increment 
    ++n1;
    cout<<"Number after increment: ";
    n1.display();
    cout<<endl;

    //Postfix decrement
    n1--;
    cout<<"Number after postfix decremnt: ";
    n1.display();
    return 0;
    
}