#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size eof array: ";
    cin>>size;
    
    int array[size];
    cout<<"Enter the "<<size<<" of array: "<<endl;
    for(int i = 0; i<size; i++){
        cout<<"Enter the "<<i+1<<" Number: ";
        cin>>array[i];
    }

    int maximum = INT_MIN;
    for(int i = 0; i <size; i++){
        if(maximum < array[i]){
            maximum = array[i];
        }
    }
    cout<<"The maximum number: "<<maximum;
    return 0;
}