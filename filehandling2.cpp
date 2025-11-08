#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    string str;
    while(!fin.eof()){
        getline(fin, str);
        cout<<str<<endl;
    }
    fin.close();
}