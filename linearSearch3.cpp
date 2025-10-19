#include<iostream>
#include<climits>
using namespace std;
int main(){
    int array[5] = {11,34,23,45,43};
    int largest = INT_MIN;
    for(int i = 0; i<5; i++){
        if(array[i] > largest){
        largest = array[i];
    }
    }
    cout<<"largest: "<<largest<<endl;
    int second_largest = INT_MIN;

    for(int i =1; i<5; i++){
        if(array[i] < largest && second_largest ){
            second_largest = array[i];
        }    
        }
        cout<<"Second largest number: "<<second_largest<<endl;
}