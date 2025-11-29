#include<iostream>
using namespace std;
int main(){
    int arr[5][3];
    cout<<"Enter the marks: ";
    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int num = 1;
    for(int i = 0; i<5; i++){
        cout<<"Mark of " << num<<" st Student: ";
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        num++;
        cout<<endl<<" ";
    }


}
