#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the number to start sum: ";
    cin>>num1;
    cout<<"Enter the second number to stop sum: ";
    cin>>num2;

    int sum = 0;
    for(int i = num1; i<=num2; i++){
        sum+=i;
    }
    cout<<"the Sum of number in given range: "<<sum<<endl;
    return 0;
}