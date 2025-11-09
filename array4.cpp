#include<iostream>
#include<climits>
using namespace std;
int main(){
    int array[6] = {10,20,30,40,50};
    //int size = sizeof(array)/ sizeof(array[1]);
    int smallest = INT_MAX;
    for(int i = 1; i<=5; i++){
        if(array[i]  < smallest){
            smallest = array[i];
        }
    }
    cout<<"smallest: "<<smallest<<endl;
}