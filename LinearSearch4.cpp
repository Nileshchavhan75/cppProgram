#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the value: ";
    cin>>size;

    int array[size];
    for(int i = 0; i<5; i++){
    cout<<"Enter the "<<i<<" array: ";
    cin>>array[i];
    }

    for(int i = 0; i<5; i++){
        cout<<array[i]<<" "<<endl;
    }
    int search;
    cout<<"Enter the number you want to search: ";
    cin>>search;
    for(int i = 0; i < 5; i++){
        if(search == array[i]){
            cout<<i<<endl;
            break;
        }
    }
    return 0;

}