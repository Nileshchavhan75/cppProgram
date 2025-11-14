#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3,4,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ind = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] != arr[i-1]){
            arr[ind] = arr[i];
            ind++;
        }
    }
    for(int i = 0; i<ind; i++){
        cout<<arr[i]<<" ";
    }

}