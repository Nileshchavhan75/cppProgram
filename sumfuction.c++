#include<iostream>
using namespace std;
int mini(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }

}
int main(){
    cout<<"min of: "<<mini(45, 100)<<endl;
    cout<<"min of this: "<<mini(75,25)<<endl;
    cout<<"min of this: "<<mini(70,55)<<endl;
    cout<<"min of this: "<<mini(75,65)<<endl;
    cout<<"min of this: "<<mini(75,455)<<endl;
    cout<<"min of this: "<<mini(75,5)<<endl;
    return 0;
   
}