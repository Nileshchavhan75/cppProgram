#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("hello.txt");
    fout<<("Hello world");
    fout.close();

}