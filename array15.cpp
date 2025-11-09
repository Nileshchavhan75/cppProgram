#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int smallest = INT_MAX;
    int max = INT_MIN;
    int ind = -1;
    int max_ind = -1;
    for(int i = 0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            ind = i;
        }else if(arr[i]>max){
            max = arr[i];
            max_ind = i;
            
        }

    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<max<<endl;
    cout<<"found at index: "<<ind<<endl;
    cout<<"found at index: "<<max_ind<<endl;

}