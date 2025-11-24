#include<iostream>
using namespace std;
int sumFon(int n){
    //cout<<"enter the value:";
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main(){
    cout<<sumFon(5);
    return 0;

}