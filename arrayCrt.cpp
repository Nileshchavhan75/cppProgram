#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10,-21,56,47,-12,-14,-75};
    int size = 7;
    int count = 0;
    for(int i = 0; i< size; i++){
        if(arr[i] < 0){
            count++;
        }
    }
    cout<<"Total negative number: "<<count;
}