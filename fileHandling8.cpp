#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("data.txt");
    if(!fout.is_open()){
        cout<<"Error opening file!"<<endl;
        return 1;
    }
    fout<<"Hello Nilesh "<<endl;
    fout<<"Hello Rutuja";

    fout.close();

}