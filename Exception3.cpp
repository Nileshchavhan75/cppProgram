#include<iostream>
using namespace std;
int main(){
    try{
    int *p = new int[100000000];
    cout<< "Memory allocated successfully";
    delete []p;
    } catch(const exception &e){
        cout<<"Exeception occured: "<<e.what()<<endl;
    }
}