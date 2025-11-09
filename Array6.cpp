#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 1, 32, 1, 1, 1, 4, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int var = 1;
    int count = 0;
    for(int k = 0; k <size-1; k++){
    
        if(var == arr[k]){
            count++;
        }
    }
    cout<<" 1 in given array: "<<count;
}
