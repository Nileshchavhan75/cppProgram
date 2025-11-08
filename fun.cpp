#include<iostream>
using namespace std;
void EvenORodd(int n){
    if(n % 2 == 0){
        cout<<"the number is even \n";
    }else{
        cout<<"the number is odd \n";
    }
 }

int main(){
    int number;
    cout<<"Enter the number to check even or odd: ";
    cin>>number;
        EvenORodd(number);
        EvenORodd(25);
        return 0;
    }
    
