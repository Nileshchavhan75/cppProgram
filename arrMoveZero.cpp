#include<iostream>
using namespace std;
int main(){
    int arr[10] = {12,14,0,0,8,26,0,0,44,55};
    int s = sizeof(arr)/sizeof(arr[0]);
    int ind = 0;
    for(int i = 0; i<s; i++){
        if(arr[i] != 0){
            arr[ind] = arr[i];
            ind++;
        }
    }
    for(int i = ind; i<s; i++){
        arr[ind] = 0;
        ind++;
    }
    for(int i = 0; i<ind; i++){
        cout<<arr[i]<<" ";
    }
}