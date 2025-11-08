#include <iostream>
using namespace std;
int swap(int a , int b){
    int c = a;
        a = b;
        b = c;
cout<<"swaping the value: "<< a <<endl<<b<<endl;

}
int main(){
    int d, e;
    cout<<"enter number d:";
    cin >>d;
    cout<<"enter number e: ";
    cin>>e;
    swap(d,e);
    cout<<"swaping: "<<d<<"and"<<e;
    return 0;
}
