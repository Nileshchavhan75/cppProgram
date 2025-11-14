#include<iostream>
using namespace std;
int linearSearch(int array[], int size, int target){
    for(int i = 0; i < size; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int array [] ={ 10,20,45,12,46,75,63,42};
    
    int size = sizeof(array) / sizeof(array[0]);
    int target = 75;

    int result = linearSearch(array, size, target);
    if(result != -1){
        cout<<" Number is found at index: "<<result<<endl;
    }else{
        cout<<" Number is not found in given array"<<endl;
    }

}