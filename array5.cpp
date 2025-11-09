#include<iostream>
using namespace std;
int main(){
    int array[5];
    cout<<"Enter 5 Element: ";
    for(int i = 0; i <=4; i++){
        cin>>array[i];
    }
    int sum = 0;
    for(int i = 0; i<=4; i++){
        sum += array[i];
    }
    cout<<"Sum of Array: "<<sum<<endl;
}