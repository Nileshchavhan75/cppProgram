#include<iostream>
using namespace std;
int main(){
    int cost, selling;
    cout<<"Enter cost of an item: ";
    cin>>cost;
    cout<<"Enter selling of an item: ";
    cin>>selling;
    if(selling > cost){
        cout<<"Profit of an item: "<<selling -cost<<endl;
    }else if (selling < cost){
        cout<<"loss of an item: "<<cost- selling<<endl;
    }
    return 0;
}