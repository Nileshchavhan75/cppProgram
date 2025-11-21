#include<iostream>
using namespace std;
int main(){
    int array[5] = {10, 20, 30,40,50};
    array[0] = 70;
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    array[4] = 90;
    cout<<array[4]<<endl;
    cout<<"Niche size the he array ki: "<<endl;
    cout<<sizeof(array);
    return 0;
}