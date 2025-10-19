#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<" Enter the size of element: ";
    cin>>size;

    int array[size];
    cout<<" Enter the: "<<size<<" of Array Element:  "<<endl;
    for(int i = 0; i < size; i++){
        cout<<" Enter the:: "<<i + 1 <<" Element: ";
        cin>>array[i];
    }

    cout<<" Printing the Array: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    int search;
    cout<<" Enter the element that you want to search in Array: ";
    cin>>search;

    int flag = 0;

    for(int i = 0; i<size; i++){
        if(search == array[i]){
        cout<<" Element found at index: "<<i<<endl;
        flag = 1;
        }
        
    }
    if(flag == 0){
        cout<<" Element not found in th Array";
    }
   
   return 0 ;
}