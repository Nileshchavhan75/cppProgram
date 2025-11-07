#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"Enter the size of array: ";
    cin>>size;
    int array[size]; 
    cout<<"Enter the "<< size <<" of array: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    int index;
    cout<<"Enter the index that you want to access: ";
    cin>>index;
    try{
        if(index < 0 || index >= size ){
            throw "Array out of bond exception: ";
        }
    cout<<"The value of array that you entered: "<<array[index];
    }catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }
    return 0;
}