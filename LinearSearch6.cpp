#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int array[size];

    cout<<"Enter the "<<size<<" array: "<<endl;

    for(int i = 0; i <size; i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>array[i];
    }
    
    for(int i = 0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int search,check=0;
    cout<<"Enter the number you want to search: ";
    cin>>search;

    for(int i = 0; i <size; i++){
        if(search == array[i]){
            check=1;
            cout<<"number is found at index "<<i;
            break;
        }
         
    }
    if(check==0){
        cout<<"Number is not found: "<<endl;
    }
      
      return 0;

    

}