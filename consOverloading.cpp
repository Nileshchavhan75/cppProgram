#include<iostream>
using namespace std;
class Book{
    string name;
    string author;
    float price;
        public:
            Book(){}
            Book(string name){
                this->name = name;
             }
             Book(string author, float price){
                this->author = author;
                this->price = price;
             }
            void display(){
                cout<<name<<" "<<author<<" "<<price<<endl;
            }
};
int main(){
    Book b1("Rich dad poor dad");
    Book b2("robert", 12.5);
    b1.display();
    b2.display();
    return 0;
}