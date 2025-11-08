#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("data.text");
    fout<<"New data has been comed ";
    fout.close();
}