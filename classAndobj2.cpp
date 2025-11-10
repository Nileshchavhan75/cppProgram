#include<iostream>
using namespace std;
class book {
    string Title;
    string author;
    float prize;
    public:
    void setTitle(string a){
        Title = a;
    }
    void setauthor(string b){
        author = b;
    }
    void setprize(float c){
        prize = c;
    }
    void getTitle(){
        cout<<"Title: "<<Title<<endl;
    }
    void getauthor(){
        cout<<"Author: "<<author<<endl;
    }
    void getprize(){
        cout<<"Prize: "<<prize;
    }

};
int main(){
    book b1;
    b1.setTitle("Rich dad poor dad");
    b1.setauthor("Robert");
    b1.setprize(250.23f);
    b1.getTitle();
    b1.getauthor();
    b1.getprize();

    return 0;

}