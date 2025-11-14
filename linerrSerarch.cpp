#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    for(int i = 0; i< size; i++){
        cout<<"Enter "<<i+1<<"Element: ";
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number you want to search: ";
    cin>>target;
    int check = 0;
    for(int j = 0; j<size; j++){
        if(arr[j]==target){
            cout<<"Number is found at index: "<<j<<endl;
            check++;
        }
    }
     if(check == 0){
        cout<<"Number is not present in arr";
     }
    return 0;
}